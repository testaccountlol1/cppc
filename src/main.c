#include "str.h"
#include "vec.h"
#include <stdio.h>
int main() {
    makeStr(s);
    
    for (int i = 0; i < 10; ++i) pushStr(&s, 'a');
    for (int i = 0; i < 10; ++i) {
        char c = popStr(&s);
        printf("%c\n",c);
    }
    makeVec(v);
    init(&v);
    for (int i = 0;i < 10; ++i) push(&v,i);
    for (int i = 0;i < 10; ++i) {
        int d = pop(&v);
        printf("%d\n",d);
    }
    return 0;
}