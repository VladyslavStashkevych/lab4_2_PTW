#include "pch.h"
#include "CppUnitTest.h"
#include "../lab4_2/lab4_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab41tests {
	TEST_CLASS(Methods_CorrectValueReturned) {
public:
	TEST_METHOD(Method_CharCount) {
		int expected = 10;
		int actual = CountSpaces("D:\\Files\\univeersity\\PTW\\projects\\lab4_2\\lab4_2\\testfile.txt");
		Assert::AreEqual(expected, actual);
	}
	};
}
