#include <stdio.h>
#include <string.h>
#include <ctype.h>

int is_vowel(char c) {
   
    c = tolower(c);
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

void remove_vowels(char* input, char* output) {
    int i = 0, j = 0;

    while (input[i] != '\0') {
   
        if (!is_vowel(input[i])) {
            output[j++] = input[i];
        }
        i++;
    }

    output[j] = '\0'; 
}

int main() {
    char input[100];
    char output[100];

    printf("�ؽ�Ʈ�� �Է��Ͻʽÿ�: ");
    fgets(input, sizeof(input), stdin);

  
    input[strcspn(input, "\n")] = '\0';

    remove_vowels(input, output);

    printf("���� ���ŵ� �ؽ�Ʈ: %s\n", output);

   
    printf("Enter Ű ����");
    getchar();

    return 0;
}
