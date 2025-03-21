#include <stdio.h>

int get_day_of_week(int day, int month, int year) {
    if (month < 3) {
        month += 12;
        year--;
    }
    int k = year % 100;
    int j = year / 100;
    int h = (day + 13*(month + 1)/5 + k + k/4 + j/4 + 5*j) % 7;
    return ((h + 5) % 7); // Adjusting Zeller's Congruence to 0 = Sunday
}

int get_days_in_month(int month, int year) {
    int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (month == 2 && ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))) {
        return 29;
    }
    return days_in_month[month - 1];
}

void print_calendar(int month, int year) {
    char *months[] = {"January", "February", "March", "April", "May", "June",
                      "July", "August", "September", "October", "November", "December"};
    
    printf("\n    %s %d\n", months[month - 1], year);
    printf("Su Mo Tu We Th Fr Sa\n");

    int start_day = get_day_of_week(1, month, year);
    int days = get_days_in_month(month, year);

    for (int i = 0; i < start_day; i++) {
        printf("   ");
    }

    for (int day = 1; day <= days; day++) {
        printf("%2d ", day);
        if ((start_day + day) % 7 == 0)
            printf("\n");
    }
    printf("\n");
}

int main() {
    int month, year;
    printf("Enter month (1-12): ");
    scanf("%d", &month);
    printf("Enter year: ");
    scanf("%d", &year);

    if (month < 1 || month > 12 || year < 1) {
        printf("Invalid input.\n");
    } else {
        print_calendar(month, year);
    }

    return 0;
}
