#include <stdio.h>

int main() {
    int year;
    printf("Enter year: ");
    scanf("%d", &year);

    int days = 0;
    for (int i = 1; i < year; i++) {
        if ((i % 400 == 0) || (i % 4 == 0 && i % 100 != 0))
            days += 366; 
        else
            days += 365;
    }

    int day = (days + 1) % 7; 
    char *week[] = {"Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    printf("1st January %d was %s\n", year, week[day]);

    return 0;
}