int isPalindrome(char* f, char* l) {
    int result = 1;

    while (f < l) {
        if (*f != *l) {
            result = 0;
        }
        f++;
        l--;
    }
    return result;
}

char* mySubStr(char* f, int l) {
    char* s = (char*) malloc(sizeof(char) * (l + 1));
    if (!s) return NULL;
    memcpy(s, f, l);
    s[l] = '\0';
    return s;
}


char* longestPalindrome(char* s) {
    if (!s || !*s) return NULL;
    int max_len = 1;
    int start = 0;
    int len = 0;
    while (s[len] != '\0') len++;

    for (int i = 0; i < len; i++) {
        // Odd length palindrome
        int l = i, r = i;
        while (l >= 0 && r < len && s[l] == s[r]) {
            if (r - l + 1 > max_len) {
                max_len = r - l + 1;
                start = l;
            }
            l--;
            r++;
        }
        // Even length palindrome
        l = i, r = i + 1;
        while (l >= 0 && r < len && s[l] == s[r]) {
            if (r - l + 1 > max_len) {
                max_len = r - l + 1;
                start = l;
            }
            l--;
            r++;
        }
    }
    return mySubStr(s + start, max_len);
}