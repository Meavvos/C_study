#include <stdio.h>
#include <string.h>

void remove_extra_spaces(char* input, char* output) {
    int i = 0, j = 0;
    int space_found = 0;

    while (input[i] != '\0') {
        if (input[i] != ' ') {
            output[j++] = input[i];
            space_found = 0;
        }
        else if (!space_found) {
            output[j++] = ' ';
            space_found = 1;
        }
        i++;
    }

    if (j > 0 && output[j - 1] == ' ') {
        j--;
    }

    output[j] = '\0';  
}

int main() {
    char input[100];
    char output[100];

    printf("텍스트를 입력하십시오: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    remove_extra_spaces(input, output);

    printf("공백이 제거된 텍스트: %s\n", output);


    printf("Enter 키로 종료");
    getchar();

    return 0;
}
