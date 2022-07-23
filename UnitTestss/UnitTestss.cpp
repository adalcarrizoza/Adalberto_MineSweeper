#include "CppUnitTest.h"
#include "wx/wx.h"
#include "../Adalberto_MineSweeper/Factory.h"
#include "../Adalberto_MineSweeper/Processor.h"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestss
{
	TEST_CLASS(UnitTestss)
	{
	public:
		Factory* perreo = new Factory();
		wxFrame* m_txt1 = new  wxFrame(nullptr, wxID_ANY, "Welcome to the calcultor created from scratch:)", wxPoint(60, 60), wxSize(435, 650));

		TEST_METHOD(TestMethod1)
		{
			int tagger = 1001;
			wxButton* one = perreo->fabricateButton(m_txt1, 1001);
			Assert::IsTrue((one->GetId() == tagger));
		}
		TEST_METHOD(TestMethod2)
		{
			int tagger = 1002;
			wxButton* two = perreo->fabricateButton(m_txt1, 1002);
			Assert::IsTrue((two->GetId() == tagger));
		}
		TEST_METHOD(TestMethod3)
		{
			int tagger = 1003;
			wxButton* three = perreo->fabricateButton(m_txt1, 1003);
			Assert::IsTrue((three->GetId() == tagger));
		}
		TEST_METHOD(TestMethod4)
		{
			int tagger = 1004;
			wxButton* four = perreo->fabricateButton(m_txt1, 1004);
			Assert::IsTrue((four->GetId() == tagger));
		}
		TEST_METHOD(TestMethod5)
		{
			int tagger = 1005;
			wxButton* five = perreo->fabricateButton(m_txt1, 1005);
			Assert::IsTrue((five->GetId() == tagger));
		}
		TEST_METHOD(TestMethod6)
		{
			int tagger = 1006;
			wxButton* six = perreo->fabricateButton(m_txt1, 1006);
			Assert::IsTrue((six->GetId() == tagger));
		}
		TEST_METHOD(TestMethod7)
		{
			int tagger = 1007;
			wxButton* seven = perreo->fabricateButton(m_txt1, 1007);
			Assert::IsTrue((seven->GetId() == tagger));
		}
		TEST_METHOD(TestMethod8)
		{
			int tagger = 1008;
			wxButton* eight = perreo->fabricateButton(m_txt1, 1008);
			Assert::IsTrue((eight->GetId() == tagger));
		}
		TEST_METHOD(TestMethod9)
		{
			int tagger = 1009;
			wxButton* nine = perreo->fabricateButton(m_txt1, 1009);
			Assert::IsTrue((nine->GetId() == tagger));
		}
		TEST_METHOD(TestMethod10)
		{
			int tagger = 1000;
			wxButton* zero = perreo->fabricateButton(m_txt1, 1000);
			Assert::IsTrue((zero->GetId() == tagger));
		}
	

	};

	TEST_CLASS(UnitTesteNum2)
	{
	public:
		Processor* process = Processor::GetInstance();
		TEST_METHOD(TestMethod11)
		{
			int sum = 7;
			int ans = process->AllValueChange(3, 4, '+');
			Assert::IsTrue(sum == ans);
		
		}
		TEST_METHOD(TestMethod12)
		{
			int sum = 4;
			int ans = process->AllValueChange(8, 4, '-');
			Assert::IsTrue(sum == ans);
		}
		TEST_METHOD(TestMethod13)
		{
			int sum = 12;
			int ans = process->AllValueChange(3, 4, '*');
			Assert::IsTrue(sum == ans);
		}
		TEST_METHOD(TestMethod14)
		{
			int sum = 2;
			int ans = process->AllValueChange(8, 4, '/');
			Assert::IsTrue(sum == ans);
		}
		TEST_METHOD(TestMethod15)
		{
			int sum = 0;
			int ans = process->AllValueChange(5, 5, '%');
			Assert::IsTrue(sum == ans);
		}
		TEST_METHOD(TestMethod16)
		{
			std::string sum = "0000000000001010";
			std::string ans = process->TransformBinaryString(10);
			Assert::IsTrue(sum == ans);
		}
		TEST_METHOD(TestMethod17)
		{
			std::string sum = "0000000000000101";
			std::string ans = process->TransformBinaryString(5);
			Assert::IsTrue(sum == ans);
		}
		TEST_METHOD(TestMethod18)
		{
			std::string sum = "0xA";
			std::string ans = process->TransformtoHexaDecimalString(10);
			Assert::IsTrue(sum == ans);
		}
		TEST_METHOD(TestMethod19)
		{
			std::string sum = "0x5";
			std::string ans = process->TransformtoHexaDecimalString(5);
			Assert::IsTrue(sum == ans);
		}
		TEST_METHOD(TestMethod20)
		{
			std::string sum = "0x46";
			std::string ans = process->TransformtoHexaDecimalString(70);
			Assert::IsTrue(sum == ans);
		}


	};
}
