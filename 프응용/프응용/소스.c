#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i;
    int results[6] = { 0 };  // 주사위 결과를 저장할 배열 (1~6의 빈도)
    int roll;
    int totalRolls = 60000;

    srand(time(NULL));

    for (i = 0; i < totalRolls; i++) {
        roll = rand() % 6;  // 0부터 5까지의 난수 생성
        results[roll]++;    // 해당 주사위 값의 빈도 증가
    }

    printf("주사위 면\t빈도\n");
    for (i = 0; i < 6; i++) {
        printf("%d\t%d\n", i + 1, results[i]);
    }
    return 0;
}

