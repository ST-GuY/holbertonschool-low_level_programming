#include "main.h"

/**
 *Description: function that prints every minute of the day of Jack Bauer
 *Return: Always 0
*/

void print_time(int hour, int minute) {

    _putchar((hour / 10) + '0');
    _putchar((hour % 10) + '0');
    
    _putchar(':');
    

    _putchar((minute / 10) + '0');
    _putchar((minute % 10) + '0');
    

    _putchar('\n');
}

int main() {
    for (int hour = 0; hour < 24; hour++) {
        for (int minute = 0; minute < 60; minute++) {
            print_time(hour, minute);
        }
    }
    return 0;
}
