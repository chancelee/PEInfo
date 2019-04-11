
// MyLordPEDlg.h : 头文件
//

#pragma once
#include "afxwin.h"


// CMyLordPEDlg 对话框
class CMyLordPEDlg : public CDialogEx
{
// 构造
public:
	CMyLordPEDlg(CWnd* pParent = NULL);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MYLORDPE_DIALOG };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV 支持


// 实现
protected:
	HICON m_hIcon;

	// 生成的消息映射函数
	virtual BOOL OnInitDialog();
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();
	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnDropFiles(HDROP hDropInfo);
	char *pFileBuf;
	PIMAGE_DOS_HEADER pDos;
	PIMAGE_NT_HEADERS pNt;
	
	void ShowHeaderOfNt(char* pFileBuf);
	CString m_strFilePath;
	CString m_strOEP;
	CString m_strSubSystem;
	CString m_strImageBase;
	CString m_strNumberOfSections;
	CString m_strSizeOfImage;
	CString m_strTimeDateStamp;
	CString m_strBaseOfCode;
	CString m_strSizeOfHeaders;
	CString m_strBaseOfData;
	CString m_strCharacteristics;
	CString m_strSectionAlignment;
	CString m_strCheckSum;
	CString m_strFileAlignment;
	CString m_strSizeOfOptionalHeader;
	CString m_strMagic;
	CString m_strNumberOfRvaAndSizes;
	afx_msg void OnBnClickedBtnsectionheader();
};
