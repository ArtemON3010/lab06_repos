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
			const int n = 10;
			int r[n] = { -5,0,-3,-4,2,3,-1,-2,-9,1 };
			t = Sum(r, n, 0);
			Assert::AreEqual(t, -14);
		}
	};
}
