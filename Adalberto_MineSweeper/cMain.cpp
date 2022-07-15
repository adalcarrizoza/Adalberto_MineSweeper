#include "cMain.h"


cMain::cMain() : wxFrame(nullptr, wxID_ANY, "OneLoneCoder.com - wxWidgets!", wxPoint(60, 60), wxSize(365, 650))
{
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(20, 10), wxSize(310, 150));


	m_btn1 = new wxButton(this, 1001, "1", wxPoint(20, 270), wxSize(70, 70));
	m_btn2 = new wxButton(this, 1002, "2", wxPoint(100, 270), wxSize(70, 70));
	m_btn3 = new wxButton(this, 1003, "3", wxPoint(180, 270), wxSize(70, 70));
	m_btn4 = new wxButton(this, 1004, "4", wxPoint(20, 350), wxSize(70, 70));
	m_btn5 = new wxButton(this, 1005, "5", wxPoint(100, 350), wxSize(70, 70));
	m_btn6 = new wxButton(this, 1006, "6", wxPoint(180, 350), wxSize(70, 70));
	m_btn7 = new wxButton(this, 1007, "7", wxPoint(20, 430), wxSize(70, 70));
	m_btn8 = new wxButton(this, 1008, "8", wxPoint(100, 430), wxSize(70, 70));
	m_btn9 = new wxButton(this, 1009, "9", wxPoint(180, 430), wxSize(70, 70));
	m_btn0 = new wxButton(this, 1000, "0", wxPoint(100, 510), wxSize(70, 70));
	m_btnDec = new wxButton(this, 1011, ".", wxPoint(20, 510), wxSize(70, 70));
	m_btnEq = new wxButton(this, 1012, "=", wxPoint(180, 510), wxSize(70, 70));
	m_btnMod = new wxButton(this, 1013, "MOD", wxPoint(20, 190), wxSize(70, 70));
	m_btnBin = new wxButton(this, 1014, "BIN", wxPoint(100, 190), wxSize(70, 70));
	m_btnHex = new wxButton(this, 1015, "HEX", wxPoint(180, 190), wxSize(70, 70));
	m_btnC = new wxButton(this, 1016, "CE", wxPoint(260, 190), wxSize(70, 70));
	m_btnDiv = new wxButton(this, 1017, "/", wxPoint(260, 270), wxSize(70, 70));
	m_btnMult = new wxButton(this, 1018, "*", wxPoint(260, 350), wxSize(70, 70));
	m_btnMin = new wxButton(this, 1019, "-", wxPoint(260, 430), wxSize(70, 70));
	m_btnPlus = new wxButton(this, 1020, "+", wxPoint(260, 510), wxSize(70, 70));











}

cMain::~cMain()
{

}






