/* String.c
 * Lucio Delelis
 * 20200411
 */

#include "String.h"

#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>


uint32_t GetLength(char* string) {
    if (*string == '\0') {
        return 0;
    } else {
        return 1 + GetLength(string + 1);
    }
}


bool IsEmpty(char *string) {
    return GetLength(string) == 0;
}

const char* Power(char *string, uint32_t exp) {
    uint32_t str_length = GetLength(string);
    uint32_t result_length = (str_length * exp) + 1;
    char* power_string = malloc(result_length);

    // Outer loop: for exponents
    for (int i=0; i<exp; i++) {
        int offset = (i * str_length);
        // Inner loop: for the actual string
        for (int j=0; j<str_length; j++) {
            power_string[j+offset] = string[j];
        }
    }

    power_string[result_length-1] = '\0';

    return power_string;
}

const char* Reverse(char* string) {
    uint32_t length = GetLength(string);
    char* reversed_string = malloc(length);

    for (int i=0; i<length; i++) {
        reversed_string[i] = string[length-i-1];
    }

    return reversed_string;
}

