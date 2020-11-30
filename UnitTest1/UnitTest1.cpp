#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота №6.3(1)/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int t;
			const int n = 8;
			int a[n] = { 37,40,54,61,5,-41,-14,31 };
			t = Sum2(a, n);
			Assert::AreEqual(t, 80);
		}
	};
}
