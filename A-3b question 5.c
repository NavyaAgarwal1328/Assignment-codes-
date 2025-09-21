#include <stdio.h>

int main() {
    int limit = 20;
    int numbers_found = 0;
    printf("searching for ramanujan numbers with components up to %d...\n", limit);

    for(int a=1; a<=limit; a++){
        for(int b=a; b<=limit; b++){
            int sum1 = (a*a*a) + (b*b*b);
            for(int c=a+1; c<=limit; c++){
                for(int d=c; d<=limit; d++){
                    int sum2 = (c*c*c) + (d*d*d);
                    if(sum1 == sum2){
                        printf("\n found one! --> %d\n", sum1);
                        printf(" As: %d^3 + %d^3\n", a, b);
                        printf(" And as: %d^3 + %d^3\n", c, d);
                        numbers_found++;
                    }
                }
            }
        }
    }

    if(numbers_found == 0){
        printf("No ramanujan number is found within the limit\n");
    }

    return 0;
}
