#include "cMain.h"
#include "Factory.h"
#include "Processor.h"


wxBEGIN_EVENT_TABLE(cMain, wxFrame)

wxEND_EVENT_TABLE()



float num1 = 0;
float num2 = 0;
float number;
float ans = 0;
std::string stringCall = "";
char eq;
bool operation = true;
bool clearR = false;
bool _Bin = false;
bool _Dec = true; 
bool _Hex = false;
Processor* pross = Processor::GetInstance();


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


	//LETTERS
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


void cMain::OnButtonClicked(wxCommandEvent& _evento) {

	
	Processor* theprocess = Processor::GetInstance();
    int getInput = _evento.GetId();


	switch (getInput) {

	case 1000: {
		if (clearR) {
			m_txt1->Clear();
			stringCall = "";
			clearR = false;
		}
		*m_txt1 << ("0");
		stringCall += "0";

		break; }
	case 1001: {
		if (clearR) {
			m_txt1->Clear();
			stringCall = "";
			clearR = false;
		}
		*m_txt1 << ("1");
		stringCall += "1";

		
		break; }
	case 1002: {
		if (clearR) {
			m_txt1->Clear();
			stringCall = "";
			clearR = false;
		}
		*m_txt1 << ("2");
		stringCall += "2";

		break; }
	case 1003: {

		*m_txt1 << ("3");
		stringCall += "3";

		
		break; }
	case 1004: {
		if (clearR) {
			m_txt1->Clear();
			stringCall = "";
			clearR = false;
		}
		*m_txt1 << ("4");
		stringCall += "4";

		break; }
	case 1005: {
		if (clearR) {
			m_txt1->Clear();
			stringCall = "";
			clearR = false;
		}
		*m_txt1 << ("5");
		stringCall += "5";

		
		break; }
	case 1006: {
		if (clearR) {
			m_txt1->Clear();
			stringCall = "";
			clearR = false;
		}
		*m_txt1 << ("6");
		stringCall += "6";

		
		break; }
	case 1007: {
		if (clearR) {
			m_txt1->Clear();
			stringCall = "";
			clearR = false;
		}
		*m_txt1 << ("7");
		stringCall += "7";
		
		break; }
	case 1008: {
		if (clearR) {
			m_txt1->Clear();
			stringCall = "";
			clearR = false;
		}
		*m_txt1 << ("8");
		stringCall += "8";
		
		break; }
	case 1009: {
		if (clearR) {
			m_txt1->Clear();
			stringCall = "";
			clearR = false;
		}
		*m_txt1 << ("9");
		stringCall += "9";
		
		break; }
//________________    END OF THE BUTTONS (NUMBERS)    ____________________
	case 1011: { //DECIMAL
		if (_Bin || _Hex) {
			m_txt1->Clear();
			*m_txt1 << stringCall;
			_Bin = false;
			_Hex = false;
			operation = true;
		}
		break; }

	case 1012: { //equal
		if (!operation && stringCall.length() != 0) {
			m_txt1->Clear();
			num2 = stoi(stringCall);
			ans = pross->AllValueChange(num1, num2, eq);
			*m_txt1 << num1 << eq << num2 << "=" << ans ;
			operation = true;
			clearR = true;

		}

		break; }

	case 1013: { //percent
		if (operation && stringCall.length() != 0) {
			num1 = stoi(stringCall);
			eq = '%';
			m_txt1->Clear();
			*m_txt1 << num1 << ("%");
			stringCall = "";

			operation = false;
		}
		break; }
	case 1014: { //BINARY
		if (_Bin = true) {
			m_txt1->Clear();
		}
			m_txt1->Clear();
			num1 = stoi(stringCall);
			std::string Bin = Processor::GetInstance()->TransformBinaryString(num1);
			*m_txt1 << Bin;
			_Bin = true;
	        operation = false;
		
		break; }
	case 1015: { //HEXADECIMAL
		if (_Hex = true) {
			m_txt1->Clear();
		}
		m_txt1->Clear();
		num1 = stoi(stringCall);
		std::string Hex = Processor::GetInstance()->TransformtoHexaDecimalString(num1);
		*m_txt1 << Hex;
		_Hex = true;
		operation = false;

		break; }
	case 1016: { //------CLEAR------
		num1 = 0;
		num2 = 0;
		clearR = false;
		m_txt1->Clear();
		eq = NULL;
		operation = true;
		stringCall = "";
		break; }
	case 1017: {
		if (operation && stringCall.length() != 0) {
			num1 = stoi(stringCall);
			eq = '/';
			m_txt1->Clear();
			*m_txt1 << num1 << ("/");
			stringCall = "";

			operation = false;
		}
		eq = '/';
		break; }
	case 1018: {
		if (operation && stringCall.length() != 0) {
			num1 = stoi(stringCall);
			eq = '*';
			m_txt1->Clear();
			*m_txt1 << num1 << ("*");
			stringCall = "";

			operation = false;
		}
		eq = '*';
		break; }
	case 1019: {
		if (operation && stringCall.length() != 0) {
			num1 = stoi(stringCall);
			eq = '-';
			m_txt1->Clear();
			*m_txt1 << num1 << ("-");
			stringCall = "";

			operation = false;
		}
		eq = '-';
		break; }
	case 1020: {
		if (operation && stringCall.length() != 0) {
			num1 = stoi(stringCall);
			eq = '+';
			m_txt1->Clear();
			*m_txt1 << num1 << ("+");
			stringCall = "";

			operation = false;
		}
		eq = '+';
		break; }
	case 1021: {
		*m_txt1 << "Neg";
		stringCall += "Neg";
		break; }
	}
	
}

cMain::~cMain() {
	delete[]CambioBoton;
}



