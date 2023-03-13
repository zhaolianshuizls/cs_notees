#include <stdio.h>
#include <iostream>
#include "b.h"

void f(){
    printf("function in b.cpp\n");
}

template<typename T>
void test(T a) {
    std::cout << typeid(a).name() << "\n";
}

// template instantiation
template
void test<float>(float);

static int getCount() {
    std::cout << "in dir/b.cpp getCount\n";
    return 23;
}

int She::count = getCount();
