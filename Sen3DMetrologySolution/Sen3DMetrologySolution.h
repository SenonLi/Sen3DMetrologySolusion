
// Sen3DMetrologySolution.h : main header file for the Sen3DMetrologySolution application
//
#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "UserInterface\resource.h"       // main symbols


// CSen3DMetrologySolutionApp:
// See Sen3DMetrologySolution.cpp for the implementation of this class
//

class CSen3DMetrologySolutionApp : public CWinAppEx
{
public:
	CSen3DMetrologySolutionApp();


// Overrides
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// Implementation
	UINT  m_nAppLook;
	BOOL  m_bHiColorIcons;

	virtual void PreLoadState();
	virtual void LoadCustomState();
	virtual void SaveCustomState();

	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CSen3DMetrologySolutionApp theApp;
