#include "Processor.h"
#include "wx/wx.h"



Processor* Processor::_processor = nullptr;


float Processor::AllValueChange(float num1, float num2, char eq)
{
    float ans = 0;
    switch (eq)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '/':
        ans = num1 / num2;
        break;
    case '%':
        ans = (int)num1 % (int)num2;
        break;

    }

    return ans;
}


std::string Processor::TransformBinaryString(float number)	
{
	std::string results = "";
	for (int i = 0; i < 16; i++)
	{
		results = std::to_string((int)number % 2) + results;
		number = number / 2;
	}

	return results;
}

std::string Processor::TransformtoHexaDecimalString(float number)
{
	std::string results = "";
	while (number > 0)
	{
		int remainder = (int)number % 16;
		if (remainder < 10)
			results = std::to_string(remainder) + results;
		else if (remainder == 10)
			results = "A" + remainder;
		else if (remainder == 11)
			results = "B" + remainder;
		else if (remainder == 12)
			results = "C" + remainder;
		else if (remainder == 13)
			results = "D" + remainder;
		else if (remainder == 14)
			results = "E" + remainder;
		else if (remainder == 15)
			results = "F" + remainder;
		number = number / 16;
	}
	return "0x" + results; //0x to let the people know that it is Hexadecimal.
}


