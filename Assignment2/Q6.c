#include <stdio.h>

int isLeapYear(int year);
int dayNumber(int day, int month, int year);

int main() {
    int year, month, day;

    printf("Enter the date (day month year): \n");
    scanf("%d %d %d", &day, &month, &year);

    if(day <= 0 || day > 31 || month <= 0 || month > 12) {
        printf("Invalid Input!!!\n");
        return 0;
    }

    printf("%d/%d/%d is day %d\n", day, month, year, dayNumber(day, month, year));
    return 0;
}

int isLeapYear(int year) {
    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
        return 1; // It's a leap year
    }
    return 0; // Not a leap year
}

int dayNumber(int day, int month, int year) {
    int dayInMonths[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    // Adjust February for leap year
    if(isLeapYear(year)) {
        dayInMonths[1] = 29; // February has 29 days in a leap year
    }

    int dayNum = 0;
    for(int i = 0; i < month - 1; i++) {
        dayNum += dayInMonths[i];
    }

    dayNum += day; // Add the days of the current month

    return dayNum;
}
