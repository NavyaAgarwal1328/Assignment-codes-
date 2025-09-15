#include <stdio.h>

int main() {
    int a, b, c;
    printf("Enter first side of triangle:\n ");
    scanf("%d", &a);
    printf("Enter second side of triangle:\n ");
    scanf("%d", &b);
    printf("Enter third side of triangle:\n ");
    scanf("%d", &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("The triangle is valid.\n");
        if (a == b && b == c) {
            printf("It is an Equilateral triangle.\n");
        } 
        else if (a == b || b == c || a == c) {
            printf("It is an Isosceles triangle.\n");
        } 
        else {
            printf("It is a Scalene triangle.\n");
        }

        
        if (a*a + b*b == c*c || a*a + c*c == b*b || b*b + c*c == a*a) {
            printf("It is also a Right-angled triangle.\n");
        }
    } 
    else {
        printf("The triangle is not valid.\n");
    }

    return 0;
}