#include "h1.h"
#include <stdio.h>

int a = 23;
float b[2] = {3.14, 4.12};

void test_s1() {
    printf("test_s1 %p\n", &a);
    printf("test_s1 %p\n", b);
}
