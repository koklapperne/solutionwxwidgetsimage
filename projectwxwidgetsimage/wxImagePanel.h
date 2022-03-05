#pragma once
#include <wx/wx.h>
#include <wx/sizer.h>
class wxImagePanel : public wxPanel
{
public:
	// Constructor
	wxImagePanel(wxPanel* parent, wxString file, wxBitmapType format);
    //wxImagePanel(wxFrame* parent, wxString file, wxBitmapType format);
	// Destructor
	~wxImagePanel();

    // Events
    void paintEvent(wxPaintEvent& evt);
    void paintNow();
    void render(wxDC& dc);
    // Some useful events
    /*
     void mouseMoved(wxMouseEvent& event);
     void mouseDown(wxMouseEvent& event);
     void mouseWheelMoved(wxMouseEvent& event);
     void mouseReleased(wxMouseEvent& event);
     void rightClick(wxMouseEvent& event);
     void mouseLeftWindow(wxMouseEvent& event);
     void keyPressed(wxKeyEvent& event);
     void keyReleased(wxKeyEvent& event);
     */
private:
	wxBitmap image;
     // Event table 
    DECLARE_EVENT_TABLE()
};

