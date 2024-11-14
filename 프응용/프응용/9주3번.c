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

    printf("�ؽ�Ʈ�� �Է��Ͻʽÿ�: ");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    remove_extra_spaces(input, output);

    printf("������ ���ŵ� �ؽ�Ʈ: %s\n", output);


    printf("Enter Ű�� ����");
    getchar();

    return 0;
}
