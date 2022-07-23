#pragma once
#include "wx/wx.h"

class Processor
{
private:
	static Processor* _processor; //Instance variable
	Processor() {}

public:
	static Processor* GetInstance() {
		if (_processor == nullptr) {
			_processor = new Processor();
		}
		return _processor;
	}
	Processor(Processor& other) = delete;
	void operator=(Processor& other) = delete;


	float AllValueChange (int num1, int num2, char eq);
	std::string TransformBinaryString(float number);
	std::string TransformtoHexaDecimalString(int number);
};

