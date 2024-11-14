#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void trim_left(char s[]);

int main() {
    char s[100];

    printf("텍스트를 입력하세요:");
    gets_s(s, sizeof(s));

    trim_left(s);
}

void trim_left(char s[]) {
    int i;
    char after[100] = "";
    int k = 0;
    for (i = 0; i < strlen(s); i++) {
        if (s[i] == ' ') {
            continue;
        }
        else {
            after[k] = s[i];
            k++;
        }
    }
    printf("%s", after);

    getchar();
}