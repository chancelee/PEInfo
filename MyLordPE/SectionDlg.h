#pragma once
#include "afxcmn.h"


// CSectionDlg 对话框

class CSectionDlg : public CDialogEx
{
	DECLARE_DYNAMIC(CSectionDlg)

public:
	CSectionDlg(char *pFileBuf, PIMAGE_NT_HEADERS pNt, CWnd* pParent = NULL);   // 标准构造函数
	virtual ~CSectionDlg();

	// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_SECTION_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV 支持

	DECLARE_MESSAGE_MAP()
public:
	CListCtrl m_sectionList;
	char *m_pFileBuf = NULL;
	PIMAGE_NT_HEADERS m_pNt;
	virtual BOOL OnInitDialog();
};
