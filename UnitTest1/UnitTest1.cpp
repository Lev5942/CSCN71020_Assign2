#include "pch.h"
#include "CppUnitTest.h"


extern "C" int getPerimeter(int *length, int *width);
extern "C" int getArea(int* length, int* width);
extern "C" void setLength(int input, int* length);
extern "C" void setWidth(int input, int* width);


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(perimeterFunctionality)
		{
			int length = 5;
			int width = 4;
			int result = getPerimeter(&length,&width);
			int expectedPerimeter = 2 * (length + width);
			Assert::AreEqual(expectedPerimeter, result);
		}

		TEST_METHOD(areaFunctionality)
		{
			int length = 3;
			int width = 2;
			int result = getArea(&length, &width);
			int expectedArea =  (length * width);
			Assert::AreEqual(expectedArea, result);

		}
		TEST_METHOD(lengthBoundaryFunctionalityOneHundred)
		{
			int length = 1;
			int notExpectedLength = 100;
			setLength(notExpectedLength, &length);
			Assert::AreNotEqual(notExpectedLength, length);
		}

		TEST_METHOD(lengthBoundaryFunctionalityZero)
		{
			int length = 1;
			int notExpectedLength = 0;
			setLength(notExpectedLength, &length);
			Assert::AreNotEqual(notExpectedLength, length);
		}

		TEST_METHOD(lengthBoundaryFunctionalityNegative)
		{
			int length = 1;
			int notExpectedLength = -10;
			setLength(notExpectedLength, &length);
			Assert::AreNotEqual(notExpectedLength, length);
		}

		TEST_METHOD(widthBoundaryFunctionalityOneHundred)
		{
			int width = 1;
			int notExpectedWidth = 100;
			setWidth(notExpectedWidth, &width);
			Assert::AreNotEqual(notExpectedWidth, width);
		}

		TEST_METHOD(widthBoundaryFunctionalityZero)
		{
			int width = 1;
			int notExpectedWidth = 0;
			setWidth(notExpectedWidth, &width);
			Assert::AreNotEqual(notExpectedWidth, width);
		}

		TEST_METHOD(widthBoundaryFunctionalityNegative)
		{
			int width = 1;
			int notExpectedWidth = -10;
			setWidth(notExpectedWidth, &width);
			Assert::AreNotEqual(notExpectedWidth, width);
		}
	};
}
