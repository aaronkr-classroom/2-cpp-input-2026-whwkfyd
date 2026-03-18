#include <iostream>

int main() 
{
    int product = 1;
    for (int i = 1; i < 10; ++i) {
        product *= i;
    }
    std::cout << "[1, 10) 범위 숫자의 곱: " << product << std::endl;
    return 0;
}