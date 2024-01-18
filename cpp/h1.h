// each translation unit get its own copy of the constexpr variables, so the memory locations are different
//constexpr int a = 23;
//constexpr float b[2] = {3.14, 4.12};

// with extern all translation units refer to the same copy of variables
extern int a;
extern float b[2];

void test_s1();
void test_s2();
