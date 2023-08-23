#include "main.h"

/**
 * s: A pointer to the memory area you to fill with the constant byte.
 * b: The constant byte you want to fill the memory area with.
 * n: The number of bytes you want to fill with the constant byte.
 */

char *_memset(char *s, char b, unsigned int n) {
    for (unsigned int i = 0; i < n; i++) {
        s[i] = b;
    }
    return s;
}
