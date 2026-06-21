#pragma once
#include <stdlib.h>

typedef struct {
    int *data;
    size_t size;
    size_t cap;
} vec;

// Automates C++ RAII: registers destructor and executes initializer
#define makeVec(var_name) vec var_name __attribute__((cleanup(delVec))); init(&var_name)

void init(vec* v);
void push(vec* vec, int val);
int pop(vec* v);
void delVec(vec* v);
