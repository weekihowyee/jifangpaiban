// server_testDlg.cpp : implementation file
//

#include "stdafx.h"
#include "server_test.h"
#include "server_testDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#undef THIS_FILE
static char THIS_FILE[] = __FILE__;
#endif

/////////////////////////////////////////////////////////////////////////////
// CAboutDlg dialog used for App About

#define MAXPRESS 3
#define OK 1
#define ERROR 0
#define TRUE 1
#define FALSE 0
#define LEN sizeof(struct Node) //Node的大小



class CAboutDlg : public CDialog
{
public:
	CAboutDlg();

// Dialog Data
	//{{AFX_DATA(CAboutDlg)
	enum { IDD = IDD_ABOUTBOX };
	//}}AFX_DATA

	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CAboutDlg)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:
	//{{AFX_MSG(CAboutDlg)
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
	//{{AFX_DATA_INIT(CAboutDlg)
	//}}AFX_DATA_INIT
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CAboutDlg)
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
	//{{AFX_MSG_MAP(CAboutDlg)
		// No message handlers
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CServer_testDlg dialog

CServer_testDlg::CServer_testDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CServer_testDlg::IDD, pParent)
{
	//{{AFX_DATA_INIT(CServer_testDlg)
	m_11 = _T("");
	m_12 = _T("");
	m_13 = _T("");
	m_14 = _T("");
	m_15 = _T("");
	m_21 = _T("");
	m_22 = _T("");
	m_23 = _T("");
	m_24 = _T("");
	m_25 = _T("");
	m_31 = _T("");
	m_32 = _T("");
	m_33 = _T("");
	m_34 = _T("");
	m_35 = _T("");
	m_41 = _T("");
	m_42 = _T("");
	m_43 = _T("");
	m_45 = _T("");
	m_44 = _T("");
	m_51 = _T("");
	m_52 = _T("");
	m_53 = _T("");
	m_54 = _T("");
	m_55 = _T("");
	m_61 = _T("");
	m_62 = _T("");
	m_63 = _T("");
	m_64 = _T("");
	m_65 = _T("");
	m_71 = _T("");
	m_72 = _T("");
	m_73 = _T("");
	m_74 = _T("");
	m_75 = _T("");
	//}}AFX_DATA_INIT
	// Note that LoadIcon does not require a subsequent DestroyIcon in Win32
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CServer_testDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialog::DoDataExchange(pDX);
	//{{AFX_DATA_MAP(CServer_testDlg)
	DDX_Control(pDX, IDC_adminlist, m_admin);
	DDX_Text(pDX, IDC_11, m_11);
	DDX_Text(pDX, IDC_12, m_12);
	DDX_Text(pDX, IDC_13, m_13);
	DDX_Text(pDX, IDC_14, m_14);
	DDX_Text(pDX, IDC_15, m_15);
	DDX_Text(pDX, IDC_21, m_21);
	DDX_Text(pDX, IDC_22, m_22);
	DDX_Text(pDX, IDC_23, m_23);
	DDX_Text(pDX, IDC_24, m_24);
	DDX_Text(pDX, IDC_25, m_25);
	DDX_Text(pDX, IDC_31, m_31);
	DDX_Text(pDX, IDC_32, m_32);
	DDX_Text(pDX, IDC_33, m_33);
	DDX_Text(pDX, IDC_34, m_34);
	DDX_Text(pDX, IDC_35, m_35);
	DDX_Text(pDX, IDC_41, m_41);
	DDX_Text(pDX, IDC_42, m_42);
	DDX_Text(pDX, IDC_43, m_43);
	DDX_Text(pDX, IDC_45, m_45);
	DDX_Text(pDX, IDC_44, m_44);
	DDX_Text(pDX, IDC_51, m_51);
	DDX_Text(pDX, IDC_52, m_52);
	DDX_Text(pDX, IDC_53, m_53);
	DDX_Text(pDX, IDC_54, m_54);
	DDX_Text(pDX, IDC_55, m_55);
	DDX_Text(pDX, IDC_61, m_61);
	DDX_Text(pDX, IDC_62, m_62);
	DDX_Text(pDX, IDC_63, m_63);
	DDX_Text(pDX, IDC_64, m_64);
	DDX_Text(pDX, IDC_65, m_65);
	DDX_Text(pDX, IDC_71, m_71);
	DDX_Text(pDX, IDC_72, m_72);
	DDX_Text(pDX, IDC_73, m_73);
	DDX_Text(pDX, IDC_74, m_74);
	DDX_Text(pDX, IDC_75, m_75);
	//}}AFX_DATA_MAP
}

BEGIN_MESSAGE_MAP(CServer_testDlg, CDialog)
	//{{AFX_MSG_MAP(CServer_testDlg)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDC_BUTTON3, OnButton3)
	ON_BN_CLICKED(IDC_Init, OnInit)
	ON_WM_CREATE()
	ON_BN_CLICKED(IDC_PB, OnPb)
	//}}AFX_MSG_MAP
END_MESSAGE_MAP()

/////////////////////////////////////////////////////////////////////////////
// CServer_testDlg message handlers

BOOL CServer_testDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon
	
	// TODO: Add extra initialization here
	
	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CServer_testDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialog::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CServer_testDlg::OnPaint() 
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, (WPARAM) dc.GetSafeHdc(), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialog::OnPaint();
	}
}

// The system calls this to obtain the cursor to display while the user drags
//  the minimized window.

void  read_file_test1(int x, int (*arr_t)[5])
{
    int a[7][5];
    int i,j,k;
    FILE* fp;
    char ch,filename[30],fr[20],ba[10]={".dat"};
    itoa(x,filename,10);
    strcat(filename,ba);
     fp=fopen(filename,"r");
    if(fp==NULL)
        exit(0);
    for(i=0;i<7;i++)
	{
		for(j=0;j<5;j++)
		{
			fscanf(fp,"%d",&arr_t[i][j]);
		}
		fscanf(fp,"\n");
	}
    fclose(fp);

}

void read_name(int x, char *str)
{
    char ch,filename[100],ba[10]={".txt"};
	  FILE* fp;
    itoa(x,filename,10);
    strcat(filename,ba);
	 fp=fopen(filename,"r");
	 fgets(str,20,fp);
}

Status read_file_test(int x,int (*arr_t)[5])
{
    int a[7][5];
    int i,j,k;
	 char ch,filename[100],ba[10]={".dat"};
	  FILE* fp;
    /*************************************************/
    /*************add code to get name****************/
    /*************************************************/

    itoa(x,filename,10);
    strcat(filename,ba);

	 fp=fopen(filename,"r");

    if(fp==NULL)
        return ERROR;
    for(i=0;i<7;i++)
	{
		for(j=0;j<5;j++)
		{
			fscanf(fp,"%d",&arr_t[i][j]);
		}
		fscanf(fp,"\n");
	}
    fclose(fp);
    return OK;
}



HCURSOR CServer_testDlg::OnQueryDragIcon()
{
	return (HCURSOR) m_hIcon;
}

void CServer_testDlg::OnButton3() 
{
	// TODO: Add your control notification handler code here
	MessageBox("这是排班系统V1.0!");
}

void CServer_testDlg::OnInit() 
{
	// TODO: Add your control notification handler code here
	int (*arr_t)[5],s[7][5],i,j,k;
    char stri[100];
    Linklist p1,p2;
    p2=L;
    for(i=1;;i++)  //test mode
    {
       p1=(Linklist) malloc(LEN);
	   arr_t=s;
       if(read_file_test(i,arr_t)==ERROR)
        break;
        read_name(i,stri);
        for(j=0;j<50;j++)
        {
            p1->name[j]=stri[j];
        }

       p1->worknum=i;
       p1->press=0;
        for(j=0;j<7;j++)
            for(k=0;k<5;k++)
                {
                     p1->lesson_table[j][k]=arr_t[j][k]; //test mode
                }
        for(j=0;j<7;j++)
            for(k=0;k<5;k++)
                {
                     p1->work_table[j][k]=0;
                }
                for(j=0;j<7;j++)
                    p1->tmp[j]=0;
        p2->Next=p1;
        p2=p1;
    }

    p2->Next=p1;
        p2=p1;
    p2->Next=NULL;

	Linklist p,p3;
		int flag=1;
	p=L->Next;

	while(flag)
	{
		if(p->Next->Next==NULL)
		{
			p->Next=NULL;
			flag=0;
			break;
		}
		p=p->Next;
	}

/*	p3=L->Next;
	char snm[100];
	CString m_han;
	while(p3!=NULL)
	{
		for(j=0;j<50;j++)
        {
            snm[j]=p3->name[j];
        }	
		m_han.Format("%s",snm);
		m_admin.AddString(m_han);
	}*/
	

}


Status pb_test(int (*p)[5],Linklist L,int i,int j)
{
    int flag=1,x=0;
    Linklist t;
    t=L->Next;
    while(t!=NULL)
    {
        if(t->lesson_table[i][j]==0 && t->tmp[i]==0 && t->press<MAXPRESS)
        {
            *(*(p+i)+j)=t->worknum;
            t->work_table[i][j]=1;
            t->tmp[i]=1;
            t->press++;
			flag=0;
            break;
        }
        t=t->Next;
    }
	if(flag)
		*(*(p+i)+j)=0;
    return OK;
}


Status pb_ful_test(int (*p)[5],Linklist L,int i,int j)
{
     int x,y,flag=1;
     Linklist t;
     t=L->Next;
    if(j<2) //daytime
    {
        y=(2*j)+1;  //single2
        x=2*j; //single1

        while(t!=NULL)
        {
            if(t->lesson_table[i][x]==0 &&  t->lesson_table[i][y]==0 && t->tmp[i]==0 && t->press<MAXPRESS)
            {
                *(*(p+i)+x)=t->worknum;
                *(*(p+i)+y)=t->worknum;
                t->work_table[i][x]=1;
                t->work_table[i][y]=1;
                t->tmp[i]=1;
                t->press++;
                flag=0;
                break;
            }
            t=t->Next;
        }
        if(flag)
        {
            pb_test(p,L,i,x);
            pb_test(p,L,i,y);
        }
    }
    if(j==2)
    {
        pb_test(p,L,i,2*j);
    }
    return OK;
}

void search_name(Linklist L,int gong,char *na)
{
    Linklist p;
    int j;
	char no[100]="无人值班";
    p=L->Next;
	if(gong==0)
	{
		for(j=0;j<50;j++)
        {
            na[j]=no[j];
        }
	}
	else
	{
		while(p->worknum != gong)
    {
        p=p->Next;
    }
    for(j=0;j<50;j++)
        {
            na[j]=p->name[j];
        }
	
	}
 }

Status pb_print(int (*p)[5],Linklist L)
{
    int i,k,j;
    char na[100];
    printf("this week !:\n");
    for(j=0;j<7;j++)
         {
            for(k=0;k<5;k++)
            {
                search_name(L,p[j][k],na);
                printf("%s\t",na);
                //printf("%d\t",p[j][k]);
            }
             printf("\n");
         }
	return OK;
}


int CServer_testDlg::OnCreate(LPCREATESTRUCT lpCreateStruct) 
{
	if (CDialog::OnCreate(lpCreateStruct) == -1)
		return -1;
	L=(Linklist)malloc(LEN);
	// TODO: Add your specialized creation code here
	
	return 0;
}

void CServer_testDlg::OnPb() 
{
	// TODO: Add your control notification handler code here
	int j,k;
    int pb[7][5];
	for(j=0;j<7;j++)
            for(k=0;k<3;k++)
                pb_ful_test(wlist,L,j,k);
				show_test1();
}

void CServer_testDlg::show_test1()
{
	char na[100];
	Linklist p;
	p=L->Next;
	/*search_name(L,1,na);
	UpdateData();
	m_11.Format("%s",na);
	UpdateData(FALSE);*/

	UpdateData();
	search_name(L,wlist[0][0],na);
	m_11.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[0][1],na);
	m_12.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[0][2],na);
	m_13.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[0][3],na);
	m_14.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[0][4],na);
	m_15.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[1][0],na);
	m_21.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[1][1],na);
	m_22.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[1][2],na);
	m_23.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[1][3],na);
	m_24.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[1][4],na);
	m_25.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[2][0],na);
	m_31.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[2][1],na);
	m_32.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[2][2],na);
	m_33.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[2][3],na);
	m_34.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[2][4],na);
	m_35.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[3][0],na);
	m_41.Format("%s",na);
	UpdateData(FALSE);

		UpdateData();
	search_name(L,wlist[3][1],na);
	m_42.Format("%s",na);
	UpdateData(FALSE);

		UpdateData();
	search_name(L,wlist[3][2],na);
	m_43.Format("%s",na);
	UpdateData(FALSE);

		UpdateData();
	search_name(L,wlist[3][3],na);
	m_44.Format("%s",na);
	UpdateData(FALSE);

		UpdateData();
	search_name(L,wlist[3][4],na);
	m_45.Format("%s",na);
	UpdateData(FALSE);

		UpdateData();
	search_name(L,wlist[4][0],na);
	m_51.Format("%s",na);
	UpdateData(FALSE);

		UpdateData();
	search_name(L,wlist[4][1],na);
	m_52.Format("%s",na);
	UpdateData(FALSE);

		UpdateData();
	search_name(L,wlist[4][2],na);
	m_53.Format("%s",na);
	UpdateData(FALSE);

		UpdateData();
	search_name(L,wlist[4][3],na);
	m_54.Format("%s",na);
	UpdateData(FALSE);

		UpdateData();
	search_name(L,wlist[4][4],na);
	m_55.Format("%s",na);
	UpdateData(FALSE);

		UpdateData();
	search_name(L,wlist[5][0],na);
	m_61.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[5][1],na);
	m_62.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[5][2],na);
	m_63.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[5][3],na);
	m_64.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[5][4],na);
	m_65.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[6][0],na);
	m_71.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[6][1],na);
	m_72.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[6][2],na);
	m_73.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[6][3],na);
	m_74.Format("%s",na);
	UpdateData(FALSE);

	UpdateData();
	search_name(L,wlist[6][4],na);
	m_75.Format("%s",na);
	UpdateData(FALSE);



}
