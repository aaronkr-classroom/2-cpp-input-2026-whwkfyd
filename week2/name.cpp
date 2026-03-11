// name.cpp
#include <iostream>
#include <string>

int main()
{
	// 이름을 물음
	std::cout << "First name: >> ";
	//이름을 읽어 들임
	std::string name;
	std::cin >> name;

	// 출력하려는 메시지를 구성
	const std::string greeting = "Hello, " + name + "!";

	/*
	  **************** => 1
	  *              * => 2
	  * Hello Aaron! * => 3
	  *              * => 4
	  **************** => 5
	  */
	// 인사말의 2번째 행과 4번째 행
	const std::string spaces(greeting.size(), ' ');
	const std::string second = "* " + spaces + " *";

	// 인사말의 1번째 행과 5번째 행
	const std::string first(second.size(), '*');

	// 모두 출력
	std::cout
		<< std::endl // 줄 바꿈
		<< first << std::endl
		<< second << std::endl
		<< "* " << greeting << " *" << std::endl
		<< second << std::endl
		<< first << std::endl
		<< std::endl;

    return 0;
}