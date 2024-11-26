#include <stdio.h>
#include <string.h>

int main() {
    char password[] = "matkhau123", input[20];
    printf("Nhap mat khau: ");
    scanf("%s", input);

    if (strcmp(input, password) == 0)
        printf("Mat khau dung!\n");
    else
        printf("Mat khau sai!\n");

    return 0;
}

