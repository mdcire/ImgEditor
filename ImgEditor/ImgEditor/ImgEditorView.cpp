
// ImgEditorView.cpp : CImgEditorView ���ʵ��
//

#include "stdafx.h"
// SHARED_HANDLERS ������ʵ��Ԥ��������ͼ������ɸѡ�������
// ATL ��Ŀ�н��ж��壬�����������Ŀ�����ĵ����롣
#ifndef SHARED_HANDLERS
#include "ImgEditor.h"
#endif

#include "ImgEditorDoc.h"
#include "ImgEditorView.h"


#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CImgEditorView

IMPLEMENT_DYNCREATE(CImgEditorView, CView)

BEGIN_MESSAGE_MAP(CImgEditorView, CView)
	// ��׼��ӡ����
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CImgEditorView ����/����

CImgEditorView::CImgEditorView()
{
	// TODO: �ڴ˴���ӹ������
}

CImgEditorView::~CImgEditorView()
{
}

BOOL CImgEditorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: �ڴ˴�ͨ���޸�
	//  CREATESTRUCT cs ���޸Ĵ��������ʽ

/*
	Mat img = imread("C:\\Users\\Ming_Du\\Desktop\\Sample Images\\20150210_200038.jpg");  
	for( int i = 0; i < img.rows; ++i)
	{
		//��ȡ�� i ��������ָ��
		Vec3b * p = img.ptr<Vec3b>(i);
		for( int j = 0; j < img.cols; ++j )
		{
			p[j][0] = i%255; //Blue
			p[j][1] = j%255; //Green
			p[j][2] = 0; //Red
		}
	}
	imshow("mypic", img);  
	waitKey(); 
*/

	return CView::PreCreateWindow(cs);
}

// CImgEditorView ����

void CImgEditorView::OnDraw(CDC* /*pDC*/)
{
	CImgEditorDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: �ڴ˴�Ϊ����������ӻ��ƴ��� 
}

// CImgEditorView ��ӡ

BOOL CImgEditorView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// Ĭ��׼��
	return DoPreparePrinting(pInfo);
}

void CImgEditorView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӷ���Ĵ�ӡǰ���еĳ�ʼ������
}

void CImgEditorView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: ��Ӵ�ӡ����е��������
}


// CImgEditorView ���

#ifdef _DEBUG
void CImgEditorView::AssertValid() const
{
	CView::AssertValid();
}

void CImgEditorView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CImgEditorDoc* CImgEditorView::GetDocument() const // �ǵ��԰汾��������
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImgEditorDoc)));
	return (CImgEditorDoc*)m_pDocument;
}
#endif //_DEBUG

// CImgEditorView ��Ϣ�������
