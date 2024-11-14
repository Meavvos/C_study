#define _CRT_SECURE_NO_WARNINGS
#define SIZE 5
#include <stdio.h>

struct item
{
	int num;
	char name[20];
	int price;

};

int main(void) {

	struct item list[SIZE];
	int i;

	for ( i = 0; i < SIZE; i++)
	{
		printf("상품번호 입력 :");
		scanf("%d", &list[i].num);
		printf("상품명 입력 :");
		scanf("%s", list[i].name);
		printf("상품 가격 입력 :\n");
		scanf("%d", &list[i].price);

	}
	printf("----------------------------------------------");
	for ( i = 0; i < SIZE; i++)
	{
		printf("상품번호 : %d, 상품명 : %s, 상품 가격 : %d\n", list[i].num, list[i].name,list[i].price);
	}
	printf("----------------------------------------------");
	getchar();
	return 0;


}