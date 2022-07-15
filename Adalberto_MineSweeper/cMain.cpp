#include "cMain.h"


cMain::cMain() : wxFrame(nullptr, wxID_ANY, "OneLoneCoder.com - wxWidgets!", wxPoint(60, 60), wxSize(450, 650))
{
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 10), wxSize(400, 50));
	m_btn1 = new wxButton(this, wxID_ANY, "Click Me", wxPoint(10, 70), wxSize(50, 50));

}

cMain::~cMain()
{

}






