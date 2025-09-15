#include <stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Enter coordinates of first point:\n ");
    scanf("%d %d", &x1, &y1);
    printf("Enter coordinates of second point: \n");
    scanf("%d %d", &x2, &y2);
    printf("Enter coordinates of third point:\n ");
    scanf("%d %d", &x3, &y3);

    if (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2) == 0)
        printf("The points are Collinear.\n");
    else
        printf("The points are Not Collinear.\n");

    return 0;
}