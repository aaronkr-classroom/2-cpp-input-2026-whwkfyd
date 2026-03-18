#include <iostream>

int main() 
{
    int num1, num2;
    std::cout << "두 개의 숫자를 입력하세요: ";
    std::cin >> num1 >> num2;

    if (num1 > num2) {
        std::cout << "더 큰 숫자는: " << num1 << std::endl;
    }
    else if (num2 > num1) {
        std::cout << "더 큰 숫자는: " << num2 << std::endl;
    }
    else {
        std::cout << "두 숫자는 같습니다." << std::endl;
    }

    return 0;
}