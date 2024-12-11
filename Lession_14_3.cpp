#include <stdio.h>
#include <string.h>

int main() {
    char predefinedString[] = "1,2,3,4,5,6,7,8,9,10";

    printf("Chuoi duoc khai bao la: %s\n", predefinedString);

    printf("Chuoi dao nguoc : ");
    for (int i = strlen(predefinedString) - 1; i >= 0; i--) {
        printf("%c", predefinedString[i]);
    }
    printf("\n");

    return 0;
}

