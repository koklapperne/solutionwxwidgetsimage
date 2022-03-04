#include "MainFrame.h"
// Event table
wxBEGIN_EVENT_TABLE(MainFrame, wxFrame)
	EVT_PAINT(MainFrame::OnPaint)
wxEND_EVENT_TABLE()
// Constructor
MainFrame::MainFrame() : wxFrame(nullptr, wxID_ANY, "Solution wxWidgets new application:", wxPoint(30, 30), wxSize(1200, 600))
{
	// 03-03-2022 13.24
	// Declarations
	int appAction;
	wxString dir;
	
	wxImage image;
	// Initializations
	appAction = 0;

	// Handle panels
	appAction = handlePanels();
	// Handle boxsizers
	appAction = handleBoxSizers();
	// Handle png image
	dir = "./graphics/";
	wxBitmap bitmap(100, 100);
	image = bitmap.ConvertToImage();
#if wxUSE_LIBPNG

	if (!image.LoadFile(dir + "Logo_Region_Hovedstaden_03.png"))
	{
		wxLogError("Can't load PNG image");
	}
	else
	{
		m_organizationLogoPng = wxBitmap(image);
	}
#endif // wxUSE_LIBPNG

	
	
	
}
// Destructor
MainFrame::~MainFrame()
{ 
	// 03-03-2022 13.24

}
// Private data member functions
int MainFrame::handlePanels() {
	// 03-03-2022 13.24
	/*
	m_panelTop = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(150, 100));
	m_panelTop->SetBackgroundColour(wxColor(30, 30, 30));
	//
	m_panelCenterLeft = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(150, 100));
	m_panelCenterLeft->SetBackgroundColour(wxColor(30, 30, 30));
	//
	m_panelCenterCenter = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(150, 150));
	m_panelCenterCenter->SetBackgroundColour(wxColour(30, 30, 30));
	//
	m_panelCenterRight = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(150, 100));
	m_panelCenterRight->SetBackgroundColour(wxColor(30, 30, 30));
	//
	m_panelBottom = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(150, 100));
	m_panelBottom->SetBackgroundColour(wxColor(30, 30, 30));
	*/
	//
	return 0;
}
int MainFrame::handleBoxSizers() {
	// 03-03-2022 13.24
	// m_boxSizerHorizontal
	/*
	m_boxSizerHorizontal = new wxBoxSizer(wxHORIZONTAL);
	m_boxSizerHorizontal->Add(m_panelCenterLeft, 0, wxEXPAND | wxRIGHT, 10);
	m_boxSizerHorizontal->Add(m_panelCenterCenter, 1, wxEXPAND | wxRIGHT, 10);
	m_boxSizerHorizontal->Add(m_panelCenterRight, 0, wxEXPAND, 10);
	// m_boxSizerVertical
	m_boxSizerVertical = new wxBoxSizer(wxVERTICAL);
	m_boxSizerVertical->Add(m_panelTop, 0, wxEXPAND | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 10);
	m_boxSizerVertical->Add(m_boxSizerHorizontal, 1, wxEXPAND | wxLEFT | wxRIGHT | wxBOTTOM, 10);
	m_boxSizerVertical->Add(m_panelBottom, 0, wxEXPAND | wxLEFT | wxRIGHT | wxBOTTOM, 10);
	// Use m_boxSizerVertical on the frame 
	this->SetSizerAndFit(m_boxSizerVertical);
	*/
	//
	return 0;
}
// Events
void MainFrame::OnPaint(wxPaintEvent& WXUNUSED(event))
{
	wxPaintDC dc(this);
	PrepareDC(dc);

	if (m_organizationLogoPng.IsOk())
	{
		dc.DrawBitmap(m_organizationLogoPng, 10, 10);
	}
}
