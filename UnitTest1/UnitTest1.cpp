#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота №6.4(2)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			int n = 10;
			int* arr = new int[n] {10, 20, -1, -2, -3, -4, 5, -11, -12, -13};
			t = Pos(arr, n, 0, 0);
			Assert::AreEqual(t, 7);
		}
	};
}
