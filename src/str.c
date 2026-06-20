#include "str.h"

void initStr(str* s) {
    s->size = 0;
    s->cap = 1;
    s->data = malloc(s->cap + 1);
    s->data[s->size] = '\0';
}

void pushStr(str* s, char val) {
    if (s->size == s->cap) {
        s->cap *= 2;
        s->data = realloc(s->data, s->cap + 1);
    }
    s->data[s->size++] = val;
    s->data[s->size] = '\0';
}

char popStr(str* s) {
    if (s->size == 0) return '\0';
    char ret = s->data[--s->size];
    s->data[s->size] = '\0';
    return ret;
}

void delStr(str* s) {
    if (s->data) free(s->data);
    s->data = NULL;
    s->cap = 0;
    s->size = 0;
}
