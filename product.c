#include "product.h"

int selectMenu(){
	int menu;

	printf("\n*** 쇼핑몰 관리 ***\n");
	printf("1. 조회\n");
	printf("2. 추가\n");
	printf("3. 수정\n");
	printf("4. 삭제\n");
	printf("0. 종료\n");
	printf("=> 원하는 메뉴는? ");
	scanf("%d", &menu);

	return menu;
}

int addProduct(Product *s){
	printf("제품명은? ");
	scanf("%s", s->name);
	
	printf("중량은? ");
	scanf("%d", &s->weight);

	printf("판매가격은? ");
	scanf("%d", &s->price);

	printf("별점은? ");
	scanf("%d", &s->star);
	
	printf("별점개수는? ");
	scanf("%d", &s->count_star);
}

void readProduct(Product *s){
	printf("%8s %6d %6d %5d %8d\n", s->name, s->weight, s->price, s->star, s->count_star);
}

void updateProduct(Product *s){
        printf("제품명은? ");
        scanf("%s", s->name);

        printf("중량은? ");
        scanf("%d", &s->weight);

        printf("판매가격은? ");
        scanf("%d", &s->price);

        printf("별점은? ");
        scanf("%d", &s->star);

        printf("별점개수는? ");
        scanf("%d", &s->count_star);

	printf("=> 수정성공! \n");
}

void deleteProduct(Product *s){
        strcpy(s->name,""); 
	s->weight = -1;
	s->price = -1;
	s->star = -1;
	s->count_star = -1;
	
	printf("=> 삭제됨! \n");
}
