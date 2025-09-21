
#include <stdio.h>

int main() {
    double pop = 100000;
    for (int year = 1; year <= 10; year++) {
        pop = pop * 1.10;
        printf("Year %d: %.0f\n", year, pop);
    }
    return 0;
}
