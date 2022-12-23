
// ListBoxExtension.cpp: 애플리케이션에 대한 클래스 동작을 정의합니다.
//

#include "pch.h"
#include "framework.h"
#include "ListBoxExtension.h"
#include "ListBoxExtensionDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CListBoxExtensionApp

BEGIN_MESSAGE_MAP(CListBoxExtensionApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CListBoxExtensionApp 생성

CListBoxExtensionApp::CListBoxExtensionApp()
{
	// TODO: 여기에 생성 코드를 추가합니다.
	// InitInstance에 모든 중요한 초기화 작업을 배치합니다.
}


// 유일한 CListBoxExtensionApp 개체입니다.

CListBoxExtensionApp theApp;


// CListBoxExtensionApp 초기화

BOOL CListBoxExtensionApp::InitInstance()
{
	CWinApp::InitInstance();

	CListBoxExtensionDlg dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();
	
	return FALSE;
}

