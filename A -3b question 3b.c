#include <stdio.h>

int main() {
    int n = 5, i, j, k;
    for (i = 0; i < n; i++) {
        int val = 1;
        for (k = 0; k < n - i; k++) printf("  "); // spacing
        for (j = 0; j <= i; j++) {
            printf("%d   ", val);
            val = val * (i - j) / (j + 1);
        }
        printf("\n");
    }
    return 0;
}
