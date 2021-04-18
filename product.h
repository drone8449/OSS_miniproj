#ifndef PH
#define PH

#include <stdio.h>
#include <string.h>

typedef struct product{
	char name[20];
	int weight;
	int price;
	int star;
	int count_star;
}Product;

void readProduct(Product *s);
int selectMenu();
int addProduct(Product *s);
void updateProduct(Product *s);
void deleteProduct(Product *s);

#endif
