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

    printf("텍스트를 입력하십시오: ");
    fgets(input, sizeof(input), stdin);

  
    input[strcspn(input, "\n")] = '\0';

    remove_vowels(input, output);

    printf("모음 제거된 텍스트: %s\n", output);

   
    printf("Enter 키 종료");
    getchar();

    return 0;
}
