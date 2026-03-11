#include <iostream>
#include <string>

int main(void)
{
	{
		const std::string s = "a string";
		{
			const std::string x = s + ", really";
			std::cout << s << std::endl;
			std::cout << x << std::endl;
		}
	}
	return 0;
}