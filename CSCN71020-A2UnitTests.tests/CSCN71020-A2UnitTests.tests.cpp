#include "pch.h"
#include "CppUnitTest.h"
extern"C" int getPerimeter(int* length, int* width);
extern"C" int getArea(int* length, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020A2UnitTeststests
{
	TEST_CLASS(CSCN71020A2UnitTeststests)
	{
	public:

		TEST_METHOD(getPerimeter_7and7_28)
		{
			int lengt = 7;
			int widt = 7;
			const int ExpPerimeter = 28;
			int result;
			result = getPerimeter(&lengt, &widt);
			Assert::AreEqual(ExpPerimeter, result);
		}
		TEST_METHOD(getArea_7and7_49)
		{
			int lengt = 7;
			int widt = 7;
			const int ExpArea = 49;
			int result;
			result = getArea(&lengt, &widt);
			Assert::AreEqual(ExpArea, result);
		}

	}
	;