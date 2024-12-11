#include <stdio.h>
#include <string.h>

int main() {
    char userInput[1000];

    printf("Nhap mot chuoi bat ky: ");
    fgets(userInput, sizeof(userInput), stdin);

    size_t length = strlen(userInput);
    if (userInput[length - 1] == '\n') {
        userInput[length - 1] = '\0';
        length--;
    }

    printf("Chuoi ban vua nhap la: %s\n", userInput);
    printf("Do dai cua chuoi la: %zu\n", length);

    char predefinedString[] = "HelloWorld";
    printf("Chuoi duoc khai bao san la: %s\n", predefinedString);

    printf("Cac ky tu trong chuoi: ");
    for (size_t i = 0; i < strlen(predefinedString); i++) {
        printf("%c ", predefinedString[i]);
    }
    printf("\n");

    return 0;
}

