#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#define HEIGHT 10
#define WIDTH 10

void brighten_image(char* p, int w, int h) {
	for (int i = 0; i < w * h; i++) {
		p[i]--;
		if (p[i] < 0)
			p[i]++;
	}
}
void darken_image(char* p, int n) {
	for (int i = 0; i < n; i++) {
		p[i]++;
		if (p[i] > 9)
			p[i]--;
	}
}
void print_image(char* p, int w, int h) {
	int count = 0;

	for (int i = 0; i < w * h; i++) {
		printf("%d ", p[i]);
		count++;
		if (count == 10) {
			printf("\n");
			count = 0;
		}
	}
}

int main(void) {
	char image[HEIGHT * WIDTH] = {
	0,0,0,0,9,0,0,0,0,0,
	0,0,0,9,9,0,0,0,0,0,
	0,0,9,0,9,0,0,0,0,0,
	0,0,0,0,8,0,0,0,0,0,
	0,0,0,0,9,0,0,0,0,0,
	0,0,0,0,7,0,0,0,0,0,
	0,0,0,0,8,0,0,0,0,0,
	0,0,0,0,9,0,0,0,0,0,
	0,0,0,0,9,0,0,0,0,0,
	0,0,6,6,9,7,7,0,0,0 };
	char* p = image;
	int select = 0;

	while (1) {
		printf("ȭ���� �������ּ���(���=1, ��Ӱ�=2, ����=3): ");
		scanf("%d", &select);

		if (select == 1) {
			darken_image(p, HEIGHT * WIDTH);
			system("cls");
			print_image(p, WIDTH, HEIGHT);
			printf("��Ⱑ �����߽��ϴ�.\n\n");
		}
		else if (select == 2) {
			brighten_image(p, WIDTH, HEIGHT);
			system("cls");
			print_image(p, WIDTH, HEIGHT);
			printf("��Ⱑ �����߽��ϴ�.\n\n");
		}
		else if (select == 3)
			break;
		else {
			system("cls");
			printf("�߸��� �Է��Դϴ�.\n");
		}
	}

	printf("���α׷��� �����մϴ�.");

	return 0;
} 