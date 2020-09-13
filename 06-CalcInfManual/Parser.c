#include <stdlib.h>

#include "Parser.h"

int is_valid_state(ParserState s, Token t) {
    int ret;

    switch(s) {
        case INITIAL:
            ret = (t == NUMBER || t == VARIABLE || t == END);
            break;
        case IN_NUMBER:
            ret = (t == NUMBER || t == OPERATOR || t == END);
            break;
        case IN_VARIABLE:
            ret = (t == OPERATOR || t == END);
            break;
        case IN_OPERATOR:
            ret = (t == NUMBER || t == VARIABLE);
            break;
        default:
            break;
    }

    return ret;
}

ParserState get_new_state(Token t) {
    ParserState ret;

    switch (t) {
        case VARIABLE:
            ret = IN_VARIABLE;
            break;
        case OPERATOR:
            ret = IN_OPERATOR;
            break;
        case NUMBER:
            ret = IN_NUMBER;
            break;
        default:
            break;
    }

    return ret;
}

int parse() {
    Token t;
    ParserState s = INITIAL;

    while ((t = GetNextToken()) != END) {
        if (t == INVALID) {
            return EXIT_FAILURE;
        }

        if (!is_valid_state(s, t)) {
            return EXIT_FAILURE;
        }
        s = get_new_state(t);
    }

    return EXIT_SUCCESS;
}
