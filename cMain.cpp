#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(10001, OnButtonClicked)

wxEND_EVENT_TABLE()

//we are overriding wxFrame constructor
//so we will need some parameters
cMain::cMain() : wxFrame(nullptr, wxID_ANY, "MINTEL_MD")
{
	m_btn1 = new wxButton(this, 10001, "click", wxPoint(10,10), wxSize(150,50));
	m_txt1 = new wxTextCtrl(this, wxID_ANY, "", wxPoint(10, 70), wxSize(300, 30));
	m_lst1 = new wxListBox(this, wxID_ANY, wxPoint(10, 110), wxSize(300, 300));

}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	m_lst1->AppendString(m_txt1->GetValue());
	evt.Skip();
}