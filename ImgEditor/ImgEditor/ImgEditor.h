
// ImgEditor.h : ImgEditor Ӧ�ó������ͷ�ļ�
//
#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"       // ������


// CImgEditorApp:
// �йش����ʵ�֣������ ImgEditor.cpp
//

class CImgEditorApp : public CWinApp
{
public:
	CImgEditorApp();


// ��д
public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();

// ʵ��
	afx_msg void OnAppAbout();
	DECLARE_MESSAGE_MAP()
};

extern CImgEditorApp theApp;
