#pragma once
#include "wx/wx.h"

class cMain : public wxFrame
{
public:
	cMain();
	~cMain(); 

public: 
	wxTextCtrl *m_txt1 = nullptr;
	wxButton* m_btn1 = nullptr;

};





