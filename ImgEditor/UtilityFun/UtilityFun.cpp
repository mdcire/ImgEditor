// UtilityFun.cpp : ���� DLL �ĳ�ʼ�����̡�
//

#include "stdafx.h"
#include "UtilityFun.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

//
//TODO: ����� DLL ����� MFC DLL �Ƕ�̬���ӵģ�
//		��Ӵ� DLL �������κε���
//		MFC �ĺ������뽫 AFX_MANAGE_STATE ����ӵ�
//		�ú�������ǰ�档
//
//		����:
//
//		extern "C" BOOL PASCAL EXPORT ExportedFunction()
//		{
//			AFX_MANAGE_STATE(AfxGetStaticModuleState());
//			// �˴�Ϊ��ͨ������
//		}
//
//		�˺������κ� MFC ����
//		������ÿ��������ʮ����Ҫ������ζ��
//		��������Ϊ�����еĵ�һ�����
//		���֣������������ж������������
//		������Ϊ���ǵĹ��캯���������� MFC
//		DLL ���á�
//
//		�й�������ϸ��Ϣ��
//		����� MFC ����˵�� 33 �� 58��
//

// CUtilityFunApp

BEGIN_MESSAGE_MAP(CUtilityFunApp, CWinApp)
END_MESSAGE_MAP()


// CUtilityFunApp ����

CUtilityFunApp::CUtilityFunApp()
{
	// TODO: �ڴ˴���ӹ�����룬
	// ��������Ҫ�ĳ�ʼ�������� InitInstance ��
}


// Ψһ��һ�� CUtilityFunApp ����

CUtilityFunApp theApp;


// CUtilityFunApp ��ʼ��

BOOL CUtilityFunApp::InitInstance()
{
	CWinApp::InitInstance();

	return TRUE;
}

DLL_EXPORT int  ConvertUniToAnsi(wchar_t* puni, char* pAnsi)
{
	ASSERT(NULL != puni);
	ASSERT(NULL != pAnsi);
	int    iTextLen = WideCharToMultiByte(CP_ACP, 0, puni, -1, NULL, 0, NULL, NULL);
	WideCharToMultiByte(CP_ACP, 0, puni, -1, pAnsi, iTextLen, NULL, NULL );
	return TRUE;
}
