char* convert(char* s, int numRows) {
    if (!s || numRows <= 0) return NULL;
    if (numRows == 1) return strdup(s);

    int len = strlen(s);
    char *result = (char*) malloc(sizeof(char) * (len + 1));
    if (!result) return NULL;

    int l_cycle = 2 * numRows - 2;
    int idx = 0;

    for (int row = 0; row < numRows; row++) {
        for (int i = row; i < len; i += l_cycle) {
            result[idx++] = s[i];
            // Fill in the zag (diagonal part, not in the edge rows)
            int diag = i + l_cycle - 2 * row;
            if (row != 0 && row != numRows - 1 && diag < len) {
                result[idx++] = s[diag];
            }
        }
    }
    result[len] = '\0';
    return result;
}