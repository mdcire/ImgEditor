// FileIO.h : FileIO DLL ����ͷ�ļ�
//

#pragma once

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#include "resource.h"		// ������


// CFileIOApp
// �йش���ʵ�ֵ���Ϣ������� FileIO.cpp
//

class CFileIOApp : public CWinApp
{
public:
	CFileIOApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};
