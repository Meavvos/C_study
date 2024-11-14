#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char solution[100] = "meet at midnight";
	char answer[100] = "____ __ ________";
	char ch;
	int i;

	while (1) {
		printf("\n 문자열 입력 : %s\n",answer);
		printf("글자를 추측하셈 : \n");
		ch = _getch();
		/*7*/
		
		for ( i = 0; i < 100; i++)
		{
			if (ch == solution[i])
			{
				answer[i] = ch;
			}
		
		}
		int match = 1;  // 변수 선언 및 초기화 while 루프 안에 위치
		for (i = 0; i < 100; i++) {
			if (solution[i] != answer[i]) {
				match = 0;  // 일치하지 않는 문자가 있으면 false로 변경
				break;
			}
		}

		if (match) {  // 모든 문자가 일치하면 게임 종료
			printf("\n정답을 맞췄습니다! 문자열: %s\n", answer);
			break;  // 정답을 맞추면 루프 종료
		}

	}
	return 0;

}