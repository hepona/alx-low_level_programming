#include "main.h"

void print_number(int num) {
char str[10]; 
int i = 0;
    if (num < 0) {
        putchar('-');
        num = -num;
    }
    do {
        str[i++] = num % 10 + '0';
        num /= 10;
    } while (num > 0);
    while (--i >= 0) {
        if (str[i] >= '0' && str[i] <= '9') {
            putchar(str[i]);
        }
    }
}
