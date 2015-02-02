#include "./Window.hpp"

CWindow::CWindow(void)
{
  TRACE("constructor of CWindow");
  Create(NULL, _T("Skelton"));
}

CWindow::~CWindow(void)
{
  TRACE("destructor of CWindow");
}

BEGIN_MESSAGE_MAP(CWindow, CFrameWnd)

END_MESSAGE_MAP()