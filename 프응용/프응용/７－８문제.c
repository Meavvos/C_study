#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;
	int i;

	while (1) {
		printf("\n ���ڿ� �Է� : %s\n",answer);
		printf("���ڸ� �����ϼ� : \n");
		ch = _getch();
		/*7*/
		
		for ( i = 0; i < 100; i++)
		{
			if (ch == solution[i])
			{
				answer[i] = ch;
			}
		
		}
		int match = 1;  // ���� ���� �� �ʱ�ȭ while ���� �ȿ� ��ġ
		for (i = 0; i < 100; i++) {
			if (solution[i] != answer[i]) {
				match = 0;  // ��ġ���� �ʴ� ���ڰ� ������ false�� ����
				break;
			}
		}

		if (match) {  // ��� ���ڰ� ��ġ�ϸ� ���� ����
			printf("\n������ ������ϴ�! ���ڿ�: %s\n", answer);
			break;  // ������ ���߸� ���� ����
		}

	}
	return 0;

}