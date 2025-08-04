#include <iostream>
#include "mylib.hpp"

int main() {
    int x = 6;
    int y = 7;
    int result = multiply(x, y);

    std::cout << x << " * " << y << " = " << result << std::endl;

    return 0;
}
