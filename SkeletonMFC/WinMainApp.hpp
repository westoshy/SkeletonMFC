#ifndef __WIN_MAIN_HEADER__
#define __WIN_MAIN_HEADER__

#include <sdkddkver.h>
#include <afxwin.h>

class CWinMainApp : public CWinApp
{
public:
  CWinMainApp(void);
  virtual ~CWinMainApp(void);

  BOOL InitInstance(void);
};

#endif // __WIN_MAIN_HEADER__