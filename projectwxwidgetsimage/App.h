#pragma once
#include "wx/wx.h"
#include "MainFrame.h"

class App : public wxApp
{
public:
	// Constructor
	App();
	// Application entry point
	bool OnInit();
	// Destructor
	~App();
private:
	MainFrame *m_mainFrame = nullptr;
};
