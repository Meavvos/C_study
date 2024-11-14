#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char s[100];

    printf("텍스트를 입력하세요:");
    gets_s(s, sizeof(s));

    int i;
    char k;
    for (i = 0; i < strlen(s); i++) {

        if (i == strlen(s) - 1) {
            if (s[0] == s[i]) {
                printf("%s 는 회문입니다.", s);
            }
        }
    }
    getchar();
}