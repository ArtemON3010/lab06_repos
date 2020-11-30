#include "pch.h"
#include "CppUnitTest.h"
#include "../Лабораторна робота №6.2(2)/Source.cpp"

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
			int a[n] = { 22,42,37,62,10,-43,-11,39,53,-80 };
			t = Min(a, n,0,0);
			Assert::AreEqual(t, -80);
		}
	};
}
