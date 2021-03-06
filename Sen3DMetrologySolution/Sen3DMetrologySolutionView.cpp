
// Sen3DMetrologySolutionView.cpp : implementation of the CSen3DMetrologySolutionView class
//

#include "stdafx.h"
// SHARED_HANDLERS can be defined in an ATL project implementing preview, thumbnail
// and search filter handlers and allows sharing of document code with that project.
#ifndef SHARED_HANDLERS
#include "Sen3DMetrologySolution.h"
#endif

#include "Sen3DMetrologySolutionDoc.h"
#include "Sen3DMetrologySolutionView.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CSen3DMetrologySolutionView

IMPLEMENT_DYNCREATE(CSen3DMetrologySolutionView, CView)

BEGIN_MESSAGE_MAP(CSen3DMetrologySolutionView, CView)
	// Standard printing commands
	ON_COMMAND(ID_FILE_PRINT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_DIRECT, &CView::OnFilePrint)
	ON_COMMAND(ID_FILE_PRINT_PREVIEW, &CSen3DMetrologySolutionView::OnFilePrintPreview)
	ON_WM_CONTEXTMENU()
	ON_WM_RBUTTONUP()
END_MESSAGE_MAP()

// CSen3DMetrologySolutionView construction/destruction

CSen3DMetrologySolutionView::CSen3DMetrologySolutionView()
{
	// TODO: add construction code here

}

CSen3DMetrologySolutionView::~CSen3DMetrologySolutionView()
{
}

BOOL CSen3DMetrologySolutionView::PreCreateWindow(CREATESTRUCT& cs)
{
	// TODO: Modify the Window class or styles here by modifying
	//  the CREATESTRUCT cs

	return CView::PreCreateWindow(cs);
}

// CSen3DMetrologySolutionView drawing

void CSen3DMetrologySolutionView::OnDraw(CDC* /*pDC*/)
{
	CSen3DMetrologySolutionDoc* pDoc = GetDocument();
	ASSERT_VALID(pDoc);
	if (!pDoc)
		return;

	// TODO: add draw code for native data here
}


// CSen3DMetrologySolutionView printing


void CSen3DMetrologySolutionView::OnFilePrintPreview()
{
#ifndef SHARED_HANDLERS
	AFXPrintPreview(this);
#endif
}

BOOL CSen3DMetrologySolutionView::OnPreparePrinting(CPrintInfo* pInfo)
{
	// default preparation
	return DoPreparePrinting(pInfo);
}

void CSen3DMetrologySolutionView::OnBeginPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add extra initialization before printing
}

void CSen3DMetrologySolutionView::OnEndPrinting(CDC* /*pDC*/, CPrintInfo* /*pInfo*/)
{
	// TODO: add cleanup after printing
}

void CSen3DMetrologySolutionView::OnRButtonUp(UINT /* nFlags */, CPoint point)
{
	ClientToScreen(&point);
	OnContextMenu(this, point);
}

void CSen3DMetrologySolutionView::OnContextMenu(CWnd* /* pWnd */, CPoint point)
{
#ifndef SHARED_HANDLERS
	theApp.GetContextMenuManager()->ShowPopupMenu(IDR_POPUP_EDIT, point.x, point.y, this, TRUE);
#endif
}


// CSen3DMetrologySolutionView diagnostics

#ifdef _DEBUG
void CSen3DMetrologySolutionView::AssertValid() const
{
	CView::AssertValid();
}

void CSen3DMetrologySolutionView::Dump(CDumpContext& dc) const
{
	CView::Dump(dc);
}

CSen3DMetrologySolutionDoc* CSen3DMetrologySolutionView::GetDocument() const // non-debug version is inline
{
	ASSERT(m_pDocument->IsKindOf(RUNTIME_CLASS(CSen3DMetrologySolutionDoc)));
	return (CSen3DMetrologySolutionDoc*)m_pDocument;
}
#endif //_DEBUG


// CSen3DMetrologySolutionView message handlers
