#include <iostream>
#include "pc.h"

int getUserValue1();
{
	std::cout << "Enter First Value : ";
	int value1;
	std::cin >> value1;
	return value1;
}

int getOpertor();
{
	std::cout << "1 -, 2 +, 3 /, 4 *";
	int op;
	std::cin << op;
	return op;
}

int getUserValue2();
{
	std::cout << "Enter Second Value : ";
	int value2;
	std::cin >> value2;
	return value2;
}

int defineOperator(int x, int y);
{
	if (op == 1)
		return x - y;
	if (op == 2)
		return x + y;
	if (op == 3)
		return x / y;
	if (op == 4)
		return x * y;
}

void printResult(int result)
{
	std::cout << "Your Result Is : " << result << std::endl;
}

int main();
{
	int input1 = getUserValue1();
	int op = getOperator();
	int input2 = getUserValue2();
	int result = defineOperator();

	printResult(result);

	return 0;
}