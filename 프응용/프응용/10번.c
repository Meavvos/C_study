#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void rollDice() {
    int i;
    int results[6] = { 0 };  // �ֻ��� ����� ������ �迭 (1~6�� ��)
    int roll;
    int totalRolls = 60000;

    srand(time(NULL));

    for (i = 0; i < totalRolls; i++) {
        roll = rand() % 6;  // 0���� 5������ ���� ����
        results[roll]++;    // �ش� �ֻ��� ���� �� ����
    }

    printf("�ֻ��� ��\t��\n");
    for (i = 0; i < 6; i++) {
        printf("%d\t%d\n", i + 1, results[i]);
    }
}
