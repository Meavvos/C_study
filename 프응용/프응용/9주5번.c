#include <stdio.h>
#include <ctype.h>
#include <string.h>

int check_password_strength(const char* password) {
    int has_uppercase = 0, has_lowercase = 0, has_number = 0;
    int index = 0;


    while (password[index] != '\0') {
        if (isupper(password[index])) {
            has_uppercase = 1;
        }
        else if (islower(password[index])) {
            has_lowercase = 1;
        }
        else if (isdigit(password[index])) {
            has_number = 1;
        }
        index++;
    }


    if (has_uppercase && has_lowercase && has_number) {
        return 1; 
    }
    else {
        return 0; 
    }
}

int main() {
    char password[100];

    while (1) {
        printf("��ȣ�� �Է��ϼ���: ");
        fgets(password, sizeof(password), stdin);

        
        password[strcspn(password, "\n")] = '\0';

     
        if (check_password_strength(password)) {
            printf("������ ��ȣ�Դϴ�.\n");
            break; 
        }
        else {
            printf("�빮��, �ҹ���, ���ڸ� ��� �����Ͽ� ��ȣ�� �ٽ� ���弼��!\n");
        }
    }


    printf("Enter Ű ����");
    getchar();

    return 0;
}
