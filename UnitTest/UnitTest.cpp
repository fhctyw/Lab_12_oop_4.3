#include "pch.h"
#include "CppUnitTest.h"
#include "..\Lab_12_oop_4.3\Array.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Array a(3, 4);
			Assert::AreEqual(a[0], (unsigned char)4);
		}
	};
}
