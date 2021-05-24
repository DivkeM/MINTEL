#include "cApp.h"
#include "cSizers.h"

wxIMPLEMENT_APP(cApp);

cApp::cApp()
{

}
cApp::~cApp()
{

}

bool cApp::OnInit()
{
	//m_frame1 = new cMain();
	mySizer1 = new cSizers("Hello World", wxDefaultPosition, wxDefaultSize);
	//m_frame1->Show();
	mySizer1->Show();
	return true;
}