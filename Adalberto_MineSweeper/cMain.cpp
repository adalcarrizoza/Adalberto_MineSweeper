#include "cMain.h"
#include "Factory.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)

wxEND_EVENT_TABLE()

cMain::cMain() : wxFrame(nullptr, wxID_ANY, "Welcome to the calcultor created from scratch:)", wxPoint(60, 60), wxSize(435, 650))
{
	Factory TheFactory;
	CambioBoton = new wxButton * [21];


	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(20, 10), wxSize(390, 150));

	//numbers
	m_btn1 = TheFactory.fabricateButton(this,  1001);   //new wxButton(this, 1001, "1", wxPoint(20, 270), wxSize(70, 70));
	CambioBoton[0] = m_btn1;
	m_btn2 = TheFactory.fabricateButton(this, 1002);    //new wxButton(this, 1002, "2", wxPoint(100, 270), wxSize(70, 70));
	CambioBoton[1] = m_btn2;
	m_btn3 = TheFactory.fabricateButton(this, 1003);    //new wxButton(this, 1003, "3", wxPoint(180, 270), wxSize(70, 70));
	CambioBoton[2] = m_btn3;
	m_btn4 = TheFactory.fabricateButton(this, 1004);    //new wxButton(this, 1004, "4", wxPoint(20, 350), wxSize(70, 70));
	CambioBoton[3] = m_btn4;
	m_btn5 = TheFactory.fabricateButton(this, 1005);    //new wxButton(this, 1005, "5", wxPoint(100, 350), wxSize(70, 70));
	CambioBoton[4] = m_btn5;
	m_btn6 = TheFactory.fabricateButton(this, 1006);    //new wxButton(this, 1006, "6", wxPoint(180, 350), wxSize(70, 70));
	CambioBoton[5] = m_btn6;
	m_btn7 = TheFactory.fabricateButton(this, 1007);    //new wxButton(this, 1007, "7", wxPoint(20, 430), wxSize(70, 70));
	CambioBoton[6] = m_btn7;
	m_btn8 = TheFactory.fabricateButton(this, 1008);    //new wxButton(this, 1008, "8", wxPoint(100, 430), wxSize(70, 70));
	CambioBoton[7] = m_btn8;
	m_btn9 = TheFactory.fabricateButton(this, 1009);    //new wxButton(this, 1009, "9", wxPoint(180, 430), wxSize(70, 70));
	CambioBoton[8] = m_btn9;
	m_btn0 = TheFactory.fabricateButton(this, 1000);    //new wxButton(this, 1000, "0", wxPoint(100, 510), wxSize(70, 70));
	CambioBoton[9] = m_btn0;

	//Special
	m_btnDec = TheFactory.fabricateButton(this, 1011);   //new wxButton(this, 1011, ".", wxPoint(20, 510), wxSize(70, 70));
	CambioBoton[10] = m_btnDec;
	m_btnEq = TheFactory.fabricateButton(this, 1012);    //new wxButton(this, 1012, "=", wxPoint(180, 510), wxSize(70, 70));
	CambioBoton[11] = m_btnEq;


	//LEts
	m_btnMod = TheFactory.fabricateButton(this, 1013);    //new wxButton(this, 1013, "MOD", wxPoint(20, 190), wxSize(70, 70));
	CambioBoton[12] = m_btnMod;
	m_btnBin = TheFactory.fabricateButton(this, 1014);    //new wxButton(this, 1014, "BIN", wxPoint(100, 190), wxSize(70, 70));
	CambioBoton[13] = m_btnBin;
	m_btnHex = TheFactory.fabricateButton(this, 1015);    //new wxButton(this, 1015, "HEX", wxPoint(180, 190), wxSize(70, 70));
	CambioBoton[14] = m_btnHex;
	m_btnC = TheFactory.fabricateButton(this, 1016);      //new wxButton(this, 1016, "CE", wxPoint(260, 190), wxSize(70, 70));
	CambioBoton[15] = m_btnC;
	m_btnAllNeg = TheFactory.fabricateButton(this, 1021); //new wxButton(this, 1021, "Neg", wxPoint(340, 190), wxSize(70, 70));
	CambioBoton[16] = m_btnAllNeg;

	//Signs
	m_btnDiv = TheFactory.fabricateButton(this, 1017);    //new wxButton(this, 1017, "/", wxPoint(260, 270), wxSize(70, 70));
	CambioBoton[17] = m_btnDiv;
	m_btnMult = TheFactory.fabricateButton(this, 1018);   //new wxButton(this, 1018, "*", wxPoint(260, 350), wxSize(70, 70));
	CambioBoton[18] = m_btnMult;
	m_btnMin = TheFactory.fabricateButton(this, 1019);    //new wxButton(this, 1019, "-", wxPoint(260, 430), wxSize(70, 70));
	CambioBoton[19] = m_btnMin;
	m_btnPlus = TheFactory.fabricateButton(this, 1020);   //new wxButton(this, 1020, "+", wxPoint(260, 510), wxSize(70, 70));
	CambioBoton[20] = m_btnPlus;

	for (int i = 0; i < 21; i++)
	{
		CambioBoton[i]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
	}

}

cMain::~cMain()
{
	delete[] CambioBoton;
}

void cMain::OnButtonClicked(wxCommandEvent& _evento) {

	int getInput = _evento.GetId();

	switch (getInput) {
	case 1000: {
		*m_txt1 << "0";
		break; }
	case 1001: {
		*m_txt1 << "1";
		break; }
	case 1002: {
		*m_txt1 << "2";
		break; }
	case 1003: {
		*m_txt1 << "3";
		break; }
	case 1004: {
		*m_txt1 << "4";
		break; }
	case 1005: {
		*m_txt1 << "5";
		break; }
	case 1006: {
		*m_txt1 << "6";
		break; }
	case 1007: {
		*m_txt1 << "7";
		break; }
	case 1008: {
		*m_txt1 << "8";
		break; }
	case 1009: {
		*m_txt1 << "9";
		break; }
	case 1011: {
		*m_txt1 << ".";
		break; }
	case 1012: {
		*m_txt1 << "=";
		break; }
	case 1013: {
		*m_txt1 << "MOD";
		break; }
	case 1014: {
		*m_txt1 << "BIN";
		break; }
	case 1015: {
		*m_txt1 << "HEX";
	case 1016: {
		*m_txt1 << "CE";
		break; }
	case 1017: {
		*m_txt1 << "/";
		break; }
	case 1018: {
		*m_txt1 << "*";
		break; }
	case 1019: {
		*m_txt1 << "-";
		break; }
	case 1020: {
		*m_txt1 << "+";
		break; }
	case 1021: {
		*m_txt1 << "Neg";
		break; }

	}
	}
}





