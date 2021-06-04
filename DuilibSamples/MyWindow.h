#pragma once
#include "UIlib.h"
using namespace DuiLib;

class CMyWindow: public CWindowWnd, public INotifyUI
{
public:
	virtual LPCTSTR GetWindowClassName() const{ return "DuiSamples"; }
	virtual void OnFinalMessage(HWND hWnd) { delete this; }
private:
	virtual void Notify(TNotifyUI& msg);
	virtual LRESULT HandleMessage(UINT uMsg, WPARAM wParam, LPARAM lParam);

	LRESULT OnCreate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnClose(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnDestroy(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnSize(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnNcPaint(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnNcHitTest(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
	LRESULT OnNcActivate(UINT uMsg, WPARAM wParam, LPARAM lParam, BOOL& bHandled);
protected:
	/// <summary>
	/// ���ƹ�������������ƽ���͹�����Ϣ
	/// </summary>
	CPaintManagerUI m_PaintManager;

	/// <summary>
	/// ��Ӱ����
	/// </summary>
	CWndShadow m_WndShadow;
};

