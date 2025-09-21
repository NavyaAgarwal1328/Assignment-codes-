#include <stdio.h>

int main() {
    int rows = 3, i, j, k, num = 1;

    for (i = 1; i <= rows; i++) {
        for (k = 1; k <= rows - i; k++) printf(" ");
        for (j = 1; j <= i; j++) printf("%d ", num++);
        printf("\n");
    }
    return 0;
}
