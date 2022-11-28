#include <stdio.h>


int main () {
    struct date
    {
        int day;
        int monh;
        int year;
    }today = {23,11,2022};

    struct clock {
        int hours;
        int mins;
        int sec;

    }time = { 23, 21, 45};

    printf("%2i/ %2i/%2i\n",today.monh, today.day, today.year );
    printf("for that date the clock will be  %i: %i: %i", time.hours, time.mins, time.sec);
    return 0;
}