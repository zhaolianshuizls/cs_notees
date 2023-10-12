#include "add.h"
#include "mul.h"
#include "div.h"
#include "sub.h"
#include "../static_lib/head/circle.hpp"
#include <iostream>

int main() {
    int a = 2;
    int b = 9;
    std::cout << zls_add(a, b) << "\n";
    std::cout << zls_sub_so(a, b) << "\n";
    std::cout << mul(a, b) << "\n";
    std::cout << zls_div(a, b) << "\n";
    std::cout << circle_area(2.0) << "\n";
}
