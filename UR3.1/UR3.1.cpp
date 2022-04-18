#include "pch.h"
#include "CppUnitTest.h"
#include "../PR3.1/Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UR31
{
	TEST_CLASS(UR31)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number a;
			a.SetNum(1);

			Assert::AreEqual(a.GetNum(), 1.);
		}
	};
}