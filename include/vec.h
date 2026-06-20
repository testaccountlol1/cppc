#pragma once
#include <stdlib.h>
typedef struct {
    int *data;
    size_t size;
    size_t cap;
} vec;
void init(vec* v);
void push(vec* vec,int val);
int pop(vec* v);
void delVec(vec* v);