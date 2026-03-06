#include <iostream>
#include "math_utils.h"

int main(){
    int a = 5,b = 3;

    int sum = add(a,b);
    int product = multiply(a,b);

    std::cout << "a + b =" << sum << std::endl;
    std::cout << "Product:" << product << std::endl;

    return 0;
}