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

int Lecture1::indexOf(int arr[], int find, int length)
{
	int index = -1;

	for (int i = 0; i <= length; i++)
	{
		if (arr[i] == find)
		{
			index = i;
			break;
		}
	}

	return index;
}

void Lecture1::bubbleSort(int arr[], int len)
{
	for (int i = 0; i < len; i++)
	{
		for (int j = 0; j < len; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				int t = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = t;
				break;
			}
		}
	}
}

int Lecture1::gcd(int a, int b)
{
	if (b == 0)
	{
		return a;
	}
	else
	{
		return gcd(b, a % b);
	}
}

int Lecture1::lcd(int a, int b)
{
	return a * b / gcd(a, b);
}

int Lecture1::gcdAndLcd(int a, int b)
{
	return gcd(a, b) * lcd(a, b);
}