#ifndef __WINDOW_HEADER__
#define __WINDOW_HEADER__

#include <afxwin.h>

class CWindow : public CFrameWnd
{
public:
  CWindow(void);
  virtual ~CWindow(void);

  DECLARE_MESSAGE_MAP();
};

#endif // __WINDOW_HEADER__