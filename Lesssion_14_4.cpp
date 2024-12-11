#include <stdio.h>
#include <string.h>

int main() {
    char predefinedString[] = "1,2,3,4,5,6,7,8,9,10";
    char character;
    int count = 0;

    printf("Chuoi duoc khai la: %s\n", predefinedString);

    printf("Nhap mot ky tu bat ky: ");
    scanf(" %c", &character);

    for (size_t i = 0; i < strlen(predefinedString); i++) {
        if (predefinedString[i] == character) {
            count++;
        }
    }

    printf("So lan xuat hien cua ky tu '%c' trong chuoi la: %d\n", character, count);

    return 0;
}

