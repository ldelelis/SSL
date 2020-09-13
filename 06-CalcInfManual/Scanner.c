#include <stdio.h>
#include <ctype.h>

#include "Scanner.h"

Token GetNextToken() {
    int c = getchar();
    Token t = INVALID;

    // Variable
    if (isalpha(c)) {
        t = VARIABLE;
    }
    // Number
    else if (isdigit(c)) {
        t = NUMBER;
    }
    // Supported operator
    else if (c == '+' || c == '*') {
        t = OPERATOR;
    }
    // End of input
    else if (c == EOF || c == '\n') {
        t = END;
    }

    return t;
}

