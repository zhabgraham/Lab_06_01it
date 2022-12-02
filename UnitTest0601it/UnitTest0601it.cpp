#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_06_01it/Lab_06_01it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest6
{
	TEST_CLASS(UnitTest6)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int k = 0;
			int a[6] = { -8, -3, -1, 0, 6, 7 };
			k = Count(a, 6);
			Assert::AreEqual(1, k);
		}
		TEST_METHOD(TestMethod2)
		{
			int k = 0;
			int a[6] = { -8, -3, -1, 0, 6, 7 };
			k = Sum(a, 6);
			Assert::AreEqual(7, k);
		}
	};
}
