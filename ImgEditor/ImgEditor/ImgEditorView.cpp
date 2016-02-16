
// ImgEditorView.cpp : CImgEditorView 类的实现
//

#include "stdafx.h"
// SHARED_HANDLERS 可以在实现预览、缩略图和搜索筛选器句柄的
// ATL 项目中进行定义，并允许与该项目共享文档代码。
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
	// 标准打印命令
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CView::OnFilePrintPreview)
END_MESSAGE_MAP()

// CImgEditorView 构造/析构

CImgEditorView::CImgEditorView()
{
	// TODO: 在此处添加构造代码
}

CImgEditorView::~CImgEditorView()
{
}

BOOL CImgEditorView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: 在此处通过修改
	//  CREATESTRUCT cs 来修改窗口类或样式

/*
	Mat img = imread("C:\\Users\\Ming_Du\\Desktop\\Sample Images\\20150210_200038.jpg");  
	for( int i = 0; i < img.rows; ++i)
	{
		//获取第 i 行首像素指针
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

// CImgEditorView 绘制

void CImgEditorView::OnDraw(CDC* /*pDC*/)
{
	CImgEditorDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: 在此处为本机数据添加绘制代码 
}

// CImgEditorView 打印

BOOL CImgEditorView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// 默认准备
	return DoPreparePrinting(pInfo);
}

void CImgEditorView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加额外的打印前进行的初始化过程
}

void CImgEditorView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: 添加打印后进行的清理过程
}


// CImgEditorView 诊断

#ifdef _DEBUG
void CImgEditorView::AssertValid() const
{
	CView::AssertValid();
}

void CImgEditorView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CImgEditorDoc* CImgEditorView::GetDocument() const // 非调试版本是内联的
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CImgEditorDoc)));
	return (CImgEditorDoc*)m_pDocument;
}
#endif //_DEBUG

// CImgEditorView 消息处理程序
