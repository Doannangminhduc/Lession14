#include <stdio.h>

int main() {
    char input[1000];
    int count = 0;
    
    printf("Nhap mot chuoi: ");
    fgets(input, sizeof(input), stdin);
    
    input[strcspn(input, "\n")] = 0;
    
    int i = 0;
    
    while (input[i] != '\0') {
        if ((input[i] >= 'a' && input[i] <= 'z') || (input[i] >= 'A' && input[i] <= 'Z')) {
            count++;
        }
        i++;
    }

    printf("So ky tu la chu cai trong chuoi la: %d\n", count);

    return 0;
}

