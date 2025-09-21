#include <stdio.h>

int main() {
    int num, pos = 0, neg = 0, zero = 0;

    printf("Enter numbers (enter -999 to stop):\n");
    while (1) {
        scanf("%d", &num);
        if (num == -999)  // stop condition
            break;

        if (num > 0) pos++;
        else if (num < 0) neg++;
        else zero++;
    }

    printf("\nPositive: %d\nNegative: %d\nZero: %d\n", pos, neg, zero);
    return 0;
}
