#include "App.h"
// Macro to initialize the application
wxIMPLEMENT_APP(App);
// Constructor
App::App()
{

}
// Application entry point
bool App::OnInit()
{
	// IMPORTANT! This ensures that: jpg, png, bmp,... files can be handled!
	wxInitAllImageHandlers();
	//
	m_mainFrame = new MainFrame();
	m_mainFrame->SetBackgroundColour(wxColour(68, 96, 130));
	m_mainFrame->Maximize();
	m_mainFrame->Show();
	return true;
}
// Destructor
App::~App()
{

}