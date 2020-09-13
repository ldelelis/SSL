#ifndef SCANNER_H
#define SCANNER_H

typedef enum {
    NUMBER,
    VARIABLE,
    OPERATOR,
    END,
    INVALID
} Token;

Token GetNextToken();

#endif
