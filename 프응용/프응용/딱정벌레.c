#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>  // getch()를 위한 헤더 파일

int main(void)
{
    char c, tile[10];
    int i, location, direction;
    c = 'c';
    location = 5;

    // 배열 초기화 및 캐릭터 배치
    for (i = 0; i < 10; i++)
        tile[i] = '-';
    tile[location] = c;

    printf("초기 상태:\n");
    for (i = 0; i < 10; i++)
        printf("%c", tile[i]);
    printf("\n계속 하려면 C 또는 c를 입력하세요.\n");

    c = _getch();

    srand(time(NULL)); // 랜덤 시드 초기화

    while (c == 'C' || c == 'c') {
        direction = rand() % 2; // 0이면 왼쪽, 1이면 오른쪽

        // 현재 위치를 빈 칸으로 바꾸기
        tile[location] = '-';

        // 방향에 따라 이동
        if (direction == 0 && location > 0) {
            location--; // 왼쪽 이동
        }
        else if (direction == 1 && location < 9) {
            location++; // 오른쪽 이동
        }

        // 새로운 위치에 'E' 배치
        tile[location] = c;

        // 배열 출력
        for (i = 0; i < 10; i++)
            printf("%c", tile[i]);
        printf("\n");

        printf("계속 하려면 C 또는 c를 입력하세요.\n");
        c = _getch(); // 다시 사용자 입력 받기
    }

    return 0;
}
