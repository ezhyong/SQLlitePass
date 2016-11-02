// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SqlitePassUtils.pas' rev: 6.00

#ifndef SqlitePassUtilsHPP
#define SqlitePassUtilsHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <DB.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SqlitePassErrorLang.hpp>	// Pascal unit
#include <SqlitePassConst.hpp>	// Pascal unit
#include <RTLConsts.hpp>	// Pascal unit
#include <Windows.hpp>	// Pascal unit
#include <Consts.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sqlitepassutils
{
//-- type declarations -------------------------------------------------------
typedef AnsiString UTF8AnsiString;

typedef AnsiString *PUTF8AnsiString;

typedef int SizeInt;

typedef unsigned SizeUInt;

typedef unsigned *PCardinal;

typedef Db::TDateTimeRec *PDateTimeRec;

typedef void * *PPointer;

typedef Word *PWordBool;

typedef char * *PPAnsiChar;

typedef char *PRecBuffer;

typedef WideString UTF16WideString;

typedef WideString *PUTF16WideString;

typedef char * *PPRecBuffer;

typedef void *PSqliteValue;

typedef void * *PPSqliteValue;

typedef Byte *PByteBool;

typedef char *TRecBufferList[134217727];

typedef char * *PRecBufferList;

typedef int TIntegerList[134217727];

typedef int *PIntegerList;

class DELPHICLASS TSqlitePassList;
class PASCALIMPLEMENTATION TSqlitePassList : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	void * operator[](int Index) { return Items[Index]; }
	
private:
	void * *FList;
	int FCount;
	int FCapacity;
	
protected:
	void * __fastcall Get(int Index);
	virtual void __fastcall Grow(void);
	void __fastcall Put(int Index, void * Item);
	void __fastcall SetCapacity(int NewCapacity);
	int __fastcall GetFCount(void);
	void __fastcall SetCount(int NewCount);
	void __fastcall Exchange(int Index1, int Index2);
	TSqlitePassList* __fastcall Expand(void);
	void * __fastcall First(void);
	int __fastcall IndexOf(void * Item);
	void __fastcall Insert(int Index, void * Item);
	void * __fastcall Last(void);
	void __fastcall Move(int CurIndex, int NewIndex);
	void __fastcall Pack(void);
	int __fastcall Remove(void * Item);
	__property int Capacity = {read=FCapacity, write=SetCapacity, nodefault};
	__property Classes::PPointerList List = {read=FList};
	
public:
	__fastcall virtual ~TSqlitePassList(void);
	int __fastcall Add(void * Item);
	void __fastcall Delete(int Index);
	DYNAMIC void __fastcall Clear(void);
	__property int Count = {read=FCount, write=SetCount, nodefault};
	__property void * Items[int Index] = {read=Get, write=Put/*, default*/};
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TSqlitePassList(void) : System::TObject() { }
	#pragma option pop
	
};


class DELPHICLASS TSqlitePassObjectList;
class PASCALIMPLEMENTATION TSqlitePassObjectList : public TSqlitePassList 
{
	typedef TSqlitePassList inherited;
	
public:
	System::TObject* operator[](int Index) { return Items[Index]; }
	
protected:
	System::TObject* __fastcall GetItem(int Index);
	void __fastcall SetItem(int Index, System::TObject* AObject);
	HIDESBASE int __fastcall IndexOf(System::TObject* AObject);
	HIDESBASE void __fastcall Insert(int Index, System::TObject* AObject);
	HIDESBASE System::TObject* __fastcall First(void);
	HIDESBASE System::TObject* __fastcall Last(void);
	__property System::TObject* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	
public:
	HIDESBASE int __fastcall Add(System::TObject* AObject);
	HIDESBASE int __fastcall Remove(System::TObject* AObject);
public:
	#pragma option push -w-inl
	/* TSqlitePassList.Destroy */ inline __fastcall virtual ~TSqlitePassObjectList(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TSqlitePassObjectList(void) : TSqlitePassList() { }
	#pragma option pop
	
};


struct TSqlitePassAnsiStringItem;
typedef TSqlitePassAnsiStringItem *PSqlitePassAnsiStringItem;

#pragma pack(push, 4)
struct TSqlitePassAnsiStringItem
{
	AnsiString FString;
} ;
#pragma pack(pop)

typedef TSqlitePassAnsiStringItem TSqlitePassAnsiStringItemList[134217728];

typedef TSqlitePassAnsiStringItem *PSqlitePassAnsiStringItemList;

class DELPHICLASS TSqlitePassAnsiStringList;
class PASCALIMPLEMENTATION TSqlitePassAnsiStringList : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	AnsiString operator[](int Index) { return Strings[Index]; }
	
private:
	TSqlitePassAnsiStringItem *FList;
	int FCount;
	int FCapacity;
	void __fastcall SetCapacity(int NewCapacity);
	
protected:
	AnsiString __fastcall Get(int Index);
	void __fastcall Put(int Index, const AnsiString S);
	
public:
	__fastcall virtual ~TSqlitePassAnsiStringList(void);
	void __fastcall Add(const AnsiString S);
	void __fastcall Clear(void);
	void __fastcall Delete(int Index);
	void __fastcall Grow(void);
	__property int Capacity = {read=FCapacity, write=SetCapacity, nodefault};
	__property int Count = {read=FCount, nodefault};
	__property AnsiString Strings[int Index] = {read=Get, write=Put/*, default*/};
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TSqlitePassAnsiStringList(void) : System::TObject() { }
	#pragma option pop
	
};


struct TSqlitePassWideStringItem;
typedef TSqlitePassWideStringItem *PSqlitePassWideStringItem;

#pragma pack(push, 4)
struct TSqlitePassWideStringItem
{
	WideString FWideString;
} ;
#pragma pack(pop)

typedef TSqlitePassWideStringItem TSqlitePassWideStringItemList[134217728];

typedef TSqlitePassWideStringItem *PSqlitePassWideStringItemList;

class DELPHICLASS TSqlitePassWideStringList;
class PASCALIMPLEMENTATION TSqlitePassWideStringList : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	WideString operator[](int Index) { return Strings[Index]; }
	
private:
	TSqlitePassWideStringItem *FList;
	int FCount;
	int FCapacity;
	void __fastcall SetCapacity(int NewCapacity);
	
protected:
	WideString __fastcall Get(int Index);
	void __fastcall Put(int Index, const WideString S);
	
public:
	__fastcall virtual ~TSqlitePassWideStringList(void);
	void __fastcall Add(const WideString S);
	void __fastcall Clear(void);
	void __fastcall Delete(int Index);
	void __fastcall Grow(void);
	__property int Capacity = {read=FCapacity, write=SetCapacity, nodefault};
	__property int Count = {read=FCount, nodefault};
	__property WideString Strings[int Index] = {read=Get, write=Put/*, default*/};
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TSqlitePassWideStringList(void) : System::TObject() { }
	#pragma option pop
	
};


class DELPHICLASS TSqlitePassBitArray;
class PASCALIMPLEMENTATION TSqlitePassBitArray : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	bool FIsZeroBased;
	AnsiString FItems;
	Classes::TStringList* FInternalItems;
	Word FMaxSize;
	Word FOffset;
	unsigned FValue;
	bool FUpdating;
	void __fastcall CheckFirstItem(void);
	unsigned __fastcall GetFValue(void);
	void __fastcall SetFValue(unsigned Value);
	void __fastcall SetFIsZeroBased(const bool Value);
	void __fastcall SetFItems(const AnsiString Value);
	void __fastcall Reset(void);
	
public:
	__fastcall TSqlitePassBitArray(void);
	__fastcall virtual ~TSqlitePassBitArray(void);
	bool __fastcall IsTrue(const AnsiString Item);
	void __fastcall SetItemValue(const AnsiString Item, const bool Value);
	__property bool IsZeroBased = {read=FIsZeroBased, write=SetFIsZeroBased, nodefault};
	__property AnsiString Items = {read=FItems, write=SetFItems};
	__property unsigned Value = {read=GetFValue, write=SetFValue, nodefault};
};


class DELPHICLASS TSqlitePassIntegerList;
class PASCALIMPLEMENTATION TSqlitePassIntegerList : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	int operator[](int Index) { return Items[Index]; }
	
private:
	int *FList;
	int FCount;
	int FCapacity;
	
protected:
	int __fastcall Get(int Index);
	virtual void __fastcall Grow(void);
	void __fastcall Put(int Index, int Item);
	void __fastcall SetCapacity(int NewCapacity);
	int __fastcall GetFCount(void);
	void __fastcall SetCount(int NewCount);
	__property int Capacity = {read=FCapacity, write=SetCapacity, nodefault};
	__property PIntegerList List = {read=FList};
	
public:
	int __fastcall Add(int Item);
	DYNAMIC void __fastcall Clear(void);
	void __fastcall Delete(int Index);
	__fastcall virtual ~TSqlitePassIntegerList(void);
	__property int Count = {read=FCount, write=SetCount, nodefault};
	__property int Items[int Index] = {read=Get, write=Put/*, default*/};
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TSqlitePassIntegerList(void) : System::TObject() { }
	#pragma option pop
	
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE void __fastcall OutputDebugString(AnsiString S);
extern PACKAGE AnsiString __fastcall FieldTypeToString(Db::TFieldType FieldType);
extern PACKAGE Db::TFieldType __fastcall StringToFieldType(AnsiString FieldTypeName);
extern PACKAGE AnsiString __fastcall BoolAsString(bool Value);
extern PACKAGE wchar_t * __fastcall WStrCopy(wchar_t * Dest, const wchar_t * Source);
extern PACKAGE int __fastcall RPos(const AnsiString aSubStr, const AnsiString aString, const int aStartPos)/* overload */;
extern PACKAGE AnsiString __fastcall UTF8ToAnsi(const char * S);
extern PACKAGE AnsiString __fastcall AnsiToUTF8(const AnsiString S);
extern PACKAGE AnsiString __fastcall UTF8Encode(const WideString s);
extern PACKAGE WideString __fastcall UTF8Decode(const AnsiString s);
extern PACKAGE wchar_t * __fastcall _WStrCopy(wchar_t * Dest, const wchar_t * Source);
extern PACKAGE WideString __fastcall AnsiStringToUTF16WideString(const AnsiString Str);
extern PACKAGE AnsiString __fastcall UTF16WideStringToAnsiString(const WideString WStr);
extern PACKAGE AnsiString __fastcall _UTF8ToAnsi(const AnsiString Source);
extern PACKAGE AnsiString __fastcall _AnsiToUTF8(const AnsiString Source);
extern PACKAGE AnsiString __fastcall _UTF8Encode(const WideString s);
extern PACKAGE int __fastcall _UnicodeToUtf8(char * Dest, wchar_t * Source, int MaxBytes)/* overload */;
extern PACKAGE unsigned __fastcall _UnicodeToUtf8(char * Dest, unsigned MaxDestBytes, wchar_t * Source, unsigned SourceChars)/* overload */;
extern PACKAGE WideString __fastcall _UTF8Decode(const AnsiString s);
extern PACKAGE int __fastcall _Utf8ToUnicode(wchar_t * Dest, char * Source, int MaxChars)/* overload */;
extern PACKAGE unsigned __fastcall _Utf8ToUnicode(wchar_t * Dest, unsigned MaxDestChars, char * Source, unsigned SourceBytes)/* overload */;
extern PACKAGE void __fastcall FreeMemAndNil(void *ptr, int size = 0xffffffff);

}	/* namespace Sqlitepassutils */
using namespace Sqlitepassutils;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SqlitePassUtils
