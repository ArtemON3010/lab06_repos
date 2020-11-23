#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота №6.1(1)/Source.cpp"

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
			int r[n] = { 4,5,3,7,3,2,5 };
			t = Sum(r, n);
			Assert::AreEqual(t, 6);
		}
	};
}
