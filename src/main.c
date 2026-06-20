#include "str.h"
#include <stdio.h>
int main() {
    str s;
    initStr(&s);
    for (int i = 0; i < 10; ++i) pushStr(&s, 'a');
    for (int i = 0; i < 10; ++i) {
        char c = popStr(&s);
        printf("%c\n",c);
    }
    delStr(&s);
    return 0;
}