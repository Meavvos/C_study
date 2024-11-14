#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>  // getch()�� ���� ��� ����

int main(void)
{
    char c, tile[10];
    int i, location, direction;
    c = 'c';
    location = 5;

    // �迭 �ʱ�ȭ �� ĳ���� ��ġ
    for (i = 0; i < 10; i++)
        tile[i] = '-';
    tile[location] = c;

    printf("�ʱ� ����:\n");
    for (i = 0; i < 10; i++)
        printf("%c", tile[i]);
    printf("\n��� �Ϸ��� C �Ǵ� c�� �Է��ϼ���.\n");

    c = _getch();

    srand(time(NULL)); // ���� �õ� �ʱ�ȭ

    while (c == 'C' || c == 'c') {
        direction = rand() % 2; // 0�̸� ����, 1�̸� ������

        // ���� ��ġ�� �� ĭ���� �ٲٱ�
        tile[location] = '-';

        // ���⿡ ���� �̵�
        if (direction == 0 && location > 0) {
            location--; // ���� �̵�
        }
        else if (direction == 1 && location < 9) {
            location++; // ������ �̵�
        }

        // ���ο� ��ġ�� 'E' ��ġ
        tile[location] = c;

        // �迭 ���
        for (i = 0; i < 10; i++)
            printf("%c", tile[i]);
        printf("\n");

        printf("��� �Ϸ��� C �Ǵ� c�� �Է��ϼ���.\n");
        c = _getch(); // �ٽ� ����� �Է� �ޱ�
    }

    return 0;
}
