#include <stdio.h>

int main(void) {
    int c;
IN_WORD:
    if ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n') {
            goto OUT_WORD;
        }
        printf("%c", c);
        goto IN_WORD;
    }
OUT_WORD:
    if (c != EOF) {
        printf("%c", '\n');
        goto IN_WORD;
    }
}
