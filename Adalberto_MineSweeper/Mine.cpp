#include "Mine.h"
wxIMPLEMENT_APP(Mine);

Mine::Mine()
{

}

Mine::~Mine()
{

}

bool Mine::OnInit()
{
	m_frame1 = new cMain();
	m_frame1->Show(); 

	return true;
}