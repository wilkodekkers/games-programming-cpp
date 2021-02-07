#include "pch.h"
#include "CppUnitTest.h"
#include "../Homework/Lecture2.h"
#include "../Homework/Lecture2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Test
{
	TEST_CLASS(Lecture2Test)
	{
	private:
		Lecture2 lecture2;
	public:
		TEST_METHOD(TestMethodFraction)
		{
			int a = 5;
			int b = 100;

			lecture2.fraction(a, b);

			Assert::AreEqual(1, a);
			Assert::AreEqual(20, b);
		}

		TEST_METHOD(TestMethodIsPalindrome)
		{
			char x[] = "spoon";
			Assert::AreEqual(false, lecture2.isPalindrome(x));

			char y[] = "lepel";
			Assert::AreEqual(true, lecture2.isPalindrome(y));
		}
	};
}