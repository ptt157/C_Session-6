#include <stdio.h>

int main() {
    int numbers[5];
    int evenCount = 0, oddCount = 0;

    printf("Nhap 5 so nguyen:\n");
    for(int i = 0; i < 5; i++) {
        printf("Nhap so thu %d: ", i+1);
        scanf("%d", &numbers[i]);
    }

    for(int i = 0; i < 5; i++) {
        if(numbers[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }

    printf("So luong so chan: %d\n", evenCount);
    printf("So luong so le: %d\n", oddCount);

    return 0;
}

