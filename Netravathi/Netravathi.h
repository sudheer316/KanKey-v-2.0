// Netravathi.h : main header file for the Netravathi DLL
//

#if !defined(AFX_Netravathi_H__DF869229_FFA7_11DA_B107_0050BA32743F__INCLUDED_)
#define AFX_Netravathi_H__DF869229_FFA7_11DA_B107_0050BA32743F__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#ifndef __AFXWIN_H__
	#error include 'stdafx.h' before including this file for PCH
#endif

#include "resource.h"		// main symbols
////////////////// Netravathi.cpp : Defines the initialization routines for the DLL. ///////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////AUTHOR : Sudheer HS	sudheer316@gmail.com////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////DATE : 6-apr-2006							////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////COMPANY : Maruthi Softwares.,HASSAN - 573201 ,KARANATAKA, INDIA     ////////////////////////////////////////////////////////////////
////////////////Description : This processes key inputs and emulates kannada characters for the key pressed		////////////////////////////////////////////////////////////////
////////////////			 this reads the key pressed and then produces the required characters for kannada languagge		////////////////////////////////////////////////////////////////
////////////////Compiler Used : Microsoft Visual C++ 6.0////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////	////////////////////////////////////////////////////////////////	
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////  This has been done as a project for Hampi University ,Hampi,INDIA ////////////////////////////////////////////////////////////////
////////////////  this is part of the free software Kuvempu Kannada Thantramsha,launched by Hampi University ////////////////////////////////////////////////////////////////
////////////////  This code as is with out any kind of warranty ,Using or modifing the code or the library without ////////////////////////////////////////////////////////////////
////////////////  the written permission by the university is prohibited,Any such illegal activities is punishable offence as per ////////////////////////////////////////////////////////////////
////////////////  the copy rights ////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

/////////////////////////////////////////////////////////////////////////////
// CNetravathiApp
// See Netravathi.cpp for the implementation of this class
//
#define EXPORTED_DLL_FUNCTION \
	__declspec(dllexport)__stdcall


BOOL EXPORTED_DLL_FUNCTION InstallKeyboardHookNetravathiExpEXP(HWND hWnd);

LRESULT EXPORTED_DLL_FUNCTION SetKeyBoardNetravathi(int nCode,WPARAM wParam, LPARAM lParam);

BOOL __stdcall InstallKeyboardHookNetravathi();

BOOL __stdcall DeInstallKeyboardHookNetravathi();


class CNetravathiApp : public CWinApp
{
public:
	CNetravathiApp();

// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(CNetravathiApp)
	public:
	virtual BOOL InitInstance();
	virtual int ExitInstance();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	//}}AFX_VIRTUAL

	//{{AFX_MSG(CNetravathiApp)
		// NOTE - the ClassWizard will add and remove member functions here.
		//    DO NOT EDIT what you see in these blocks of generated code !
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};


/////////////////////////////////////////////////////////////////////////////

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_Netravathi_H__DF869229_FFA7_11DA_B107_0050BA32743F__INCLUDED_)