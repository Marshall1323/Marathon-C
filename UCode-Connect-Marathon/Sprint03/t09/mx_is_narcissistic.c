#include <stdbool.h>

double mx_pow(double base, int exponent); 

bool mx_is_narcissistic(int num) {
    if (num < 0) {
        return false;
    }

    int originalNum = num;
    int numDigits = 0;
    
    while (originalNum != 0) {
        originalNum /= 10;
        numDigits++;
    }

    originalNum = num;
    int sum = 0;

    while (originalNum != 0) {
        int digit = originalNum % 10;
        sum += mx_pow(digit, numDigits);
        originalNum /= 10;
    }

    return sum == num;
}


