/* StringsTest.c
 * Lucio Delelis
 * 20200411
 */

#include "String.h"

#include <assert.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>

int main(void) {
    assert(GetLength("hello world") == 11);
    assert(GetLength("") == 0);

    assert(IsEmpty("") == true);
    assert(IsEmpty("novacia") == false);

    assert(strcmp(Power("foo", 2), "foofoo") == 0);
    assert(strcmp(Power("", 5), "") == 0);

    assert(strcmp(Reverse("foo"), "oof") == 0);
    assert(strcmp(Reverse(""), "") == 0);
    return 0;
}
