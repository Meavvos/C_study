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
		printf("��� �˻��Ͻðڽ��ϱ�?(y/n) ");
		scanf("%c", reply);

		if (*reply == 'n' || *reply == 'N')
			break;
		else if (*reply != 'y' && *reply != 'Y')
			printf("�߸��� �Է��Դϴ�.\n");
	}
}

int main(void)
{
	struct employee e[SIZE];
	int x = 0, result = 0, number = 0;
	char reply;

	while (1) {
		printf("��ǰ�� �̸��� �Է��ϼ���(���� = end �Է�): ");
		get_name(&e[x]);
		if (strcmp(e[x].name, "end") == 0 || strcmp(e[x].name, "END") == 0 || strcmp(e[x].name, "End") == 0)
			break;
		printf("��ǰ�� ������ �Է��ϼ���: ");
		scanf("%d", &e[x].price);
		printf("��ǰ�� ������ �Է��ϼ���: ");
		scanf("%d", &e[x].number);
		getchar();

		e[x].f_price = e[x].price * e[x].number;
		x++;
	}

	while (1) {
		reply = 'n';
		system("cls");
		printf("�� ��°�� ��ǰ�� �˻��Ͻðڽ��ϱ�?(������ �Է�) ");
		scanf("%d", &number);
		getchar();
		if (number == x) {
			printf("%d���� end ��ȣ�Դϴ�.\n", number);
			question(&reply);
			if (reply == 'n' || reply == 'N')
				break;
		}

		printf("===================\n");
		printf("��ǰ�� �̸�: %s\n", e[number].name);
		printf("��ǰ�� ����: %d\n", e[number].price);
		printf("��ǰ�� ����: %d\n", e[number].number);
		printf("===================\n");
		printf("������: %d\n\n", e[number].f_price);
		question(&reply);
		if (reply == 'n' || reply == 'N')
			break;
	}
	printf("\n���α׷��� �����մϴ�.");

	return 0;
}

