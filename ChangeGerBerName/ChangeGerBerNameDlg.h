
// ChangeGerBerNameDlg.h: 头文件
//

#pragma once

#pragma warning(disable:4477)

// CChangeNameDlg 对话框
class CChangeNameDlg : public CDialogEx
{
// 构造
public:
	CChangeNameDlg(CWnd* pParent = nullptr);	// 标准构造函数

// 对话框数据
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_MAIN_DLG };
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

private: // 控件型关联变量
	CEdit m_cPath;
	CButton m_cBrower;

	afx_msg void OnBnClickedOk();
	afx_msg void OnBnClickedCancel();
	afx_msg void OnBnClickedBrowerBtn();
	afx_msg void OnBnClickedTarBtn();
	afx_msg void OnBnClickedZipBtn();

	CString GetNewName(CString postfix);
private:
	CString m_szPath; // 文件夹路径
	CString m_fileName;
	BOOL m_bOutput;

public:
	afx_msg void OnBnClickedOpenpath();
};
