#pragma once
#include <stdlib.h>

typedef struct {
    char* data;
    size_t size;
    size_t cap;
} str;

// Automates initialization and destruction for strings
#define makeStr(var_name) str var_name __attribute__((cleanup(delStr))); initStr(&var_name)

void initStr(str* s);
void pushStr(str* s, char val);
char popStr(str* s);
void delStr(str* s);
