#include "product.h"
#include "manager.h"

int main(){
	Product s[20];
	int index=0;
	int count=0, menu;

	count = loadData(s);
	index = count;
#ifdef DEBUG
	printf("=>DEBUGMODE");
#endif
	while(1){
		menu = selectMenu();
		if(menu == 0){
			printf("종료됨!\n");
			break;
		}
		if(menu == 2){
			count += addProduct(&s[index++]);
		}
		else if(menu == 1){
			if(count>0){
				listProduct(s, index);
			}
		}
		else if(menu == 3){
			int no = selectDataNo(s, index);
			if(no>0){	
				updateProduct(&s[no-1]);
			}
		}
		else if(menu == 4){
			int no = selectDataNo(s, index);
			if(no>0){
				deleteProduct(&s[no-1]);
				count--;
			}
		}
		else if(menu == 5){
			saveData(s, index);
		}
		else if(menu == 6){
			searchName(s, count);
		}
		else if(menu == 7){
			searchPrice(s, count);
		}
		else if(menu == 8){
			searchStar(s, count);
		}
	}
	return 0;
}
