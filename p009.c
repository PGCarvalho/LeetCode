#include <limits.h>

int reverse(int x){
    long y = x;
    
    // Deal with negative numbers
    int sign = 1;
    if (y < 0) {
        sign = -1;
        y = -y;
    }

    // Reverse
    long result = 0;
    do {
        result = result * 10 + (y % 10);
        y /= 10;
    } while (y > 0);

    // Protection against overflow
    if (result > INT_MAX) return 0;

    return result * sign;
}

bool isPalindrome(int x) {
    if (x < 0) return 0;

    int y = reverse(x);
    return y == x;
}

