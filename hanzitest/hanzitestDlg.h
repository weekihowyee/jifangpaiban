// hanzitestDlg.h : header file
//

#if !defined(AFX_HANZITESTDLG_H__7DAE2455_3414_4730_81BE_0808F7CDA5B6__INCLUDED_)
#define AFX_HANZITESTDLG_H__7DAE2455_3414_4730_81BE_0808F7CDA5B6__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

/////////////////////////////////////////////////////////////////////////////
// CHanzitestDlg dialog

class CHanzitestDlg : public CDialog
{
// Construction
public:
	CHanzitestDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CHanzitestDlg)
	enum { IDD = IDD_HANZITEST_DIALOG };
	CString	m_han;
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CHanzitestDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	HICON m_hIcon;

	// Generated message map functions
	//{{AFX_MSG(CHanzitestDlg)
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	afx_msg void OnButton1();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_HANZITESTDLG_H__7DAE2455_3414_4730_81BE_0808F7CDA5B6__INCLUDED_)
