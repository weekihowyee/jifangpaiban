// server_testDlg.h : header file
//

#include "stdafx.h"

#if !defined(AFX_SERVER_TESTDLG_H__E1F4AEEA_BA82_46DE_974E_6EE03DAD2E95__INCLUDED_)
#define AFX_SERVER_TESTDLG_H__E1F4AEEA_BA82_46DE_974E_6EE03DAD2E95__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000


/////////////////////////////////////////////////////////////////////////////
// CServer_testDlg dialog

typedef  struct Node
{
    int worknum;
    char name[100];
    int lesson_table[7][5];
    int work_table[7][5];
    int press;
    int tmp[7];
    struct Node *Next;
}Node;

typedef struct Node *Linklist;


class CServer_testDlg : public CDialog
{
// Construction
public:
	void show_test1();
	Linklist L;
	int wlist[7][5];
	CServer_testDlg(CWnd* pParent = NULL);	// standard constructor

// Dialog Data
	//{{AFX_DATA(CServer_testDlg)
	enum { IDD = IDD_SERVER_TEST_DIALOG };
	CListBox	m_admin;
	CString	m_11;
	CString	m_12;
	CString	m_13;
	CString	m_14;
	CString	m_15;
	CString	m_21;
	CString	m_22;
	CString	m_23;
	CString	m_24;
	CString	m_25;
	CString	m_31;
	CString	m_32;
	CString	m_33;
	CString	m_34;
	CString	m_35;
	CString	m_41;
	CString	m_42;
	CString	m_43;
	CString	m_45;
	CString	m_44;
	CString	m_51;
	CString	m_52;
	CString	m_53;
	CString	m_54;
	CString	m_55;
	CString	m_61;
	CString	m_62;
	CString	m_63;
	CString	m_64;
	CString	m_65;
	CString	m_71;
	CString	m_72;
	CString	m_73;
	CString	m_74;
	CString	m_75;
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
	afx_msg void OnInit();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnPb();
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SERVER_TESTDLG_H__E1F4AEEA_BA82_46DE_974E_6EE03DAD2E95__INCLUDED_)
