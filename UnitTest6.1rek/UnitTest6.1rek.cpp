#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.1pek/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61rek
{
	TEST_CLASS(UnitTest61rek)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int a[] = { 1, 3, 5, 7, 9 };
			int size = 5;
			Assert::AreEqual(Sum(a, size, 0), 0, 1e-1);
		}
	};
}
