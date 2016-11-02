// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SqlitePassErrorLogDialog.pas' rev: 6.00

#ifndef SqlitePassErrorLogDialogHPP
#define SqlitePassErrorLogDialogHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SqlitePassDbo.hpp>	// Pascal unit
#include <Buttons.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <StdCtrls.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Graphics.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Messages.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sqlitepasserrorlogdialog
{
//-- type declarations -------------------------------------------------------
class DELPHICLASS TSqlitePassErrorLogDlg;
class PASCALIMPLEMENTATION TSqlitePassErrorLogDlg : public Forms::TForm 
{
	typedef Forms::TForm inherited;
	
__published:
	Extctrls::TPanel* PanelIndexesToolBar;
	Extctrls::TPanel* PanelButtons;
	Buttons::TSpeedButton* SbOk;
	Buttons::TSpeedButton* SbClear;
	Buttons::TSpeedButton* SbSaveToFile;
	Stdctrls::TMemo* MemoErrorMsg;
	Dialogs::TSaveDialog* SaveDialog;
	Extctrls::TPanel* Panel1;
	Stdctrls::TLabel* LabelErrorLogTitle;
	Extctrls::TImage* ImageError;
	Extctrls::TPanel* PanelErrorLogTitle;
	Stdctrls::TLabel* LabelErrorDateTime;
	Extctrls::TImage* ImageDate;
	Buttons::TSpeedButton* SbPriorError;
	Buttons::TSpeedButton* SbNextError;
	Extctrls::TBevel* Bevel1;
	Extctrls::TImage* Image1;
	Stdctrls::TLabel* LabelErrorIndex;
	Extctrls::TImage* ImageErrorCode;
	Extctrls::TBevel* Bevel2;
	Stdctrls::TLabel* LabelErrorCode;
	Extctrls::TBevel* Bevel3;
	void __fastcall SbClearClick(System::TObject* Sender);
	void __fastcall SbOkClick(System::TObject* Sender);
	void __fastcall SbSaveToFileClick(System::TObject* Sender);
	void __fastcall SbPriorErrorClick(System::TObject* Sender);
	void __fastcall SbNextErrorClick(System::TObject* Sender);
	
private:
	Sqlitepassdbo::TSqlitePassDatabaseError* FErrorLog;
	void __fastcall ShowError(void);
	
public:
	__fastcall TSqlitePassErrorLogDlg(Sqlitepassdbo::TSqlitePassDatabaseError* ErrorLog);
	void __fastcall ShowLastError(void);
public:
	#pragma option push -w-inl
	/* TCustomForm.CreateNew */ inline __fastcall virtual TSqlitePassErrorLogDlg(Classes::TComponent* AOwner, int Dummy) : Forms::TForm(AOwner, Dummy) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TCustomForm.Destroy */ inline __fastcall virtual ~TSqlitePassErrorLogDlg(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TWinControl.CreateParented */ inline __fastcall TSqlitePassErrorLogDlg(HWND ParentWindow) : Forms::TForm(ParentWindow) { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE TSqlitePassErrorLogDlg* SqlitePassErrorLogDlg;

}	/* namespace Sqlitepasserrorlogdialog */
using namespace Sqlitepasserrorlogdialog;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SqlitePassErrorLogDialog
