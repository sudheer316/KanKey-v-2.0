////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////AUTHOR : Sudheer HS	sudheer316@gmail.com////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////DATE : 6-apr-2006							////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
////////////////COMPANY : Maruthi Software Developers.,HASSAN - 573201 ,KARANATAKA, INDIA     ////////////////////////////////////////////////////////////////
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

/*
*
*Modified Added New chars pha ph with dots
*Date 11/03/2009 1:44 AM
*Author Sudheer HS 
*/

#if !defined(AFX_SHARAVATHIHELP_H__9B0BEC30_BACD_479F_9D07_1B1C297E81EE__INCLUDED_)
#define AFX_SHARAVATHIHELP_H__9B0BEC30_BACD_479F_9D07_1B1C297E81EE__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000
// SharavathiHelp.h : header file
//

/////////////////////////////////////////////////////////////////////////////
// SharavathiHelp dialog

class SharavathiHelp : public CDialog
{
// Construction
public:
	SharavathiHelp(CWnd* pParent = NULL);   // standard constructor

// Dialog Data
	//{{AFX_DATA(SharavathiHelp)
	enum { IDD = IDD_SHARAVATHI_HELP };
		// NOTE: the ClassWizard will add data members here
	//}}AFX_DATA


// Overrides
	// ClassWizard generated virtual function overrides
	//{{AFX_VIRTUAL(SharavathiHelp)
	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	//}}AFX_VIRTUAL

// Implementation
protected:

	// Generated message map functions
	//{{AFX_MSG(SharavathiHelp)
		// NOTE: the ClassWizard will add member functions here
	//}}AFX_MSG
	DECLARE_MESSAGE_MAP()
};

//{{AFX_INSERT_LOCATION}}
// Microsoft Visual C++ will insert additional declarations immediately before the previous line.

#endif // !defined(AFX_SHARAVATHIHELP_H__9B0BEC30_BACD_479F_9D07_1B1C297E81EE__INCLUDED_)