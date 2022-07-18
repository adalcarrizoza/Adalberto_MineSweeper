#pragma once


class Processor
{
private:
	static Processor* _processor; //Instance variable

public:
	static Processor* GetInstance() {
		if (_processor == nullptr) {
			_processor = new Processor;
		}
		return _processor;
	}

};

