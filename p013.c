int romanCharToValue(char c) {
    switch (toupper(c)) {
        case 'I': return 1;
        case 'V': return 5;
        case 'X': return 10;
        case 'L': return 50;
        case 'C': return 100;
        case 'D': return 500;
        case 'M': return 1000;
        default: return 0; // invalid character
    }
}

int romanToInt(char* s) {
    int total = 0;
    int prev = 0;

    for (int i = 0; s[i] != '\0'; i++) {
        int current = romanCharToValue(s[i]);
        if (current == 0) {
            // invalid character
            return -1;
        }

        // Subtractive
        if (current > prev) {
            total += current - 2 * prev;
        } else {
            total += current;
        }

        prev = current;
    }

    return total;
}
