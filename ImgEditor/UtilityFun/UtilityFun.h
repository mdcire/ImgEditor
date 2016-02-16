// UtilityFun.h : UtilityFun DLL 的主头文件
//

#pragma once

#ifndef __UTILITTYFUN__
#define __UTILITTYFUN__

#ifndef __AFXWIN_H__
	#error "在包含此文件之前包含“stdafx.h”以生成 PCH 文件"
#endif

#define  DLL_EXPORT				extern "C" _declspec(dllexport)

#include "resource.h"		// 主符号


// CUtilityFunApp
// 有关此类实现的信息，请参阅 UtilityFun.cpp
//

class CUtilityFunApp : public CWinApp
{
public:
	CUtilityFunApp();

// 重写
public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

DLL_EXPORT int  ConvertUniToAnsi(wchar_t* puni, char* pAnsi);

#endif
