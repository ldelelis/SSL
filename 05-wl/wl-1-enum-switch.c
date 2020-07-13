#include <stdio.h>

typedef enum {
    IN_WORD,
    OUT_WORD
} State;

int main(void) {
    int c;
    State state = IN_WORD;

    while ((c = getchar()) != EOF) {
        switch (state) {
            case IN_WORD:
                if (c == ' ' || c == '\n') {
                    state = OUT_WORD;
                }
                else {
                    printf("%c", c);
                }
                break;
            case OUT_WORD:
                state = IN_WORD;
                printf("%c%c", '\n', c);
                break;
        }
    }
}
