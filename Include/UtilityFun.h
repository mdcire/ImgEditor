// UtilityFun.h : UtilityFun DLL ����ͷ�ļ�
//

#pragma once

#ifndef __UTILITTYFUN__
#define __UTILITTYFUN__

#ifndef __AFXWIN_H__
	#error "�ڰ������ļ�֮ǰ������stdafx.h�������� PCH �ļ�"
#endif

#define  DLL_EXPORT				extern "C" _declspec(dllexport)

#include "resource.h"		// ������


// CUtilityFunApp
// �йش���ʵ�ֵ���Ϣ������� UtilityFun.cpp
//

class CUtilityFunApp : public CWinApp
{
public:
	CUtilityFunApp();

// ��д
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

DLL_EXPORT int  ConvertUniToAnsi(wchar_t* puni, char* pAnsi);

#endif
