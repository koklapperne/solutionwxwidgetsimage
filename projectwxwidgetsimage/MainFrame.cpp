#include "MainFrame.h"
// Event table

// Constructor
MainFrame::MainFrame() : wxFrame(nullptr, wxID_ANY, "Solution wxWidgets new application:", wxPoint(30, 30), wxSize(1200, 600))
{
	// 03-03-2022 13.24
	// Declarations
	int appAction;
	wxString dir;
	// Initializations
	appAction = 0;
	// IMPORTANT! This ensures that: jpg, png, bmp,... files can be handled! 
	wxInitAllImageHandlers();
	// Handle panels
	appAction = handlePanels();
	// Handle boxsizers
	appAction = handleBoxSizers();
	// Handle png image
	dir = "./graphics/";
	wxBitmap bitmap(100, 100);
}
// Destructor
MainFrame::~MainFrame()
{ 
	// 03-03-2022 13.24

}
// Private data member functions
int MainFrame::handlePanels() {
	// 05-03-2022 13.24
	// Declarations
	wxString dir;
	// 
	m_panelTop = new wxPanel(this, wxID_ANY, wxDefaultPosition, wxSize(150, 100));
	m_panelTop->SetBackgroundColour(wxColor(30, 30, 30));
	// Organization logo
	dir = "./graphics/";
	dir = dir + "Logo_Herlev_Hospital.png"; 
	m_imagePanelOrganizationLogo = new wxImagePanel(m_panelTop, dir, wxBITMAP_TYPE_PNG);
	m_imagePanelOrganizationLogo->SetBackgroundColour(wxColor(30, 30, 30));
	m_imagePanelOrganizationLogo->SetSize(wxSize(150, 200));
	m_imagePanelOrganizationLogo->SetPosition(wxPoint(0, 0));
	// m_panelLogoSpacer
	m_panelLogoSpacer = new wxPanel(m_panelTop, wxID_ANY, wxDefaultPosition, wxSize(150, 150));
	m_panelLogoSpacer->SetBackgroundColour(wxColor(30, 30, 30));
	// Institution logo
	dir = "./graphics/";
	dir = dir + "Logo_Region_Hovedstaden.png";
	m_imagePanelInstitutionLogo = new wxImagePanel(m_panelTop, dir, wxBITMAP_TYPE_PNG);
	m_imagePanelInstitutionLogo->SetBackgroundColour(wxColor(30, 30, 30));
	m_imagePanelInstitutionLogo->SetSize(wxSize(150, 200));
	m_imagePanelInstitutionLogo->SetPosition(wxPoint(0,0));
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
	//
	return 0;
}
int MainFrame::handleBoxSizers() {
	// 05-03-2022 13.24
	// m_boxSizerHorizontal
	m_boxSizerHorizontal = new wxBoxSizer(wxHORIZONTAL);
	m_boxSizerHorizontal->Add(m_panelCenterLeft, 0, wxEXPAND | wxRIGHT, 10);
	m_boxSizerHorizontal->Add(m_panelCenterCenter, 1, wxEXPAND | wxRIGHT, 10);
	m_boxSizerHorizontal->Add(m_panelCenterRight, 0, wxEXPAND, 10);
	// m_boxsizerHorizontalLogos
	m_boxsizerHorizontalLogos = new wxBoxSizer(wxHORIZONTAL);
	m_boxsizerHorizontalLogos->Add(m_imagePanelOrganizationLogo, 1, wxEXPAND | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 10);
	m_boxsizerHorizontalLogos->Add(m_panelLogoSpacer, 3, wxEXPAND | wxTOP | wxBOTTOM, 10);
	m_boxsizerHorizontalLogos->Add(m_imagePanelInstitutionLogo, 1, wxEXPAND | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 10);
	m_panelTop->SetSizer(m_boxsizerHorizontalLogos);
	// m_boxSizerVertical
	m_boxSizerVertical = new wxBoxSizer(wxVERTICAL);
	m_boxSizerVertical->Add(m_panelTop, 3, wxEXPAND | wxLEFT | wxRIGHT | wxTOP | wxBOTTOM, 10);
	m_boxSizerVertical->Add(m_boxSizerHorizontal, 15, wxEXPAND | wxLEFT | wxRIGHT | wxBOTTOM, 10);
	m_boxSizerVertical->Add(m_panelBottom, 2, wxEXPAND | wxLEFT | wxRIGHT | wxBOTTOM, 10);
	// Use m_boxSizerVertical on the frame 
	this->SetSizerAndFit(m_boxSizerVertical);
	//
	return 0;
}
// Events

