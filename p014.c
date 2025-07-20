#include <string.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    int counter = 0;
    int matches = 1;

    while( strs[0][counter] != '\0' && matches) {
        for (int i = 1; i < strsSize; i++) {
            matches *= ((int) (strs[i][counter] == strs[0][counter]));
        }
        if (matches) counter++;
    }
    
    char* result = (char*) malloc( sizeof(char) * (counter + 1));
    strncpy(result, *strs, counter);
    result[counter] = '\0';

    return result;
}