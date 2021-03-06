
// Sen3DMetrologySolutionView.h : interface of the CSen3DMetrologySolutionView class
//

#pragma once


class CSen3DMetrologySolutionView : public CView
{
protected: // create from serialization only
	CSen3DMetrologySolutionView();
	DECLARE_DYNCREATE(CSen3DMetrologySolutionView)

// Attributes
public:
	CSen3DMetrologySolutionDoc* GetDocument() const;

// Operations
public:

// Overrides
public:
	virtual void OnDraw(CDC* pDC);  // overridden to draw this view
	virtual BOOL PreCreateWindow(CREATESTRUCT& cs);
protected:
	virtual BOOL OnPreparePrinting(CPrintInfo* pInfo);
	virtual void OnBeginPrinting(CDC* pDC, CPrintInfo* pInfo);
	virtual void OnEndPrinting(CDC* pDC, CPrintInfo* pInfo);

// Implementation
public:
	virtual ~CSen3DMetrologySolutionView();
#ifdef _DEBUG
	virtual void AssertValid() const;
	virtual void Dump(CDumpContext& dc) const;
#endif

protected:

// Generated message map functions
protected:
	afx_msg void OnFilePrintPreview();
	afx_msg void OnRButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnContextMenu(CWnd* pWnd, CPoint point);
	DECLARE_MESSAGE_MAP()
};

#ifndef _DEBUG  // debug version in Sen3DMetrologySolutionView.cpp
inline CSen3DMetrologySolutionDoc* CSen3DMetrologySolutionView::GetDocument() const
   { return reinterpret_cast<CSen3DMetrologySolutionDoc*>(m_pDocument); }
#endif

