#include "vec.h"

void init(vec* v) {
    v->size = 0;
    v->cap = 1;
    v->data = malloc(v->cap * sizeof(int));
}

void push(vec* vec, int val) {
    if (vec->size == vec->cap) {
        vec->cap *= 2;
        vec->data = realloc(vec->data, vec->cap * sizeof(int));
    }
    vec->data[vec->size++] = val;
}

int pop(vec* v) {
    // Fixed: Decrement size exactly once
    return v->data[--v->size];
}

void delVec(vec* v) {
    // Check avoids potential double-free issues
    if (v->data != NULL) {
        free(v->data);
        v->data = NULL;
    }
    v->size = 0;
    v->cap = 0;
}
