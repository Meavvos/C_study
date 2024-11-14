#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 10  // 배열 크기 정의

int main(void) {
    int position = SIZE / 2;  // 딱정벌레의 초기 위치 (중앙)
    int path[SIZE] = { 0 };     // 딱정벌레의 경로를 저장할 배열
    int steps = 20;           // 딱정벌레가 이동할 횟수
    int direction;

    // 난수 초기화
    srand(time(NULL));

    // 딱정벌레가 이동한 경로를 1로 표시
    path[position] = 1;

    // 딱정벌레 이동 시뮬레이션
    for (int i = 0; i < steps; i++) {
        // 0이면 왼쪽, 1이면 오른쪽으로 이동
        direction = rand() % 2;

        if (direction == 0 && position > 0) {
            position--;  // 왼쪽으로 이동
        }
        else if (direction == 1 && position < SIZE - 1) {
            position++;  // 오른쪽으로 이동
        }

        path[position] = 1;  // 이동한 곳을 1로 표시

        // 현재 상태 출력
        for (int j = 0; j < SIZE; j++) {
            if (path[j] == 1) {
                printf("o");  // 지나간 곳 표시
            }
            else {
                printf("-");
            }
        }
        printf("\n");
    }

    return 0;
}
