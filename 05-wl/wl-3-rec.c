#include <stdio.h>

int in_word();
void out_word();

int main(void) {
    while ((in_word()) != EOF);
}

int in_word() {
    int c = getchar();

    if (c == EOF) {
        return c;
    }

    if (c == ' ' || c == '\n') {
        out_word();
    } else {
        printf("%c", c);
    }

    return in_word();
}

void out_word() {
    printf("%c", '\n');
}
