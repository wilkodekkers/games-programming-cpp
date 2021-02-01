#include "pch.h"
#include "CppUnitTest.h"
#include "../Homework/Lecture1.h"
#include "../Homework/Lecture1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(Lecture1Test)
	{
	private:
		Lecture1 lecture1;
	public:
		TEST_METHOD(TestMethodSum)
		{
			Assert::AreEqual(4, lecture1.sum(1, 3));
			Assert::AreEqual(10, lecture1.sum(4, 6));
			Assert::AreEqual(6, lecture1.sum(3, 3));
			Assert::AreEqual(2, lecture1.sum(4, -2));
			Assert::AreEqual(203, lecture1.sum(200, 3));
		}

		TEST_METHOD(TestMethodPower)
		{
			Assert::AreEqual(1, lecture1.power(5, 0));
			Assert::AreEqual(5, lecture1.power(5, 1));
			Assert::AreEqual(25, lecture1.power(5, 2));
		}

		TEST_METHOD(TestMethodIsPrime)
		{
			Assert::AreEqual(false, lecture1.isPrime(1));
			Assert::AreEqual(true, lecture1.isPrime(2));
			Assert::AreEqual(true, lecture1.isPrime(3));
			Assert::AreEqual(false, lecture1.isPrime(4));
			Assert::AreEqual(true, lecture1.isPrime(5));
			Assert::AreEqual(false, lecture1.isPrime(6));
			Assert::AreEqual(true, lecture1.isPrime(7));
			Assert::AreEqual(false, lecture1.isPrime(8));
			Assert::AreEqual(false, lecture1.isPrime(9));
			Assert::AreEqual(false, lecture1.isPrime(10));
		}

		TEST_METHOD(TestMethodIndexOf)
		{
			int a[] = { 1,2,3,4,5 };
			Assert::AreEqual(-1, lecture1.indexOf(a, 10));
			Assert::AreEqual(-1, lecture1.indexOf(a, 0));
			Assert::AreEqual(0, lecture1.indexOf(a, 1));
			Assert::AreEqual(1, lecture1.indexOf(a, 2));
			Assert::AreEqual(2, lecture1.indexOf(a, 3));
			Assert::AreEqual(3, lecture1.indexOf(a, 4));
			Assert::AreEqual(4, lecture1.indexOf(a, 5));
		}

		TEST_METHOD(TestMethodBubbleSort)
		{
			int res[] = { 1,2,3,4,5 };
			int a[] = { 4,2,1,5,3 };
			lecture1.bubbleSort(a);
			Assert::AreEqual(res[0], a[0]);
			Assert::AreEqual(res[1], a[1]);
			Assert::AreEqual(res[2], a[2]);
			Assert::AreEqual(res[3], a[3]);
			Assert::AreEqual(res[4], a[4]);
		}

		TEST_METHOD(TestMethodGcd)
		{
			Assert::AreEqual(21, lecture1.gcd(1071, 462));
		}

		TEST_METHOD(TestMethodLcd)
		{
			Assert::AreEqual(21, lecture1.lcd(3, 7));
		}
	};
}
