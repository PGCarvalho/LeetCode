// ## começar no início. 
// iterar, contando, até encontrar um repetido
// guardar numero

// ##começar no elemento a seguir ao que se repete
// iterar, contando, até encontrar um repetido
// comparar numero e guardar maior

// parar quando chegar ao fim da str


/*#include <stdio.h>
#include <string.h>*/

int lengthOfLongestSubstring(char* s) {
    char* iterator = s;     // iterates on the entire string
    char* first = s;        // first char of string being validated
    char* runner;           // runs from first to last char of the substring being validated

    int counter = 0;
    int longest = 0;

    while(*iterator) {
        // check if there is any repeated
        runner = first;
        while(runner < iterator) {
            if (*runner == *iterator) {
                break;
            }
            runner++;
        }
        // add to counter if there isn't
        if (runner == iterator) {
            counter++;
        }
        else {
            longest = (longest > counter) ? longest : counter;      // check if the new substring has the longest length
            first = runner + 1;                                     // assign the first char of the new substring to the character after the one that repeats
            counter = iterator - runner;                            // start the count at the length of the currect substring
        }
        iterator++;     //iterate
    }

    longest = (longest > counter) ? longest : counter;
    return longest;
}

/*int main() {
    char input[256];
    printf("Enter a string: ");
    if (fgets(input, sizeof(input), stdin) != NULL) {
        // Remove newline character if present
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }
        int result = lengthOfLongestSubstring(input);
        printf("Length of longest substring without repeating characters: %d\n", result);
    } else {
        printf("Error reading input.\n");
    }
    return 0;
}*/