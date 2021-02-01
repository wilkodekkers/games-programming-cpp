#include "Lecture1.h"
#include <iostream>

int Lecture1::sum(int a, int b)
{
	return a + b;
}

void Lecture1::printEvenOrUneven(int a)
{
	if (a % 2 == 0)
	{
		std::cout << a << " is even" << std::endl;
	}
	else
	{
		std::cout << a << " is uneven" << std::endl;
	}
}

int Lecture1::power(int base, int exponent)
{
	if (exponent == 0)
	{
		return 1;
	}

	return base * power(base, exponent - 1);
}

bool Lecture1::isPrime(int a)
{
	if (a == 1)
	{
		return false;
	}

	for (int i = 2; i < a; i++)
	{
		if (a % i == 0)
		{
			return false;
		}
	}

	return true;
}