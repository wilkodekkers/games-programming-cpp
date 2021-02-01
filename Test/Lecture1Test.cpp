#include "pch.h"
#include "CppUnitTest.h"
#include "../Homework/Lecture1.h"
#include "../Homework/Lecture1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(Lecture1Test)
	{
	public:
		
		TEST_METHOD(TestMethodIsPrime)
		{
			Lecture1 lecture1;
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
	};
}
