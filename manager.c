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

