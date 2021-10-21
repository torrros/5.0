#include "pch.h"
#include "CppUnitTest.h"
#include "../5.0/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest2
{
	TEST_CLASS(UnitTest2)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c,a,b;
			c= ((h(a, b, 1) + h(1, a, b))) / (1 + h(a * a + b * b, 1, 0));
			Assert::AreEqual(c, 0);
		}
	};
}
	