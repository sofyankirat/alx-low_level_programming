#ifndef MAIN_H
#define MAIN_H
#include <stdio.h>
#include <stdlib.h>

#define min(x, y) (((x) < (y)) ? (x) : (y))

void *malloc_checked(unsigned int b);
int _putchar(char c);
char *string_nconcat(char *s1, char *s2, unsigned int n);
void *_calloc(unsigned int nmemb, unsigned int size);

#endif
