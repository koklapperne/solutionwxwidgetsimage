#pragma once
#include "wx/wx.h"
#include "wx/image.h"
class MainFrame : public wxFrame
{
public:
	// Constructor
	MainFrame();
	// Destructor
	~MainFrame();
private:
	// Data members
	// Panels
	wxPanel* m_panelTop = nullptr;
	wxPanel* m_panelCenterLeft = nullptr;
	wxPanel* m_panelCenterCenter = nullptr;
	wxPanel* m_panelCenterRight = nullptr;
	wxPanel* m_panelBottom = nullptr;
	// Sizers
	wxBoxSizer* m_boxSizerHorizontal = nullptr;
	wxBoxSizer* m_boxSizerVertical = nullptr;
	// Bitmap 
	// Done on the stack, how to move to the heap?
	wxBitmap m_organizationLogoPng;
	// Data member functions
	int handlePanels();
	int handleBoxSizers();
	// Events
	 // Events
	void OnPaint(wxPaintEvent& event);
	void OnPanelCenterCenterPaint(wxPaintEvent& event);
	// Declare an event table
	wxDECLARE_EVENT_TABLE();
};
