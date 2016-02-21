// hanzitest.h : main header file for the HANZITEST application
//

#if !defined(AFX_HANZITEST_H__D179392A_2D3D_450B_9B2A_8A5E406ADAB6__INCLUDED_)
#define AFX_HANZITEST_H__D179392A_2D3D_450B_9B2A_8A5E406ADAB6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CHanzitestApp:
// See hanzitest.cpp for the implementation of this class
//

class CHanzitestApp : public CWinApp
{
public:
	CHanzitestApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHanzitestApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CHanzitestApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HANZITEST_H__D179392A_2D3D_450B_9B2A_8A5E406ADAB6__INCLUDED_)
