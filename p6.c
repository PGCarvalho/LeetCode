// numRows = n
// char per column = [1]*n ; [n-2] * 1;     // [x]*y  means there are x columns with y characters each

// n_char per zigzag = n+(n-2) = 2n-2

/*

len = 23 ; numRows = 4

1     1     1     1         -> 4  =      23/6  +  (23 % 6 > 0)                 =  3 + 1 
1   1 1   1 1   1 1         -> 7  =  2 * 23/6  +  (23 % 6 > 1)                 =  6 + 1
1 1   1 1   1 1   1 1       -> 8  =  2 * 23/6  +  (23 % 6 > 2) + (23 % 6 > 4)  =  6 + 1
1     1     1     1         -> 4  =      23/6  +  (23 % 6 > 3)                 =  3 + 1





len = 23 ; numRows = 5

1     1     1       -> 3
1   1 1   1 1       -> 5
1  1  1  1  1  1    -> 6
1 1   1 1   1 1     -> 6
1     1     1       -> 3

*/

int* c_per_line(int len, int numRows) {
    int* arr = (int*)malloc(numRows * sizeof(int));
    if (!arr) {
        return NULL; // Memory allocation failed
    }
    

}

char* convert(char* s, int numRows) {
    if (!s || numRows <= 0) {
        return NULL; // Invalid input
    }
    int len = strlen(s);
    int *per_line = c_per_line(len, numRows);

}