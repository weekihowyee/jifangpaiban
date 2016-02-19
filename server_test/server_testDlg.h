// server_testDlg.h : header file
//

#if !defined(AFX_SERVER_TESTDLG_H__E1F4AEEA_BA82_46DE_974E_6EE03DAD2E95__INCLUDED_)
#define AFX_SERVER_TESTDLG_H__E1F4AEEA_BA82_46DE_974E_6EE03DAD2E95__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CServer_testDlg dialog

class CServer_testDlg : public CDialog
{
// Construction
public:
	CServer_testDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CServer_testDlg)
	enum { IDD = IDD_SERVER_TEST_DIALOG };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CServer_testDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CServer_testDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton3();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERVER_TESTDLG_H__E1F4AEEA_BA82_46DE_974E_6EE03DAD2E95__INCLUDED_)
