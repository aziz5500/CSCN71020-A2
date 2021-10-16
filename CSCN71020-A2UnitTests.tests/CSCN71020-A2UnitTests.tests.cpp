#include "pch.h"
#include "CppUnitTest.h"
extern"C" int getPerimeter(int* length, int* width);
extern"C" int getArea(int* length, int* width);
extern"C" void setLength(int input, int* length);
extern"C" void setWidth(int input, int* width);

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace CSCN71020A2UnitTeststests
{
	TEST_CLASS(CSCN71020A2UnitTeststests)
	{
	public:

		TEST_METHOD(getPerimeter_7and7_28)
		{
			int lengt = 7;//this test is for checking perimeter of rectangle
			int widt = 7;
			const int ExpPerimeter = 28;
			int result;
			result = getPerimeter(&lengt, &widt);
			Assert::AreEqual(ExpPerimeter, result);
		}
		TEST_METHOD(getArea_7and7_49)
		{//this test is for checking area of rectangle
			int lengt = 7;
			int widt = 7;
			const int ExpArea = 49;
			int result;
			result = getArea(&lengt, &widt);//calling the respective function
			Assert::AreEqual(ExpArea, result);//seeing whether they are getting as expected
		}

		TEST_METHOD(setlength_7_7)
		{//this test is for checking set length of rectangle
			int inp = 7;
			int len;
			setLength(inp, &len);
			Assert::AreEqual(inp, len);//seeing whether they are getting as expected

		}
		TEST_METHOD(setlength_80_80)
		{
			// this test is for checking set length of rectangle
			int inp = 80;
			int len;
			setLength(inp, &len);
			Assert::AreEqual(inp, len);//seeing whether they are getting as expected
		}
		TEST_METHOD(setlength_101_notequal)
		{
			// this test is for checking set length of rectangle
			int inp = 101;
			int len;
			setLength(inp, &len);
			Assert::AreNotEqual(inp, len);//seeing whether they are getting as expected
		}
		TEST_METHOD(setwidth_8_8)
		{// this test is for checking set width of rectangle
			int inp = 8;
			int widt;
			setWidth(inp, &widt);
			Assert::AreEqual(inp, widt);//seeing whether they are getting as expected
		}
		TEST_METHOD(setwidth_88_88)
		{// this test is for checking set  width of rectangle
			int inp = 88;
			int widt;
			setWidth(inp, &widt);
			Assert::AreEqual(inp, widt);//seeing whether they are getting as expected
		}
		TEST_METHOD(setwidth_105_notequal)
		{// this test is for checking set width of rectangle
			int inp = 105;
			int widt;
			setWidth(inp, &widt);
			Assert::AreNotEqual(inp, widt);//seeing whether they are getting as expected
		}
	};
}