#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h> 
#include <string.h> 
#include <windows.h> 
#define SIZE 100 

struct employee {
	char name[20];
	int price;
	int number;
	int f_price;
};
void get_name(struct employee* e) {
	scanf("%s", &e->name);
	getchar();
}
void question(char* reply) {
	while (*reply != 'y' && *reply != 'Y') {
		printf("계속 검색하시겠습니까?(y/n) ");
		scanf("%c", reply);

		if (*reply == 'n' || *reply == 'N')
			break;
		else if (*reply != 'y' && *reply != 'Y')
			printf("잘못된 입력입니다.\n");
	}
}

int main(void)
{
	struct employee e[SIZE];
	int x = 0, result = 0, number = 0;
	char reply;

	while (1) {
		printf("상품의 이름을 입력하세요(종료 = end 입력): ");
		get_name(&e[x]);
		if (strcmp(e[x].name, "end") == 0 || strcmp(e[x].name, "END") == 0 || strcmp(e[x].name, "End") == 0)
			break;
		printf("상품의 가격을 입력하세요: ");
		scanf("%d", &e[x].price);
		printf("상품의 개수를 입력하세요: ");
		scanf("%d", &e[x].number);
		getchar();

		e[x].f_price = e[x].price * e[x].number;
		x++;
	}

	while (1) {
		reply = 'n';
		system("cls");
		printf("몇 번째의 상품을 검색하시겠습니까?(정수로 입력) ");
		scanf("%d", &number);
		getchar();
		if (number == x) {
			printf("%d번은 end 번호입니다.\n", number);
			question(&reply);
			if (reply == 'n' || reply == 'N')
				break;
		}

		printf("===================\n");
		printf("상품의 이름: %s\n", e[number].name);
		printf("상품의 가격: %d\n", e[number].price);
		printf("상품의 개수: %d\n", e[number].number);
		printf("===================\n");
		printf("총재고액: %d\n\n", e[number].f_price);
		question(&reply);
		if (reply == 'n' || reply == 'N')
			break;
	}
	printf("\n프로그램을 종료합니다.");

	return 0;
}

