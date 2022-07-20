#pragma once
#include "wx/wx.h"

class cMain : public wxFrame
{
private:

	float num1 = 0;
	float num2 = 0;
	float ans = 0;
	std::string result2 = "";
	char eq = ' ';
	bool solve = false;

public: 
	wxDECLARE_EVENT_TABLE(); //declarr the event

	cMain();
	

	wxTextCtrl *m_txt1 = nullptr;

	wxButton* m_btn0 = nullptr;
	wxButton* m_btn1 = nullptr;
	wxButton* m_btn2 = nullptr;
	wxButton* m_btn3 = nullptr;
	wxButton* m_btn4 = nullptr;
	wxButton* m_btn5 = nullptr;
	wxButton* m_btn6 = nullptr;
	wxButton* m_btn7 = nullptr;
	wxButton* m_btn8 = nullptr;
	wxButton* m_btn9 = nullptr;
	wxButton* m_btnDec = nullptr;
	wxButton* m_btnEq = nullptr;
	wxButton* m_btnMod = nullptr;
	wxButton* m_btnBin = nullptr;
	wxButton* m_btnHex = nullptr;
	wxButton* m_btnC = nullptr;
	wxButton* m_btnDiv = nullptr;
	wxButton* m_btnMult = nullptr;
	wxButton* m_btnMin = nullptr;
	wxButton* m_btnPlus = nullptr;
	wxButton* m_btnAllNeg = nullptr;

	wxButton** CambioBoton;

	void OnButtonClicked(wxCommandEvent& _evento);
	void Solved();

		
	
};





