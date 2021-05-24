#pragma once

#include <wx/wx.h>
#include <wx/splitter.h>

//this class is the start of GUI app
//this will hold ctor and dtor and event handlers
class cMain : public wxFrame //this will be the form (wx call frame)
{
public:
	cMain(const wxString& title, const wxPoint& pos, const wxSize& size);
	~cMain();

public:
	wxButton   *m_btn1 = nullptr;
	wxTextCtrl *m_txt1 = nullptr;
	wxListBox  *m_lst1 = nullptr;

	void OnButtonClicked(wxCommandEvent& evt);
	//wxCommandEvent is type of events wx widgets

	wxDECLARE_EVENT_TABLE();
};

