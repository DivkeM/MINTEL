#include "cMain.h"

wxBEGIN_EVENT_TABLE(cMain, wxFrame)
	EVT_BUTTON(10001, OnButtonClicked)

wxEND_EVENT_TABLE()

//we are overriding wxFrame constructor
//so we will need some parameters
cMain::cMain(const wxString& title, const wxPoint& pos, const wxSize& size) : wxFrame(nullptr, wxID_ANY, title, pos, size)
{ 

	wxSplitterWindow* splitterMain = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_BORDER | wxSP_LIVE_UPDATE);
	wxSplitterWindow* splitterLeft = new wxSplitterWindow(splitterMain, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_BORDER | wxSP_LIVE_UPDATE);
	//wxSplitterWindow* splitter2D3D = new wxSplitterWindow(splitter2D3DConsole, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_BORDER | wxSP_LIVE_UPDATE);

	wxPanel *main = new wxPanel(splitterMain);
	main->SetBackgroundColour(*wxYELLOW);

	wxPanel *commands = new wxPanel(splitterLeft);
	commands->SetBackgroundColour(*wxRED);//could use wxColour(100, 250, 100)

	wxPanel *view3D = new wxPanel(splitterLeft);
	view3D->SetBackgroundColour(*wxGREEN);

	splitterMain->SetMinimumPaneSize(500);
	splitterMain->SplitVertically(splitterLeft, main);

	splitterLeft->SetMinimumPaneSize(150);
	splitterLeft->SplitHorizontally(commands, view3D);


#if 0
	wxSplitterWindow* splitter = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_BORDER | wxSP_LIVE_UPDATE);
	
	wxSplitterWindow* right_top = new wxSplitterWindow(splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_BORDER | wxSP_LIVE_UPDATE);
	wxSplitterWindow* s_right_center = new wxSplitterWindow(splitter, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_BORDER | wxSP_LIVE_UPDATE);

	m_btn1 = new wxButton(splitter, 10001, "click", wxPoint(10, 10), wxSize(100, 50));
	m_txt1 = new wxTextCtrl(splitter, wxID_ANY, "", wxPoint(10, 70), wxSize(100, 30));
	m_lst1 = new wxListBox(splitter, wxID_ANY, wxPoint(10, 110), wxSize(100, 200));

	wxPanel* left = new wxPanel(splitter);
	wxPanel* right = new wxPanel(right_top);
	wxPanel* right_center = new wxPanel(right_top);
	wxPanel* right_bottom = new wxPanel(s_right_center);

	left->SetBackgroundColour(wxColour(200, 100, 100));
	right->SetBackgroundColour(wxColour(100, 220, 100));
	right_center->SetBackgroundColour(wxColour(100, 250, 100));
	right_bottom->SetBackgroundColour(wxColour(120, 250, 100));

	s_right_center->SetMinimumPaneSize(250);
	s_right_center->SplitHorizontally(right_center, right_bottom);

	right_top->SetMinimumPaneSize(250);
	right_top->SplitHorizontally(right, right_center);

	splitter->SetMinimumPaneSize(150);
	splitter->SplitVertically(left, right_top);
#endif
}

cMain::~cMain()
{

}

void cMain::OnButtonClicked(wxCommandEvent& evt)
{
	m_lst1->AppendString(m_txt1->GetValue());
	evt.Skip();
}