//cpp program to be compiled by bash

#include<iostream>
int add(int x, int y);
int getValue();

int main()
{
	int x{ getValue()};
	int y{ getValue()};
	std::cout << "The sum of values is =  " <<add(x, y) <<'\n';
}

int getValue()
{
	std::cout << "Enter some values to be added " << '\n';
	int x{ };
	std::cin >> x;
	return x;
}

int add(int x, int y)
{
	return x + y;
}
