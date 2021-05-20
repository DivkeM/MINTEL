#pragma once

#include <wx/wx.h>
//this class is the start of GUI app
//this will hold ctor and dtor and event handlers
class cMain : public wxFrame //this will be the form (wx call frame)
{
public:
	cMain();
	~cMain();

public:
	wxButton   *m_btn1 = nullptr;
	wxTextCtrl *m_txt1 = nullptr;
	wxListBox  *m_lst1 = nullptr;
};

