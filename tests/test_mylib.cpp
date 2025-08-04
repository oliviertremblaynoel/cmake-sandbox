#include <iostream>
#include <cassert>
#include "../src/mylib/mylib.hpp"

void test_basic_cases() {
    assert(multiply(0, 0) == 0);
    assert(multiply(1, 0) == 0);
    assert(multiply(0, 5) == 0);
    assert(multiply(2, 3) == 6);
    assert(multiply(3, 2) == 6);
}

void test_negative_cases() {
    assert(multiply(-2, 3) == -6);
    assert(multiply(2, -3) == -6);
    assert(multiply(-2, -3) == 6);
}

void test_large_values() {
    assert(multiply(1000000, 1000000) == 1000000000000LL); // overflow check
}

int main() {
    test_basic_cases();
    test_negative_cases();
    test_large_values();

    std::cout << "All tests passed.\n";
    return 0;
}
