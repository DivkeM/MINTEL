#include "cSizers.h"

cSizers::cSizers(const wxString& title, const wxPoint& pos, const wxSize& size) : wxFrame(nullptr, wxID_ANY, title, pos, size)
{
    wxSplitterWindow* splitter = new wxSplitterWindow(this, wxID_ANY, wxDefaultPosition, wxDefaultSize, wxSP_BORDER | wxSP_LIVE_UPDATE);

    wxPanel* left = new wxPanel(splitter);
    wxPanel* right = new wxPanel(splitter);

    left->SetBackgroundColour(wxColour(200, 100, 100));
    right->SetBackgroundColour(wxColour(100, 220, 100));

    splitter->SetMinimumPaneSize(50);
    splitter->SplitVertically(left, right);

}