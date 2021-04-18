#include <stdio.h>
#include <string.h>
#include "product.h"

void listProduct(Product s[], int count);
int selectDataNo(Product s[], int count);
int loadData(Product s[]);
void saveData(Product s[], int count);
void searchName(Product *s, int count);
void searchPrice(Product *s, int count);
void searchStar(Product *s, int count);
