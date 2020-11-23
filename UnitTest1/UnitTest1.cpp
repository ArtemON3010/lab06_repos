#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота №6.1(2)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 7;
			int r[n] = { 4,5,3,7,3,2,6 };
			t = Sum(r, n, 0);
			Assert::AreEqual(t, 12);
		}
	};
}
