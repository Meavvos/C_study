#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10  // �迭 ũ�� ����

int main(void) {
    int position = SIZE / 2;  // ���������� �ʱ� ��ġ (�߾�)
    int path[SIZE] = { 0 };     // ���������� ��θ� ������ �迭
    int steps = 20;           // ���������� �̵��� Ƚ��
    int direction;

    // ���� �ʱ�ȭ
    srand(time(NULL));

    // ���������� �̵��� ��θ� 1�� ǥ��
    path[position] = 1;

    // �������� �̵� �ùķ��̼�
    for (int i = 0; i < steps; i++) {
        // 0�̸� ����, 1�̸� ���������� �̵�
        direction = rand() % 2;

        if (direction == 0 && position > 0) {
            position--;  // �������� �̵�
        }
        else if (direction == 1 && position < SIZE - 1) {
            position++;  // ���������� �̵�
        }

        path[position] = 1;  // �̵��� ���� 1�� ǥ��

        // ���� ���� ���
        for (int j = 0; j < SIZE; j++) {
            if (path[j] == 1) {
                printf("o");  // ������ �� ǥ��
            }
            else {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}
