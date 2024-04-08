#include <iostream>

int multiply(int a, int b)
{
	return a * b;
}

void multiplyLog(int a, int b)
{
	int result = multiply(a, b);
	std::cout << "= " << result << std::endl;
	std::cout << "line: " << __LINE__ << std::endl;
}

int main()
{
	multiplyLog(3, 2);
	multiplyLog(8, 5);
	multiplyLog(90, 45);

	std::cin.get();
	return 0;
}
