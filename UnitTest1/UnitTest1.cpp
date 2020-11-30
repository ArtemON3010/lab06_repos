#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота №6.3(2)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 9;
			int a[n] = { 34,12,87,-3,43,1,44,22,10 };
			t = Sum2(a, n, 0, 0);
			Assert::AreEqual(t, 122);

		}
	};
}
