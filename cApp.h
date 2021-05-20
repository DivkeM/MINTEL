#pragma once

#include <wx/wx.h>
#include "cMain.h"

class cApp : public wxApp //this is like a launcher class
{
public:
	cApp();
	~cApp();

private:
	cMain* m_frame1 = nullptr;

public:
	virtual bool OnInit();

};
