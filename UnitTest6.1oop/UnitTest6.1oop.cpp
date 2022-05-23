#include "pch.h"
#include "CppUnitTest.h"
#include "../oop_laba_6.1/Array.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61oop
{
	TEST_CLASS(UnitTest61oop)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array a = Array(3);
			for (int i = 0; i < 3; i++)
				a[i] = 0;
			a[2] = 3;
			double b = a.MaxNumber();
			Assert::AreEqual(b, 3.);
		}
	};
}
