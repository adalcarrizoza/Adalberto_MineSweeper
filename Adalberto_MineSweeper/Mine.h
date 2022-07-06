#pragma once
#include "wx/wx.h"
#include "cMain.h"

class Mine : public wxApp 
{
public:
	Mine();
	~Mine();

private: 
	cMain* m_frame1 = nullptr;   

public:
	virtual bool OnInit();
};

