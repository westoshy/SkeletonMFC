#include "./WinMainApp.hpp"
#include "./Window.hpp"

CWinMainApp::CWinMainApp(void)
{
  TRACE("constructor of CWinMainApp\n");
}

CWinMainApp::~CWinMainApp()
{
  TRACE("destructor of CWinMainApp\n");
}

BOOL CWinMainApp::InitInstance(void)
{
  TRACE("InitInstance of CWinMainApp\n");

  m_pMainWnd = new CWindow;
  m_pMainWnd->ShowWindow(m_nCmdShow);
  m_pMainWnd->UpdateWindow();

  return true;
}

// Generate Application Instance
CWinMainApp App;