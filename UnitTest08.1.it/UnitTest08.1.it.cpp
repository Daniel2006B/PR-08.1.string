#include "pch.h"
#define _CRT_SECURE_NO_WARNINGS
#include "CppUnitTest.h"
#include "../PR-08.1.iterac/PR-08.1.iterac.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest081it
{
	TEST_CLASS(UnitTest081it)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			{
				char str[101] = "a**b**c**d";

				int pos = findThirdCommaIndex(str);

				Assert::AreEqual(pos, -1);
			}
		}
	};
}
