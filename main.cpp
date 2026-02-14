#include <iostream>

void subFunction(int& a, int& b);
void hakushon();

int main()
{
	std::cout << "Hello, World!" << std::endl;
	return 0;
}

void subFunction(int& a, int& b) {
	a += b;
}

void hakushon()
{
	std::cout << "anpanman!" << std::endl;
}