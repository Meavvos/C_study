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
		printf("��ǰ��ȣ �Է� :");
		scanf("%d", &list[i].num);
		printf("��ǰ�� �Է� :");
		scanf("%s", list[i].name);
		printf("��ǰ ���� �Է� :\n");
		scanf("%d", &list[i].price);

	}
	printf("----------------------------------------------");
	for ( i = 0; i < SIZE; i++)
	{
		printf("��ǰ��ȣ : %d, ��ǰ�� : %s, ��ǰ ���� : %d\n", list[i].num, list[i].name,list[i].price);
	}
	printf("----------------------------------------------");
	getchar();
	return 0;


}