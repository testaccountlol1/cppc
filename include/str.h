#pragma once
#include <stdlib.h>
typedef struct {
    char* data;
    size_t size;
    size_t cap;
} str;
void initStr(str* s);
void pushStr(str* s, char val);
char popStr(str* s);
void delStr(str* s);