#include <stdio.h>
#include <string.h>

char* intToRoman(int num) {
    char* roman = malloc( sizeof(char) * 16);       // Longest roman numeral is 15 characters long
    if (!roman) return 0;

    *roman = '\0';
// #####################################
    while (num >= 1000) {
        strcat(roman, "M");
        num -= 1000;
    }
    if (num >= 900) {
        strcat(roman, "CM");
        num -= 900;
    }
    if (num >= 500) {
        strcat(roman, "D");
        num -= 500;
    }
    if (num >= 400) {
        strcat(roman, "CD");
        num -= 400;
    }
// #####################################
    while (num >= 100) {
        strcat(roman, "C");
        num -= 100;
    }
    if (num >= 90) {
        strcat(roman, "XC");
        num -= 90;
    }
    if (num >= 50) {
        strcat(roman, "L");
        num -= 50;
    }
    if (num >= 40) {
        strcat(roman, "XL");
        num -= 40;
    }
// #####################################
    while (num >= 10) {
        strcat(roman, "X");
        num -= 10;
    }
    if (num >= 9) {
        strcat(roman, "IX");
        num -= 9;
    }
    if (num >= 5) {
        strcat(roman, "V");
        num -= 5;
    }
    if (num >= 4) {
        strcat(roman, "IV");
        num -= 4;
    }

    while (num >= 1) {
        strcat(roman, "I");
        num -= 1;
    }

    return roman;
}