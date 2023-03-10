
// ListBoxExtensionDlg.h: 헤더 파일
//

#pragma once

struct ListData
{
	wchar_t name[24];
	wchar_t phone[24];
	int age;
};
// CListBoxExtensionDlg 대화 상자
class CListBoxExtensionDlg : public CDialogEx
{
// 생성입니다.
public:
	CListBoxExtensionDlg(CWnd* pParent = nullptr);	// 표준 생성자입니다.

// 대화 상자 데이터입니다.
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_LISTBOXEXTENSION_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 지원입니다.


// 구현입니다.
protected:
	HICON m_hIcon;

	// 생성된 메시지 맵 함수
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnBnClickedAddBtn();
	CListBox m_data_list;
	afx_msg void OnLbnSelchangeDataList();
	afx_msg void OnDestroy();
};
