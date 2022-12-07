#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab13_1/sum.cpp"
#include "../Lab13_1/dod.cpp"
#include "../Lab13_1/var.cpp"
using namespace nsSum;

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

using namespace nsVar;
using namespace nsDod;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			x = 0; e = 0.0001;
			int sum();
			double t = -exp(x);
			Assert::AreEqual(t, s, -2.71828);
		}
	};
}
