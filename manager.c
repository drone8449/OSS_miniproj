#include "manager.h"

void listProduct(Product s[], int count){
        printf(" No  Name   weight   price   star  c_star\n");
        for(int i = 0; i<count; i++){
                if(strlen(s[i].name) == 0) continue;
                printf("%2d ", i+1);
                readProduct(&s[i]);
        }
}

int selectDataNo(Product s[], int count){
        int no;
        listProduct(s, count);
        printf("번호는(취소:0)? ");
        scanf("%d", &no);

        return no;
}

int loadData(Product s[]){
	int count = 0; int i = 0;
	FILE *fp;
	fp = fopen("product.txt", "rt");
	if(fp==NULL)
	{
		printf("\n=> 파일 없음!\n");
		return 0;
	}
	for(; i < 20; i++){
		fscanf(fp, "%s", s[i].name);
		if(feof(fp)) break;
		fscanf(fp, "%d", &s[i].weight);
		fscanf(fp, "%d", &s[i].price);
		fscanf(fp, "%d", &s[i].star);
		fscanf(fp, "%d", &s[i].count_star);
	}

	fclose(fp);
	printf("=> 로딩 성공!\n");

	return i;
}

void saveData(Product s[], int count){
	FILE *fp;
	fp = fopen("product.txt", "wt");

	for(int i = 0; i < count; i++){
		if(s[i].weight == -1) continue;
		fprintf(fp, "%s %d %d %d %d\n",s[i].name,s[i].weight,s[i].price,s[i].star,s[i].count_star);
	}
	fclose(fp);
	printf("=> 저장됨!");
}

void searchName(Product *s, int count){
	int scnt = 0;
	char search[20];

	printf("검색할 이름? ");
	scanf("%s", search);

	printf(" No  Name   weight   price   star  c_star\n");
	for(int i = 0; i < count; i++){
		if(s[i].weight == -1) continue;
		if(strstr(s[i].name, search)){
			printf("%2d ", i+1);
			readProduct(&s[i]);
			scnt++;
		}
	}
	if(scnt == 0) printf("=> 검색된 데이터 없음!");
	printf("\n");
}

void searchPrice(Product *s, int count){
	int scnt = 0;
	int search = 0;

	printf("검색할 가격? ");
	scanf("%d", &search);

	printf(" No  Name   weight   price   star  c_star\n");
        for(int i = 0; i < count; i++){
		if(s[i].weight == -1) continue;
		if(s[i].price == search){
			printf("%2d ", i+1);
			readProduct(&s[i]);
			scnt++;
		}
	}
	if(scnt == 0) printf("=> 검색된 데이터 없음!");
	printf("\n");
}

void searchStar(Product *s, int count){
        int scnt = 0;
        int search = 0;

        printf("검색할 별점? ");
        scanf("%d", &search);

        printf(" No  Name   weight   price   star  c_star\n");
        for(int i = 0; i < count; i++){
                if(s[i].weight == -1) continue;
                if(s[i].star == search){
                        printf("%2d ", i+1);
                        readProduct(&s[i]);
                        scnt++;
                }
        }
        if(scnt == 0) printf("=> 검색된 데이터 없음!");
        printf("\n");
}

