#include "pch.h"
#include "CppUnitTest.h"
#include "../PR8.2/Lab_08_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UT82
{
	TEST_CLASS(UT82)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char* t;

			char str[22] = "Hello  , how are you?";

			t = Change(str);

			Assert::AreEqual(t, "Hello, how are you?");
		}
	};
}