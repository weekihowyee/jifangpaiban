// server_test.h : main header file for the SERVER_TEST application
//

#if !defined(AFX_SERVER_TEST_H__5BABCC5A_95C6_419A_B452_8E41E26AAF01__INCLUDED_)
#define AFX_SERVER_TEST_H__5BABCC5A_95C6_419A_B452_8E41E26AAF01__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols

/////////////////////////////////////////////////////////////////////////////
// CServer_testApp:
// See server_test.cpp for the implementation of this class
//

class CServer_testApp : public CWinApp
{
public:
	CServer_testApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CServer_testApp)
	public:
	virtual BOOL InitInstance();
	//}}AFX_VIRTUAL

// Implementation

	//{{AFX_MSG(CServer_testApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERVER_TEST_H__5BABCC5A_95C6_419A_B452_8E41E26AAF01__INCLUDED_)
