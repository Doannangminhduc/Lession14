#include <stdio.h>
#include <string.h>

int main() {
    char input[1000];
    int count = 0;
    
    printf("Nhap mot chuoi: ");
    fgets(input, sizeof(input), stdin);
    
    input[strcspn(input, "\n")] = 0;
    
    int i = 0;
    int inWord = 0;

    while (input[i] != '\0') {
        if (input[i] != ' ' && inWord == 0) {
            count++;
            inWord = 1;
        }
        else if (input[i] == ' ') {
            inWord = 0;
        }
        i++;
    }

    printf("So tu trong chuoi la: %d\n", count);

    return 0;
}

