#include "vec.h"
void init(vec* v) {
    v->size = 0;
    v->cap = 1;
    v->data = malloc(v->cap * sizeof(int));
}
void push(vec* vec,int val) {
    if (vec->size == vec->cap) {
        vec->cap *= 2;
        vec->data = realloc(vec->data,vec->cap * sizeof(int));
    }
    vec->data[vec->size++] = val;
}
int pop(vec* v) {
    int ret = v->data[v->size];
    v->size--;
    return ret;
}
void delVec(vec* v) {
    free(v->data);
    v->data = NULL;
    v->size = 0;
    v->cap = 0;
}