#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <string.h>
int main(void) {
	char solution[100] = "meet at midnight";	// ������ ��� �ִ� ���� �迭
	char answer[100] = "____ __ ________";	// ������� ����ڰ� ���� ���ڿ�
	char ch;
	int i;
	while (1) {
		printf("\n���ڿ��� �Է��Ͻÿ�: %s \n", answer);
		printf("���ڸ� �����Ͻÿ�: ");
		ch = _getch();
		// ����ڰ� �Է��� ���ڸ� answer[]�� �־ ������ ���Ѵ�.
		for (i = 0; solution[i] != '\0'; i++) {
			// ����ڰ� ���߾����� ���ڸ� ���̰� �Ѵ�.
			if (solution[i] == ch)
				answer[i] = ch;
		}
		if (strcmp(solution, answer) == 0) break; // ����� ��ġ�ϴ����� �˻�
	}
	return 0;
}
