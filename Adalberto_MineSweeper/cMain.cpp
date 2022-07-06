#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
   EVT_BUTTON(10001, OnButtonClicked) //Gets location of the button and validates the user action.

wxEND_EVENT_TABLE()



cMain::cMain() : wxFrame(nullptr, wxID_ANY, "OneLoneCoder.com - wxWidgets!", wxPoint(30, 30), wxSize(800, 600))
{
	btn = new wxButton * [nFieldWidth * nFieldHeight];
	wxGridSizer *grid = new wxGridSizer(nFieldWidth, nFieldHeight, 0, 0);

	//array of mines
	nField = new int[nFieldWidth * nFieldHeight];

	//Size and font of the numbers within Mine Sweeper
	wxFont font(24, wxFONTFAMILY_DEFAULT, wxFONTSTYLE_NORMAL, wxFONTWEIGHT_BOLD, false);

	for (int x = 0; x < nFieldWidth; x++)
	{
		for (int y = 0; y < nFieldHeight; y++)
		{
			btn[y * nFieldWidth + x] = new wxButton(this, 10000 + (y * nFieldWidth + x));
			btn[y * nFieldWidth + x]->SetFont(font);  //sets the instance for each button:

			grid->Add(btn[y * nFieldWidth + x], 1, wxEXPAND | wxALL);

			btn[y * nFieldWidth + x]->Bind(wxEVT_COMMAND_BUTTON_CLICKED, &cMain::OnButtonClicked, this);
			nField[y * nFieldWidth + x] = 0;
		}
	}

	this->SetSizer(grid);
	grid->Layout();
}

cMain::~cMain() //destructor:)
{
	delete[]btn;
}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	//Get coordinate of button in field array
	int x = (evt.GetId() - 10000) % nFieldWidth;
	int y = (evt.GetId() - 10000) / nFieldWidth;

	if (bFirstClick)
	{
		int mines = 30;

		while (mines)
		{
			int rx = rand() % nFieldWidth;
			int ry = rand() % nFieldHeight;

			if (nField[ry * nFieldWidth + rx] == 0 && rx != x && ry != y)
			{
				nField[ry * nFieldWidth + rx] = -1;
				mines--;
			}
		}
		bFirstClick = false;
	}
    // Disable button, preventing it from being pressed again
	btn[y*nFieldWidth + x]->Enable(false);
	//Check if player hit a mine
	if (nField[y * nFieldWidth + x] == -1)
	{
		wxMessageBox("BBOOOOOOOOOO !! HAHA, you lose");

		//Reset the game
		bFirstClick = true;
		for (int x = 0; x < nFieldWidth; x++)
			for (int y = 0; y < nFieldHeight; y++)
			{
				nField[y * nFieldWidth + x] = 0;
				btn[y * nFieldWidth + x]->SetLabel("");
				btn[y * nFieldWidth + x]->Enable(true);

			}
		
	}
	else
	{
		//Count the mines that are neighboors to the box
		int mine_count = 0;
		for (int i = -1; i < 2; i++)
			for (int j = -1; j < 2; j++)
			{
				if (x + i >= 0 && x + i < nFieldWidth && y + j >= 0 && y + j < nFieldHeight)
				{
					if (nField[(y + j) * nFieldWidth + (x + i)] == -1)
						mine_count++;
				}
			}
		//Update buttons laber to show mine count if > 0
		if (mine_count > 0)
		{
			btn[y * nFieldWidth + x]->SetLabel(std::to_string(mine_count));
		}
	}

	evt.Skip();
}