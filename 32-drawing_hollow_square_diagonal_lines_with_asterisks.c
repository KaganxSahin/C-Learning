#include <stdio.h>

int main() {
    int i,j,size;
    printf("Enter the size of the square:");
    scanf("%d", &size);

    for (i = 0; i<size; i++) {
        for (j = 0; j<size; j++) {
          
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1 || i == j || i == size - j - 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
