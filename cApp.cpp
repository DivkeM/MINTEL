#include "cApp.h"

wxIMPLEMENT_APP(cApp);

cApp::cApp()
{

}
cApp::~cApp()
{

}

bool cApp::OnInit()
{
	m_frame1 = new cMain("MINTEL v0.1b", wxDefaultPosition, wxSize(640, 480));//wxDefaultSize);
	m_frame1->Show();

	return true;
}