#include "Lecture2.h"
#include "Lecture1.h"
#include <iostream>

void Lecture2::fraction(int& nominator, int& denominator)
{
	Lecture1 lecture1;
	int d = lecture1.gcd(nominator, denominator);

	nominator = nominator / d;
	denominator = denominator / d;
}

void Lecture2::printCharacterArray(char arr[][10], int len) 
{
	for (int i = 0; i < len; i++) {
		for (int j = 0; j < 10; j++) {
			std::cout << arr[i][j];
		}
		std::cout << std::endl;
	}
}