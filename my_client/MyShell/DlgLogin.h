
//**********************************************************
// ����༭��
//**********************************************************

#if !defined(AFX_DLGLOGIN_H__CFBF876A_07F8_4B55_AF0F_F3ABB3ABDD4A__INCLUDED_)
#define AFX_DLGLOGIN_H__CFBF876A_07F8_4B55_AF0F_F3ABB3ABDD4A__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// DlgLogin.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// CDlgLogin dialog
#include "MyButton.h"
#include "MyEdit.h"
#include "MyStatic.h"
#include "MyImage.h"
#include "MyProgress.h"
#include "ServerStatus.h"

#include "GameInput.h"
#include "game3deffectex.h"

class CDlgLogin : public CDialog
{
    // Construction
public:
    void Show();
    CDlgLogin(CWnd* pParent = NULL);   // standard constructor
    BOOL		m_bShow ;
    int			m_nCurLoginMode;
private:
    BOOL		m_bLoad ;
    CPoint		m_Pnt ;
    CRect		m_PrgServer[7];
    CGameInputStr m_GameInputStr ;
    UINT		m_uCurrentEdt ;
    BOOL		m_b1024 ;
    BOOL	    m_bServerActive[5];
    char		m_strName[16] ;
    char		m_strGroup[16] ;
    char		m_strServer[16] ;
    int			m_nCurrentFocus ;
	char		m_strAccount[32];
	char		m_strPsw[32];
    CServerStatus	m_SerSta ;
    CGame3DEffectEx m_EffectExLogin;
    CGame3DEffectEx m_EffectExLoginN;


public:
    bool LoginGame();
    void SetEffectPos(int x, int y);
    void SetCurLoginMode(int nMode);
    void InsertServer( int nIndex, char* strPicID, char* strText, int nSerSta );
    void MoveAllPicAndWord();
    void ReInit();
	const char* GetAccount(){return m_strAccount;}
	const char* GetPswd(){return m_strPsw;}
	const char* GetServer(){return m_strServer;}
	const char* GetServerName(){return m_strName;}
    // Dialog Data
    //{{AFX_DATA(CDlgLogin)
    enum { IDD = IDD_DIALOG_LOGIN };
    CMyProgress	m_PrsServer5;
    CMyProgress	m_PrsServer4;
    CMyProgress	m_PrsServer3;
    CMyProgress	m_PrsServer2;
    CMyProgress	m_PrsServer1;
    CMyButton	m_BtnCancel;
    CMyButton	m_BtnRightPage;
    CMyButton	m_BtnLeftPage;
    CMyButton	m_BtnBack;
    CMyButton	m_BtnServer5;
    CMyButton	m_BtnServer4;
    CMyButton	m_BtnServer3;
    CMyButton	m_BtnServer2;
    CMyButton	m_BtnServer1;
    CMyButton	m_BtnGroup5;
    CMyButton	m_BtnGroup4;
    CMyButton	m_BtnGroup3;
    CMyButton	m_BtnGroup2;
    CMyButton	m_BtnGroup1;
    CMyImage	m_ImgGroupBk;
    CMyImage	m_LoginEdtImg;
    CMyEdit	m_LoginAccountEdt;
    CMyEdit	m_LoginPasswordEdt;
    CMyButton m_LoginOkBtn ;
    CMyButton m_LoginExitBtn ;
    CMyButton m_LoginRecordBtn ;
    //}}AFX_DATA


    // Overrides
    // ClassWizard generated virtual function overrides
    //{{AFX_VIRTUAL(CDlgLogin)
protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
    virtual LRESULT WindowProc(UINT message, WPARAM wParam, LPARAM lParam);
    //}}AFX_VIRTUAL

    // Implementation
protected:
    int	 m_nEffectPosX;
    int	 m_nEffectPosY;
    void SetGroupStatus(BOOL bGroup);
    void LoginServer(int nIndex);
    void LoginGroup(int nIndex);
    int m_nCurPage;
    void ResetServerStatus();
    int m_nCurServerIn;
    void ShowServerInfo(int nServerIndex);
	void InitGui();
    // Generated message map functions
    //{{AFX_MSG(CDlgLogin)
    virtual BOOL OnInitDialog();
    afx_msg HBRUSH OnCtlColor(CDC* pDC, CWnd* pWnd, UINT nCtlColor);
    afx_msg void OnLoginBtnOk();
    afx_msg void OnLoginBtnExit();
    afx_msg void OnLoginBtnRecord();
    afx_msg void OnSetfocusLoginEdtAccount();
    afx_msg void OnSetfocusLoginEdtPassword();
    afx_msg void OnLoginServer1();
    afx_msg void OnLoginGroup1();
    afx_msg void OnBtnBack();
    afx_msg void OnLoginBtnCancel();
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);
    afx_msg void OnLoginGroup2();
    afx_msg void OnLoginGroup3();
    afx_msg void OnLoginGroup4();
    afx_msg void OnLoginGroup5();
    afx_msg void OnLoginServer2();
    afx_msg void OnLoginServer3();
    afx_msg void OnLoginServer4();
    afx_msg void OnLoginServer5();
    afx_msg void OnBtnLeftpage();
    afx_msg void OnBtnRightpage();
    //}}AFX_MSG
    DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnSize(UINT nType, int cx, int cy);
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_DLGLOGIN_H__CFBF876A_07F8_4B55_AF0F_F3ABB3ABDD4A__INCLUDED_)
