// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SqlitePassDbo.pas' rev: 6.00

#ifndef SqlitePassDboHPP
#define SqlitePassDboHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Windows.hpp>	// Pascal unit
#include <DBCommon.hpp>	// Pascal unit
#include <DBConsts.hpp>	// Pascal unit
#include <Variants.hpp>	// Pascal unit
#include <FMTBcd.hpp>	// Pascal unit
#include <SqlitePassUtils.hpp>	// Pascal unit
#include <SqlitePassApi_v3.hpp>	// Pascal unit
#include <SqlitePassErrorLang.hpp>	// Pascal unit
#include <SqlitePassConst.hpp>	// Pascal unit
#include <Math.hpp>	// Pascal unit
#include <ExtCtrls.hpp>	// Pascal unit
#include <Controls.hpp>	// Pascal unit
#include <Dialogs.hpp>	// Pascal unit
#include <Forms.hpp>	// Pascal unit
#include <DB.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

#undef SQLSections
//-- user supplied -----------------------------------------------------------

namespace Sqlitepassdbo
{
//-- type declarations -------------------------------------------------------
#pragma pack(push, 4)
struct TMidRecordBuffer
{
	bool FieldIsNull;
	char *FieldBuffer;
} ;
#pragma pack(pop)

typedef DynamicArray<TMidRecordBuffer >  TMidRecordBuffers;

typedef Shortint TSqlitePassVerboseLevel;

#pragma option push -b-
enum SqlitePassDbo__1 { aoRead, aoBind, aoInsert, aoUpdate, aoDelete };
#pragma option pop

typedef Set<SqlitePassDbo__1, aoRead, aoDelete>  TSqlitePassAvailableOperations;

#pragma option push -b-
enum TSqlitePassSQLChange { scSelect, scWhere, scGroupBy, scHaving, scOrderBy, scLimit, scProcess, scRefresh };
#pragma option pop

typedef Set<TSqlitePassSQLChange, scSelect, scRefresh>  TSqlitePassSQLChanges;

#pragma option push -b-
enum TSqlitePassDatabaseObjectTypes { dboAll, dboTableDefs, dboQueryDefs, dboIndexDefs, dboViews, dboTriggers };
#pragma option pop

#pragma option push -b-
enum TSqlitePassDatabaseType { dbtSqlitePass, dbtKexi, dbtSqliteAdmin, dbtSqlite4Fpc, dbtSqliteExpert, dbtUnknown };
#pragma option pop

#pragma option push -b-
enum SqlitePassDbo__2 { dbsInternalOpen, dbsRefreshingDefinitions };
#pragma option pop

typedef Set<SqlitePassDbo__2, dbsInternalOpen, dbsRefreshingDefinitions>  TSqlitePassDatabaseState;

#pragma option push -b-
enum TSqlitePassPostType { ptInsert, ptUpdate, ptDelete };
#pragma option pop

#pragma option push -b-
enum TSqlitePassQuoteStyle { qsDoubleQuote, qsBracket, qsGraveQuote, qsNone };
#pragma option pop

#pragma option push -b-
enum SqlitePassDbo__3 { fcSQLFilter, fcDirectFilters, fcLowerLimit, fcUpperLimit };
#pragma option pop

typedef Set<SqlitePassDbo__3, fcSQLFilter, fcUpperLimit>  TSqlitePassFilterChanges;

#pragma option push -b-
enum TSqlitePassFilterComparisonOperators { CmpUnknown, CmpEqual, CmpNotEqual, CmpGreater, CmpGreateOrEqual, CmpLesserOrEqual, CmpLesser, CmpNull, CmpNotNull };
#pragma option pop

#pragma option push -b-
enum TSqlitePassFilterLogicalOperators { opNone, opAnd, opOr };
#pragma option pop

#pragma option push -b-
enum TSqlitePassFilterMode { fmDirect, fmSQL, fmSQLDirect };
#pragma option pop

#pragma option push -b-
enum TSqlitePassSortMode { smDirect, smSQL };
#pragma option pop

#pragma option push -b-
enum TSqlitePassWriteMode { wmDirect, wmPostponed };
#pragma option pop

typedef int __fastcall (__closure *TSqlitePassExecCallBack)(int acolumns, Sqlitepassutils::PPAnsiChar aColumnValues, Sqlitepassutils::PPAnsiChar aColumnNames);

typedef TSqlitePassExecCallBack *PSqlitePassExecCallBack;

typedef int __cdecl (*TSqlitePassGetPragmaCallback)(void * UserData, int ColumnCount, Sqlitepassutils::PPointer ColumnValues, Sqlitepassutils::PPointer ColumnNames);

class DELPHICLASS TSqlitePassRecordset;
typedef void __fastcall (*TSqlitePassSqliteValueToValueBuffer)(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);

class DELPHICLASS TSqlitePassDatabase;
typedef void __fastcall (*TSqlitePassValueBufferToSqliteValue)(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);

typedef Shortint TSqlitePassRecordStateType;

typedef Shortint TSqlitePassRecordStateValue;

typedef Byte TSqlitePassRecordState;

typedef Byte *PSqlitePassRecordState;

#pragma option push -b-
enum TSqlitePassSQLTokenType { ttKeyword, ttIdentifier, ttDatabaseIdentifier, ttTableIdentifier, ttFieldIdentifier, ttFunctionIdentifier, ttStar, ttNumber, ttDateTime, ttSingleQuote, ttDoubleQuote, ttGraveQuote, ttHash, ttPercent, ttBraceOpen, ttBraceClose, ttSquareOpen, ttSquareClose, ttRoundOpen, ttRoundClose, ttWhitespace, ttComment, ttComma, ttColon, ttSemiColon, ttEqual, ttNotEqual, ttGreater, ttGreaterOrEqual, ttLesser, ttLesserOrEqual, ttNull, ttNotNull, ttPlus, ttMinus, ttAnd, ttOr, ttDot, ttSlash, ttSeparator, ttLF, ttCR, ttEOF, ttUnknown };
#pragma option pop

class DELPHICLASS TSqlitePassDatabaseVersionInfo;
class DELPHICLASS TSqlitePassDatabaseError;
class DELPHICLASS TSqlitePassDataset;
class DELPHICLASS TSqlitePassParams;
class DELPHICLASS TSqlitePassParam;
class PASCALIMPLEMENTATION TSqlitePassParams : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassParam* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassDataset* FDataset;
	bool FChanged;
	
protected:
	void __fastcall ClearAndFreeItems(void);
	HIDESBASE TSqlitePassParam* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassParam* Value);
	void __fastcall Prepare(void);
	
public:
	__fastcall TSqlitePassParams(TSqlitePassDataset* Owner);
	__fastcall virtual ~TSqlitePassParams(void);
	void __fastcall Assign(const TSqlitePassParams* Source);
	void __fastcall AssignValues(const TSqlitePassParams* Value);
	void __fastcall BindValues(void);
	void __fastcall UnBindValues(void);
	void __fastcall ClearParams(void);
	TSqlitePassParam* __fastcall CreateParam(const AnsiString ParamName, Db::TFieldType FieldType, const int ParamIndex = 0x0);
	TSqlitePassParam* __fastcall ParamByName(const AnsiString Value);
	TSqlitePassParam* __fastcall FindParam(const AnsiString Value);
	__property TSqlitePassParam* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


#pragma option push -b-
enum TSqlitePassDatasetType { dtTable, dtQuery, dtView, dtSQLSelect, dtSQLDirect, dtUnknown };
#pragma option pop

class DELPHICLASS TSqlitePassFieldFilters;
class DELPHICLASS TSqlitePassFieldFilter;
class DELPHICLASS TSqlitePassInMemoryIndex;
class DELPHICLASS TSqlitePassInMemoryIndexes;
class PASCALIMPLEMENTATION TSqlitePassInMemoryIndexes : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassInMemoryIndex* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassDataset* FDataset;
	void __fastcall ClearAndFreeItems(void);
	void __fastcall SetSelectedIndexes(void);
	
protected:
	HIDESBASE TSqlitePassInMemoryIndex* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassInMemoryIndex* Value);
	
public:
	__fastcall TSqlitePassInMemoryIndexes(TSqlitePassDataset* Dataset);
	__fastcall virtual ~TSqlitePassInMemoryIndexes(void);
	void __fastcall BuildIndexes(void);
	void __fastcall ClearIndexes(void);
	TSqlitePassInMemoryIndex* __fastcall IndexByField(const Db::TField* Value);
	TSqlitePassInMemoryIndex* __fastcall IndexByFieldName(const AnsiString Value);
	void __fastcall InitIndexes(void);
	TSqlitePassFieldFilter* __fastcall GetIndexedFilter(TSqlitePassFieldFilters* Filters);
	__property Count ;
	__property TSqlitePassInMemoryIndex* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};

class TSqlitePassRecordset;
typedef int __fastcall (*TSqlitePassCompareColumnValue)(const TSqlitePassRecordset* Recordset, const void * FieldBufferValue1, const void * FieldBufferValue2);

#pragma pack(push, 4)
struct TSqlitePassInMemoryIndexInfo
{
	Db::TField* Field;
	int FieldValueOffset;
	bool Ascending;
	TSqlitePassCompareColumnValue ValueComparator;
} ;
#pragma pack(pop)

class PASCALIMPLEMENTATION TSqlitePassInMemoryIndex : public System::TObject
{
	typedef System::TObject inherited;
	
private:
	TSqlitePassInMemoryIndexes* FIndexes;
	Db::TField* FField;
	bool FIndexed;
	DynamicArray<TSqlitePassInMemoryIndexInfo >  FIndexInfos;
	Classes::TList* FIndexedRecords;
	void __fastcall SetFIndexed(const bool Value);
	bool __fastcall IsReady(void);
	
public:
	__fastcall TSqlitePassInMemoryIndex(TSqlitePassInMemoryIndexes* Indexes, Db::TField* Field);
	__fastcall virtual ~TSqlitePassInMemoryIndex(void);
	void __fastcall BuildIndex(void);
	void __fastcall ClearIndex(void);
	__property Db::TField* Field = {read=FField};
	__property bool Indexed = {read=FIndexed, write=SetFIndexed, nodefault};
};
typedef DynamicArray<TSqlitePassInMemoryIndexInfo >  TSqlitePassInMemoryIndexInfos;

class DELPHICLASS TSqlitePassFieldFilterExp;
class PASCALIMPLEMENTATION TSqlitePassFieldFilter : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassFieldFilterExp* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassFieldFilters* FFieldFilters;
	Db::TField* FField;
	TSqlitePassInMemoryIndex* FInMemoryIndex;
	int FKeyFieldIndex;
	bool FCanGetValueFromRecordBuffer;
	bool FFiltered;
	void __fastcall SetKeyField(const Db::TField* KeyField);
	void __fastcall NotifyFilterChanged(void);
	bool __fastcall AcceptValue(const void * FieldValue);
	AnsiString __fastcall GetFilterText();
	bool __fastcall GetHasFilterExpression(void);
	void __fastcall ClearAndFreeItems(void);
	void __fastcall SetFFiltered(bool Value);
	
protected:
	HIDESBASE TSqlitePassFieldFilterExp* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassFieldFilterExp* Value);
	
public:
	__fastcall TSqlitePassFieldFilter(TSqlitePassFieldFilters* FieldFilters, Db::TField* Field);
	__fastcall virtual ~TSqlitePassFieldFilter(void);
	void __fastcall AddFilterExpression(TSqlitePassFilterLogicalOperators LogicalOperator, TSqlitePassFilterComparisonOperators ComparisonOperator, AnsiString FilterValue);
	void __fastcall ClearFilter(void);
	__property Count ;
	__property Db::TField* Field = {read=FField};
	__property AnsiString FilterText = {read=GetFilterText};
	__property bool Filtered = {read=FFiltered, write=SetFFiltered, nodefault};
	__property bool HasFilterExpression = {read=GetHasFilterExpression, nodefault};
	__property TSqlitePassFieldFilterExp* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


class PASCALIMPLEMENTATION TSqlitePassFieldFilters : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassFieldFilter* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassDataset* FDataset;
	Classes::TList* FActiveFilters;
	bool FCanDoBinaryScan;
	AnsiString FFilterText;
	TSqlitePassFieldFilter* FInMemoryIndexedFilter;
	Db::TGetResult FMoveState;
	Db::TLocateOptions FOptions;
	int FRangeStart;
	int FRangeStop;
	Sqlitepassutils::TSqlitePassIntegerList* FResultRecordsList;
	int FResultRecordsListCurrentRecordIndex;
	int FResultRecordsListCurrentIndex;
	int FResultRecordsMaxCount;
	bool FUpdating;
	Classes::TNotifyEvent FOnChange;
	void __fastcall NotifyFiltersChanged(void);
	void __fastcall ClearAndFreeItems(void);
	bool __fastcall GetFFiltered(void);
	void __fastcall LinearScanRecords(void);
	void __fastcall InitBinaryScan(void);
	void __fastcall BinaryScanRecords(void);
	bool __fastcall MoveToRecord(void);
	void __fastcall ResetResultRecords(void);
	
protected:
	HIDESBASE TSqlitePassFieldFilter* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassFieldFilter* Value);
	void __fastcall InitFilters(void);
	
public:
	__fastcall TSqlitePassFieldFilters(TSqlitePassDataset* Dataset, Classes::TNotifyEvent OnChange);
	__fastcall virtual ~TSqlitePassFieldFilters(void);
	bool __fastcall AcceptRecord(const char * RecordBuffer);
	void __fastcall Assign(const TSqlitePassFieldFilters* Source);
	void __fastcall InitActiveFilters(void);
	TSqlitePassFieldFilter* __fastcall FilterByField(const Db::TField* Value);
	TSqlitePassFieldFilter* __fastcall FilterByFieldName(const AnsiString Value);
	AnsiString __fastcall GetFilterText(bool FilteredOnly = false);
	void __fastcall ParseFilterText(const AnsiString Value)/* overload */;
	void __fastcall ParseFilterText(const AnsiString KeyFields, const Variant &KeyValues, Db::TLocateOptions FilterOptions)/* overload */;
	void __fastcall ScanRecords(void);
	HIDESBASE bool __fastcall First(void);
	bool __fastcall Next(void);
	bool __fastcall Prior(void);
	HIDESBASE bool __fastcall Last(void);
	void __fastcall EnableFilters(void);
	void __fastcall DisableFilters(void);
	void __fastcall ClearFilters(void);
	void __fastcall BeginUpdate(void);
	void __fastcall EndUpdate(void);
	__property Count ;
	__property bool Filtered = {read=GetFFiltered, nodefault};
	__property AnsiString FilterText = {read=FFilterText};
	__property TSqlitePassFieldFilter* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property Db::TGetResult MoveState = {read=FMoveState, nodefault};
	__property Db::TLocateOptions Options = {read=FOptions, write=FOptions, nodefault};
	__property Sqlitepassutils::TSqlitePassIntegerList* Results = {read=FResultRecordsList};
};


typedef int TSqlitePassRecordsCacheCapacity;

class DELPHICLASS TSqlitePassSelectStmt;
class DELPHICLASS TSqlitePassSQLStmt;
class DELPHICLASS TSqlitePassSQLSections;
class DELPHICLASS TSqlitePassSQLTokenizer;
class PASCALIMPLEMENTATION TSqlitePassSQLSections : public Classes::TStringList 
{
	typedef Classes::TStringList inherited;

public:
	AnsiString __fastcall GetSectionText(const AnsiString SectionName);
	void __fastcall SetSectionText(const AnsiString SectionName, const AnsiString Text);
	void __fastcall SetSectionTextFromTokenizer(const AnsiString SectionName, TSqlitePassSQLTokenizer* Tokenizer);
	void __fastcall ReplaceSectionText(const AnsiString SectionName, const AnsiString NewStmt);
	void __fastcall ReplaceSectionTextFromSQLSections(TSqlitePassSQLSections* SQLSections, const AnsiString SectionName);
	void __fastcall ClearSectionText(const AnsiString SectionName, const AnsiString NewStmt);
	void __fastcall SplitSQLStmtIntoSections(const AnsiString SQLStmt, const AnsiString * Keywords, const int Keywords_Size);
	AnsiString __fastcall GetSQLStmtFromSections();
public:
	#pragma option push -w-inl
	/* TStringList.Destroy */ inline __fastcall virtual ~TSqlitePassSQLSections(void) { }
	#pragma option pop
	
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TSqlitePassSQLSections(void) : Classes::TStringList() { }
	#pragma option pop
	
};


typedef DynamicArray<AnsiString >  SqlitePassDbo__66;

#pragma option push -b-
enum StmtType { stCreate, stCreateTable, stSelect, stInsert, stUpdate, stDelete, stUnknown };
#pragma option pop

class PASCALIMPLEMENTATION TSqlitePassSQLStmt : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TSqlitePassDatabase* FDatabase;
	AnsiString FOriginalSQLText;
	TSqlitePassSQLSections* FOriginalSQLSections;
	AnsiString FSQLText;
	bool FCanSplit;
	TSqlitePassSQLSections* FSQLSections;
	DynamicArray<AnsiString >  FStmtKeywords;
	TSqlitePassSQLTokenizer* FTokenizer;
	TSqlitePassAvailableOperations FAvailableOperations;
	void *FStmtHandle;
	AnsiString FStmtName;
	bool FAutoTransaction;
	StmtType __fastcall GetStmtType(void);
	AnsiString __fastcall GetFSQLText();
	void __fastcall SetFSQLText(AnsiString Value);
	AnsiString __fastcall NormalizeText(AnsiString Text);
	
public:
	__fastcall TSqlitePassSQLStmt(TSqlitePassDatabase* Database)/* overload */;
	__fastcall virtual ~TSqlitePassSQLStmt(void);
	virtual void __fastcall Prepare(void);
	void __fastcall UnPrepare(void);
	void __fastcall QuoteString(AnsiString &S);
	void __fastcall UnquoteString(AnsiString &S, bool All = true);
	void __fastcall RestoreOriginalStmt(void);
	__property TSqlitePassAvailableOperations AvailableOperations = {read=FAvailableOperations, nodefault};
	__property void * StmtHandle = {read=FStmtHandle};
	__property AnsiString StmtName = {read=FStmtName, write=FStmtName};
	__property TSqlitePassSQLSections* SQLSections = {read=FSQLSections, write=FSQLSections};
	__property AnsiString SQL = {read=GetFSQLText, write=SetFSQLText};
	__property AnsiString OriginalSQL = {read=FOriginalSQLText};
	__property TSqlitePassSQLSections* OriginalSQLSections = {read=FOriginalSQLSections};
	__property StmtType SQLType = {read=GetStmtType, nodefault};
	__property TSqlitePassSQLTokenizer* Tokenizer = {read=FTokenizer, write=FTokenizer};
	__property bool AutoTransaction = {read=FAutoTransaction, write=FAutoTransaction, nodefault};
};


class DELPHICLASS TSqlitePassSelectStmtTableDefs;
class DELPHICLASS TSqlitePassSelectStmtTableDef;
class PASCALIMPLEMENTATION TSqlitePassSelectStmtTableDefs : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassSelectStmtTableDef* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassSelectStmt* FSQLStmt;
	
protected:
	void __fastcall ClearAndFreeItems(void);
	HIDESBASE TSqlitePassSelectStmtTableDef* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassSelectStmtTableDef* Value);
	
public:
	__fastcall TSqlitePassSelectStmtTableDefs(TSqlitePassSelectStmt* Owner);
	__fastcall virtual ~TSqlitePassSelectStmtTableDefs(void);
	TSqlitePassSelectStmtTableDef* __fastcall FindTable(const AnsiString Value);
	__property Count ;
	__property TSqlitePassSelectStmtTableDef* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


class DELPHICLASS TSqlitePassSelectStmtFieldDefs;
class DELPHICLASS TSqlitePassSelectStmtFieldDef;
class DELPHICLASS TSqlitePassTableFieldDefs;
class PASCALIMPLEMENTATION TSqlitePassSelectStmtFieldDefs : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassSelectStmtFieldDef* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassSelectStmtTableDef* FTableDef;
	HIDESBASE TSqlitePassSelectStmtFieldDef* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassSelectStmtFieldDef* Value);
	void __fastcall ClearAndFreeItems(void);
	
public:
	__fastcall TSqlitePassSelectStmtFieldDefs(TSqlitePassSelectStmtTableDef* Owner);
	__fastcall virtual ~TSqlitePassSelectStmtFieldDefs(void);
	TSqlitePassSelectStmtFieldDef* __fastcall FieldDefByName(const AnsiString Value);
	TSqlitePassSelectStmtFieldDef* __fastcall FindFieldDef(const AnsiString Value);
	void __fastcall Assign(const TSqlitePassTableFieldDefs* Source);
	__property Count ;
	__property TSqlitePassSelectStmtFieldDef* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property TSqlitePassSelectStmtTableDef* TableDef = {read=FTableDef};
};


class PASCALIMPLEMENTATION TSqlitePassSelectStmt : public TSqlitePassSQLStmt 
{
	typedef TSqlitePassSQLStmt inherited;
	
private:
	TSqlitePassDataset* FDataset;
	AnsiString FPrimaryKeyStmt;
	int FPrimaryKeyCount;
	TSqlitePassSelectStmtTableDefs* FTableDefs;
	TSqlitePassSelectStmtFieldDefs* FFieldDefs;
	
protected:
	void __fastcall AddInternalPrimaryKeys(void);
	void __fastcall FillTableDefsFromDatabaseSchema(const AnsiString TableName, const AnsiString FieldName, const AnsiString OrgFieldName, int RecFieldIndex);
	void __fastcall FillTableDefsFromRecordsetSchema(int RecFieldIndex);
	void __fastcall PrepareBindValueDispacher(void);
	void __fastcall PrepareWritingSQLStmts(void);
	void __fastcall UnprepareWritingSQLStmts(void);
	
public:
	__fastcall TSqlitePassSelectStmt(TSqlitePassDataset* Dataset);
	__fastcall virtual ~TSqlitePassSelectStmt(void);
	void __fastcall BuildSchema(void);
	void __fastcall PrepareAsReadOnly(void);
	virtual void __fastcall Prepare(void);
	HIDESBASE void __fastcall UnPrepare(void);
	void __fastcall Post(const TSqlitePassPostType PostType, const char * RecordBuffer);
	__property TSqlitePassSelectStmtFieldDefs* FieldDefs = {read=FFieldDefs};
	__property TSqlitePassSelectStmtTableDefs* TableDefs = {read=FTableDefs};
};


class DELPHICLASS TSqlitePassDatasetVersionInfo;
class PASCALIMPLEMENTATION TSqlitePassDatasetVersionInfo : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	AnsiString FPackage;
	AnsiString FComponent;
	void __fastcall SetFComponent(const AnsiString Value);
	void __fastcall SetFPackage(const AnsiString Value);
	
__published:
	__fastcall TSqlitePassDatasetVersionInfo(void);
	__property AnsiString Component = {read=FComponent, write=SetFComponent};
	__property AnsiString Package = {read=FPackage, write=SetFPackage};
public:
	#pragma option push -w-inl
	/* TPersistent.Destroy */ inline __fastcall virtual ~TSqlitePassDatasetVersionInfo(void) { }
	#pragma option pop
	
};


class DELPHICLASS TSqlitePassDatasetIndexDefs;
class DELPHICLASS TSqlitePassIndex;
class PASCALIMPLEMENTATION TSqlitePassDatasetIndexDefs : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassIndex* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassDataset* FDataset;
	
protected:
	HIDESBASE TSqlitePassIndex* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassIndex* Value);
	
public:
	__fastcall TSqlitePassDatasetIndexDefs(TSqlitePassDataset* Owner);
	__fastcall virtual ~TSqlitePassDatasetIndexDefs(void);
	void __fastcall RefreshFromCache(void);
	__property TSqlitePassIndex* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property Count ;
};


typedef void __fastcall (__closure *TSqlitePassDatasetFilterRecordEvent)(Db::TDataSet* DataSet, bool &Accept);

class PASCALIMPLEMENTATION TSqlitePassDataset : public Db::TDataSet
{
	typedef Db::TDataSet inherited;
	
private:
	TSqlitePassRecordset* FRecordset;
	bool FParamCheck;
	TSqlitePassParams* FParams;
	AnsiString FDatasetName;
	AnsiString FDatasetFullName;
	TSqlitePassDatasetType FDatasetType;
	TSqlitePassDatabaseError* FDatasetError;
	TSqlitePassDatabase* FDatabase;
	bool FLocateSmartRefresh;
	TSqlitePassFieldFilters* FLocateFieldFilters;
	Classes::TList* FCalcFieldsList;
	bool FCalcDisplayedRecordsOnly;
	Classes::TList* FLookupFieldsList;
	TSqlitePassFieldFilters* FLookupFieldsKeyFieldFilters;
	bool FLookupFieldsDisplayedRecordsOnly;
	bool FLookUpCache;
	Classes::TList* FLookUpResultFields;
	bool FLookUpSmartRefresh;
	TSqlitePassFieldFilters* FLookupKeyFieldFilters;
	TSqlitePassFilterMode FFilterMode;
	TSqlitePassFilterChanges FFilterChanges;
	Db::TMasterDataLink* FMasterLink;
	AnsiString FMasterFields;
	Classes::TList* FDetailFields;
	bool FMasterAutoActivate;
	Db::TFieldNotifyEvent FOnMasterChanged;
	AnsiString FFilterSQLStmt;
	AnsiString FPreviousFilterSQLStmt;
	TSqlitePassFieldFilters* FFieldFilters;
	AnsiString FFilterDirectStmt;
	AnsiString FPreviousFilterDirectStmt;
	int FFilterRecordLowerLimit;
	int FFilterRecordUpperLimit;
	TSqlitePassRecordsCacheCapacity FRecordsCacheCapacity;
	bool FReadOnly;
	Classes::TStringList* FSQL;
	TSqlitePassSelectStmt* FSQLSelectStmt;
	TSqlitePassSQLChanges FSQLChanges;
	bool FSorted;
	AnsiString FSortedBy;
	DynamicArray<TSqlitePassInMemoryIndexInfo >  FSortedFields;
	TSqlitePassSortMode FSortMode;
	bool FInMemoryIndexed;
	AnsiString FInMemoryIndexedBy;
	TSqlitePassInMemoryIndexes* FInMemoryIndexes;
	TSqlitePassWriteMode FWriteMode;
	bool FInInternalOpen;
	bool FInInternalSetDatasetType;
	bool FDatabaseAutoActivate;
	TSqlitePassDatasetVersionInfo* FVersionInfo;
	TSqlitePassDatasetIndexDefs* FIndexDefs;
	TSqlitePassDatasetFilterRecordEvent FOnFilterRecord;
	bool FAutoTransaction;
	int __fastcall GetActiveRecord(void);
	void __fastcall ResetProperties(void);
	void __fastcall NotifySQLChanged(TSqlitePassSQLChange Value);
	void __fastcall SQLChanged(System::TObject* Sender);
	void __fastcall ProcessSQLText(void);
	AnsiString __fastcall GetUniqueFieldName(TSqlitePassSelectStmtFieldDef* FieldDef);
	void __fastcall SetFDatasetType(void);
	void __fastcall SetFSQL(const Classes::TStringList* Value);
	TSqlitePassDatabase* __fastcall GetFDatabase(void);
	void __fastcall SetFDatabase(TSqlitePassDatabase* Value);
	void __fastcall SetFDatasetName(const AnsiString Value);
	void __fastcall SetFReadOnly(const bool Value);
	bool __fastcall GetFReadOnly(void);
	void __fastcall SetFFilterRecordLowerLimit(const int Value);
	void __fastcall SetFFilterRecordUpperLimit(const int Value);
	void __fastcall SetFSortedBy(const AnsiString Value);
	void __fastcall SetFSorted(const bool Value);
	void __fastcall SetFInMemoryIndexedBy(const AnsiString Value);
	void __fastcall SetFInMemoryIndexed(const bool Value);
	void __fastcall SetFWriteMode(const TSqlitePassWriteMode Value);
	void __fastcall SetFPrepared(const bool Value);
	bool __fastcall GetFPrepared(void);
	bool __fastcall CheckCanOpen(TSqlitePassVerboseLevel VerboseLevel = (TSqlitePassVerboseLevel)(0x3));
	void __fastcall MapFieldsToMemoryFieldBuffers(void);
	void __fastcall GetSortedFields(const AnsiString SortedByStmt, TSqlitePassInMemoryIndexInfos &SortedFieldsArray);
	TSqlitePassCompareColumnValue __fastcall GetValueComparator(Db::TFieldType Datatype, const bool Ascending);
	void __fastcall SortRecords(void);
	void __fastcall SetFSortMode(const TSqlitePassSortMode Value);
	void __fastcall SetFCalcDisplayedRecordsOnly(const bool Value);
	void __fastcall FillCalcFields(const int RecordIndexStart, const int RecordIndexStop);
	void __fastcall OnFieldFiltersChange(System::TObject* Sender);
	void __fastcall CheckRefreshFilteredRecords(void);
	Db::TDataSource* __fastcall GetMasterDataSource(void);
	void __fastcall SetMasterDataSource(Db::TDataSource* Value);
	void __fastcall MasterChanged(System::TObject* Sender);
	void __fastcall MasterDisabled(System::TObject* Sender);
	AnsiString __fastcall GetMasterFields();
	void __fastcall SetMasterFields(const AnsiString Value);
	void __fastcall ProcessMasterDetailFields(void);
	void __fastcall ReadParams(Classes::TReader* Reader);
	void __fastcall WriteParams(Classes::TWriter* Writer);
	bool __fastcall LocateRecords(void);
	Db::TGetResult __fastcall GetLocateMoveState(void);
	void __fastcall InitFieldLookupKeyFieldFilter(const Db::TField* Field);
	void __fastcall SetFLookupFieldsDisplayedRecordsOnly(const bool Value);
	char * __fastcall GetLookupFieldBuffer(const Db::TField* Field, const int LookupFieldIndex);
	void __fastcall FillLookupFields(const int RecordIndexStart, const int RecordIndexStop);
	Db::TGetResult __fastcall GetLookUpMoveState(void);
	Variant __fastcall GetLookUpResultValues(const bool LookupOk);
	void __fastcall LookUpRecords(void);
	void __fastcall ClearLookup(void);
	void __fastcall RefreshLookup(void);
	void __fastcall ActivateLookUpCache(void);
	void __fastcall SetFLookUpCache(const bool Value);
	void __fastcall SetAutoTransaction(const bool Value);
	
protected:
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	virtual TMetaClass* __fastcall GetFieldClass(Db::TFieldType FieldType);
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	virtual char * __fastcall AllocRecordBuffer(void);
	virtual Db::TGetResult __fastcall GetRecord(char * Buffer, Db::TGetMode GetMode, bool DoCheck);
	virtual Word __fastcall GetRecordSize(void);
	virtual bool __fastcall IsCursorOpen(void);
	virtual void __fastcall ClearCalcFields(char * Buffer);
	virtual void __fastcall FreeRecordBuffer(char * &Buffer);
	virtual void __fastcall InternalOpen(void);
	virtual void __fastcall InternalClose(void);
	virtual void __fastcall InternalInitFieldDefs(void);
	void __fastcall InternalClearFieldDefs(void);
	void __fastcall InternalInitIndexDefs(void);
	virtual void __fastcall InternalInitRecord(char * Buffer);
	virtual void __fastcall InternalRefresh(void);
	void __fastcall UpdateInternalFieldsInfos(void);
	virtual void __fastcall UpdateIndexDefs(void);
	virtual bool __fastcall GetCanModify(void);
	void __fastcall RefreshActive(void);
	virtual void __fastcall InternalAddRecord(void * Buffer, bool Append);
	virtual void __fastcall InternalCancel(void);
	virtual void __fastcall InternalDelete(void);
	virtual void __fastcall InternalEdit(void);
	virtual void __fastcall InternalFirst(void);
	virtual void __fastcall InternalInsert(void);
	virtual void __fastcall InternalLast(void);
	virtual void __fastcall InternalPost(void);
	virtual void __fastcall InternalSetToRecord(char * Buffer);
	virtual void __fastcall InternalGotoBookmark(void * ABookmark);
	virtual Db::TBookmarkFlag __fastcall GetBookmarkFlag(char * Buffer);
	virtual void __fastcall SetBookmarkFlag(char * Buffer, Db::TBookmarkFlag Value);
	virtual void __fastcall GetBookmarkData(char * Buffer, void * Data);
	virtual void __fastcall SetBookmarkData(char * Buffer, void * Data);
	void __fastcall RefreshFilteredRecords(void);
	virtual bool __fastcall FindRecord(bool Restart, bool GoForward);
	virtual void __fastcall DoOnNewRecord(void);
	virtual void __fastcall SetFiltered(bool Value);
	virtual void __fastcall SetFilterOptions(Db::TFilterOptions Value);
	virtual void __fastcall SetFilterText(const AnsiString Value);
	void __fastcall ProcessFilterText(void);
	virtual void __fastcall InternalHandleException(void);
	virtual int __fastcall GetRecordCount(void);
	virtual int __fastcall GetRecNo(void);
	virtual void __fastcall SetRecNo(int Value);
	void __fastcall AllocateBLOBPointers(char * Buffer);
	void __fastcall FreeBlobPointers(char * Buffer);
	void __fastcall FreeRecordPointers(char * Buffer);
	
public:
	__fastcall virtual TSqlitePassDataset(Classes::TComponent* AOwner);
	__fastcall virtual ~TSqlitePassDataset(void);
	virtual bool __fastcall BookmarkValid(void * Bookmark);
	virtual int __fastcall CompareBookmarks(void * Bookmark1, void * Bookmark2);
	virtual bool __fastcall GetFieldData(Db::TField* Field, void * Buffer)/* overload */;
	virtual void __fastcall SetFieldData(Db::TField* Field, void * Buffer)/* overload */;
	HIDESBASE void __fastcall GetFieldList(Classes::TList* List, const AnsiString FieldNames);
	HIDESBASE void __fastcall Refresh(void);
	void __fastcall ApplyChanges(void);
	void __fastcall EmptyTable(void);
	__property TSqlitePassInMemoryIndexes* Indexes = {read=FInMemoryIndexes, write=FInMemoryIndexes};
	__property TSqlitePassFieldFilters* Filters = {read=FFieldFilters, write=FFieldFilters};
	virtual bool __fastcall Locate(const AnsiString KeyFields, const Variant &KeyValues, Db::TLocateOptions Options)/* overload */;
	HIDESBASE bool __fastcall Locate(const AnsiString LocateStmt, Db::TLocateOptions Options)/* overload */;
	void __fastcall RefreshLocate(void);
	__property TSqlitePassFieldFilters* LocateFilters = {read=FLocateFieldFilters, write=FLocateFieldFilters};
	__property Db::TGetResult LocateMoveState = {read=GetLocateMoveState, nodefault};
	bool __fastcall LocateFirst(void);
	bool __fastcall LocateNext(void);
	bool __fastcall LocatePrior(void);
	bool __fastcall LocateLast(void);
	virtual Variant __fastcall Lookup(const AnsiString KeyFields, const Variant &KeyValues, const AnsiString ResultFields);
	Variant __fastcall LookupEx(const AnsiString KeyFields, const Variant &KeyValues, const AnsiString ResultFields, const int LookUpResultMaxRecordCount = 0x0)/* overload */;
	Variant __fastcall LookupEx(const AnsiString LookupStmt, const AnsiString ResultFields, const int LookUpResultMaxRecordCount = 0x0)/* overload */;
	__property TSqlitePassFieldFilters* LookupFilters = {read=FLookupKeyFieldFilters, write=FLookupKeyFieldFilters};
	__property Db::TGetResult LookupMoveState = {read=GetLookUpMoveState, nodefault};
	bool __fastcall LookupFirst(Variant &LookupResult);
	bool __fastcall LookupNext(Variant &LookupResult);
	bool __fastcall LookupPrior(Variant &LookupResult);
	bool __fastcall LookUpLast(Variant &LookupResult);
	virtual Classes::TStream* __fastcall CreateBlobStream(Db::TField* Field, Db::TBlobStreamMode Mode);
	virtual void __fastcall CloseBlob(Db::TField* Field);
	void __fastcall Index(void);
	void __fastcall Sort(void);
	void __fastcall UpdateParamsList(void);
	virtual void __fastcall GetDetailLinkFields(Classes::TList* MasterFields, Classes::TList* DetailFields);
	void __fastcall Prepare(void);
	void __fastcall UnPrepare(void);
	void __fastcall ExecSQL(void);
	__property TSqlitePassDatasetType DatasetType = {read=FDatasetType, nodefault};
	__property TSqlitePassSortMode SortMode = {read=FSortMode, write=SetFSortMode, nodefault};
	__property bool Prepared = {read=GetFPrepared, write=SetFPrepared, nodefault};
	__property TSqlitePassSelectStmt* SQLSelectStmt = {read=FSQLSelectStmt};
	__property bool AutoTransaction = {read=FAutoTransaction, write=SetAutoTransaction, nodefault};
	
__published:
	__property bool CalcDisplayedRecordsOnly = {read=FCalcDisplayedRecordsOnly, write=SetFCalcDisplayedRecordsOnly, nodefault};
	__property TSqlitePassDatabase* Database = {read=GetFDatabase, write=SetFDatabase};
	__property AnsiString MasterFields = {read=GetMasterFields, write=SetMasterFields};
	__property Db::TDataSource* MasterSource = {read=GetMasterDataSource, write=SetMasterDataSource};
	__property bool MasterSourceAutoActivate = {read=FMasterAutoActivate, write=FMasterAutoActivate, nodefault};
	__property AnsiString DatasetName = {read=FDatasetName, write=SetFDatasetName};
	__property TSqlitePassFilterMode FilterMode = {read=FFilterMode, write=FFilterMode, nodefault};
	__property int FilterRecordLowerLimit = {read=FFilterRecordLowerLimit, write=SetFFilterRecordLowerLimit, nodefault};
	__property int FilterRecordUpperLimit = {read=FFilterRecordUpperLimit, write=SetFFilterRecordUpperLimit, nodefault};
	__property bool Indexed = {read=FInMemoryIndexed, write=SetFInMemoryIndexed, nodefault};
	__property AnsiString IndexedBy = {read=FInMemoryIndexedBy, write=SetFInMemoryIndexedBy};
	__property bool LocateSmartRefresh = {read=FLocateSmartRefresh, write=FLocateSmartRefresh, nodefault};
	__property bool LookUpCache = {read=FLookUpCache, write=SetFLookUpCache, nodefault};
	__property bool LookUpDisplayedRecordsOnly = {read=FLookupFieldsDisplayedRecordsOnly, write=SetFLookupFieldsDisplayedRecordsOnly, nodefault};
	__property bool LookUpSmartRefresh = {read=FLookUpSmartRefresh, write=FLookUpSmartRefresh, nodefault};
	__property Classes::TStringList* SQL = {read=FSQL, write=SetFSQL};
	__property bool Sorted = {read=FSorted, write=SetFSorted, nodefault};
	__property AnsiString SortedBy = {read=FSortedBy, write=SetFSortedBy};
	__property TSqlitePassRecordsCacheCapacity RecordsCacheCapacity = {read=FRecordsCacheCapacity, write=FRecordsCacheCapacity, nodefault};
	__property TSqlitePassParams* Params = {read=FParams, write=FParams};
	__property TSqlitePassDatasetIndexDefs* IndexDefs = {read=FIndexDefs, write=FIndexDefs};
	__property bool ReadOnly = {read=GetFReadOnly, write=SetFReadOnly, default=0};
	__property bool DatabaseAutoActivate = {read=FDatabaseAutoActivate, write=FDatabaseAutoActivate, nodefault};
	__property TSqlitePassDatasetVersionInfo* VersionInfo = {read=FVersionInfo, write=FVersionInfo};
	__property bool ParamCheck = {read=FParamCheck, write=FParamCheck, nodefault};
	__property TSqlitePassWriteMode WriteMode = {read=FWriteMode, write=SetFWriteMode, nodefault};
	__property Db::TFieldNotifyEvent OnMasterChanged = {read=FOnMasterChanged, write=FOnMasterChanged};
	__property TSqlitePassDatasetFilterRecordEvent OnFilterRecord = {read=FOnFilterRecord, write=FOnFilterRecord};
	__property BeforeOpen ;
	__property AfterOpen ;
	__property BeforeClose ;
	__property AfterClose ;
	__property BeforeInsert ;
	__property AfterInsert ;
	__property BeforeEdit ;
	__property AfterEdit ;
	__property BeforePost ;
	__property AfterPost ;
	__property BeforeCancel ;
	__property AfterCancel ;
	__property BeforeDelete ;
	__property AfterDelete ;
	__property BeforeScroll ;
	__property AfterScroll ;
	__property OnCalcFields ;
	__property OnDeleteError ;
	__property OnEditError ;
	__property OnNewRecord ;
	__property OnPostError ;
	__property AutoCalcFields  = {default=1};
	__property Active  = {default=0};
	__property Filter ;
	__property Filtered  = {default=0};
	__property FilterOptions  = {default=0};
	
/* Hoisted overloads: */
	
public:
	inline bool __fastcall  GetFieldData(int FieldNo, void * Buffer){ return TDataSet::GetFieldData(FieldNo, Buffer); }
	inline bool __fastcall  GetFieldData(Db::TField* Field, void * Buffer, bool NativeFormat){ return TDataSet::GetFieldData(Field, Buffer, NativeFormat); }
	
protected:
	inline void __fastcall  SetFieldData(Db::TField* Field, void * Buffer, bool NativeFormat){ TDataSet::SetFieldData(Field, Buffer, NativeFormat); }
	
};


class DELPHICLASS TSqlitePassDatabaseErrorItem;
class PASCALIMPLEMENTATION TSqlitePassDatabaseErrorItem : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	int Code;
	System::TDateTime DateTime;
	int Index;
	AnsiString Message;
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TSqlitePassDatabaseErrorItem(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TSqlitePassDatabaseErrorItem(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TSqlitePassDatabaseError : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TSqlitePassDatabase* FDatabase;
	TSqlitePassDataset* FDataset;
	int FCurrentErrorIndex;
	TSqlitePassDatabaseErrorItem* FCurrentError;
	Classes::TList* FErrorList;
	int FTrackerCount;
	int FTrackerErrorCount;
	void __fastcall ClearAndFreeItems(void);
	bool __fastcall GetError(void);
	void __fastcall LogError(AnsiString Msg, const System::TVarRec * Args, const int Args_Size, const int ErrorCode = 0xffffffff, System::TObject* Sender = (System::TObject*)(0x0));
	
public:
	__fastcall TSqlitePassDatabaseError(TSqlitePassDatabase* Database)/* overload */;
	__fastcall TSqlitePassDatabaseError(TSqlitePassDataset* Dataset)/* overload */;
	__fastcall virtual ~TSqlitePassDatabaseError(void);
	void __fastcall Clear(void);
	bool __fastcall GetFirstError(void);
	bool __fastcall GetPriorError(void);
	bool __fastcall GetNextError(void);
	bool __fastcall GetLastError(void);
	virtual void __fastcall RaiseException(const AnsiString Msg, const int ErrorCode = 0xffffffff, Classes::TComponent* Component = (Classes::TComponent*)(0x0), TSqlitePassVerboseLevel VerboseLevel = (TSqlitePassVerboseLevel)(0x3));
	virtual void __fastcall RaiseExceptionFmt(const AnsiString Msg, const System::TVarRec * Args, const int Args_Size, const int ErrorCode = 0xffffffff, Classes::TComponent* Component = (Classes::TComponent*)(0x0), TSqlitePassVerboseLevel VerboseLevel = (TSqlitePassVerboseLevel)(0x3));
	void __fastcall SaveToFile(AnsiString FileName);
	virtual Word __fastcall ShowError(const AnsiString Msg, Dialogs::TMsgDlgType DlgType = (Dialogs::TMsgDlgType)(0x0), Dialogs::TMsgDlgButtons DlgButtons = (System::Set<Dialogs::TMsgDlgBtn, mbYes, mbHelp> () << Dialogs::TMsgDlgBtn(2) ), int HelpCtx = 0x0);
	void __fastcall ShowErrorDialog(AnsiString ErrorMsg = "");
	void __fastcall TrackerStart(void);
	void __fastcall TrackerStop(void);
	__property TSqlitePassDatabaseErrorItem* CurrentError = {read=FCurrentError};
	__property int CurrentErrorIndex = {read=FCurrentErrorIndex, nodefault};
	__property TSqlitePassDatabase* Database = {read=FDatabase};
	__property TSqlitePassDataset* Dataset = {read=FDataset};
	__property Classes::TList* ErrorList = {read=FErrorList};
};


class DELPHICLASS TSqlitePassDatasets;
class PASCALIMPLEMENTATION TSqlitePassDatasets : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassDataset* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassDatabase* FDatabase;
	
protected:
	HIDESBASE TSqlitePassDataset* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TSqlitePassDataset* Dataset);
	
public:
	__fastcall TSqlitePassDatasets(TSqlitePassDatabase* Owner);
	__fastcall virtual ~TSqlitePassDatasets(void);
	TSqlitePassDataset* __fastcall DatasetByName(const AnsiString Name);
	TSqlitePassDataset* __fastcall FindDataset(const AnsiString Value);
	__property TSqlitePassDataset* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property Count ;
	void __fastcall Close(void);
};


class DELPHICLASS TSqlitePassTableDefs;
class DELPHICLASS TSqlitePassTableDef;
class DELPHICLASS TSqlitePassDatabaseAttached;
class DELPHICLASS TSqlitePassTableFieldDef;
class PASCALIMPLEMENTATION TSqlitePassTableDefs : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassTableDef* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassDatabase* FDatabase;
	
protected:
	void __fastcall ClearAndFreeItems(void);
	HIDESBASE TSqlitePassTableDef* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassTableDef* Value);
	
public:
	__fastcall TSqlitePassTableDefs(TSqlitePassDatabase* Owner);
	__fastcall virtual ~TSqlitePassTableDefs(void);
	void __fastcall Assign(const TSqlitePassTableDefs* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall AddTableDefs(const TSqlitePassTableDefs* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall CopyTable(const AnsiString TableName, const AnsiString NewTableName, bool TempTable = false, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall CreateTable(const AnsiString Sql);
	void __fastcall DeleteTable(const AnsiString TableName, bool Silent = false);
	void __fastcall EmptyTable(const AnsiString TableName);
	void __fastcall RenameAs(const AnsiString TableName, const AnsiString NewName);
	void __fastcall Reindex(const AnsiString TableName);
	TSqlitePassTableDef* __fastcall TableByName(const AnsiString Value);
	TSqlitePassTableDef* __fastcall FindTable(const AnsiString Value);
	TSqlitePassTableFieldDef* __fastcall FindFieldDef(const AnsiString TableName, const AnsiString FieldName);
	AnsiString __fastcall FindFieldTableName(const AnsiString FieldName, Classes::TStringList* TableNames);
	__property Count ;
	void __fastcall Refresh(void);
	__property TSqlitePassTableDef* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


class DELPHICLASS TSqlitePassDatabaseIndexDefs;
class DELPHICLASS TSqlitePassDatasetIndex;
class PASCALIMPLEMENTATION TSqlitePassDatabaseIndexDefs : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassIndex* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassDatabase* FDatabase;
	
protected:
	void __fastcall ClearAndFreeItems(void);
	HIDESBASE TSqlitePassIndex* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassIndex* Value);
	
public:
	__fastcall TSqlitePassDatabaseIndexDefs(TSqlitePassDatabase* Owner);
	__fastcall virtual ~TSqlitePassDatabaseIndexDefs(void);
	void __fastcall Assign(const TSqlitePassDatabaseIndexDefs* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall AddIndexes(const TSqlitePassDatabaseIndexDefs* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	TSqlitePassIndex* __fastcall IndexByName(const AnsiString Value);
	TSqlitePassIndex* __fastcall FindIndex(const AnsiString Value);
	void __fastcall CreateIndex(AnsiString Sql)/* overload */;
	void __fastcall CreateIndex(TSqlitePassDatasetIndex* Index)/* overload */;
	void __fastcall DeleteIndex(AnsiString IndexName);
	void __fastcall Reindex(void);
	void __fastcall Refresh(void);
	void __fastcall RenameIndex(AnsiString OldIndexName, AnsiString NewIndexName);
	__property TSqlitePassIndex* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property Count ;
};


class DELPHICLASS TSqlitePassQueryDefs;
class DELPHICLASS TSqlitePassQueryDef;
class PASCALIMPLEMENTATION TSqlitePassQueryDefs : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassQueryDef* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassDatabase* FDatabase;
	TSqlitePassDatabaseAttached* FAttachedDatabase;
	
protected:
	void __fastcall ClearAndFreeItems(void);
	HIDESBASE TSqlitePassQueryDef* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassQueryDef* Value);
	
public:
	__fastcall TSqlitePassQueryDefs(TSqlitePassDatabase* Owner, TSqlitePassDatabaseAttached* AttachedDb);
	__fastcall virtual ~TSqlitePassQueryDefs(void);
	void __fastcall Assign(const TSqlitePassQueryDefs* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall AddQueryDefs(const TSqlitePassQueryDefs* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall CreateQuery(AnsiString Sql);
	void __fastcall DeleteQuery(AnsiString QueryName);
	TSqlitePassQueryDef* __fastcall QueryByName(const AnsiString Value);
	TSqlitePassQueryDef* __fastcall FindQuery(const AnsiString Value);
	__property Count ;
	void __fastcall Refresh(void);
	__property TSqlitePassQueryDef* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


class DELPHICLASS TSqlitePassViews;
class DELPHICLASS TSqlitePassView;
class PASCALIMPLEMENTATION TSqlitePassViews : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassView* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassDatabase* FDatabase;
	
protected:
	void __fastcall ClearAndFreeItems(void);
	HIDESBASE TSqlitePassView* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassView* Value);
	
public:
	__fastcall TSqlitePassViews(TSqlitePassDatabase* Owner);
	__fastcall virtual ~TSqlitePassViews(void);
	void __fastcall Assign(const TSqlitePassViews* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall AddViews(const TSqlitePassViews* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall CreateView(const AnsiString ViewName, const AnsiString SQL, const bool Temp = false, const bool Silent = true);
	void __fastcall DeleteView(AnsiString ViewName);
	TSqlitePassView* __fastcall ViewByName(const AnsiString Value);
	TSqlitePassView* __fastcall FindView(const AnsiString Value);
	__property Count ;
	void __fastcall Refresh(void);
	__property TSqlitePassView* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


class DELPHICLASS TSqlitePassTriggers;
class DELPHICLASS TSqlitePassTrigger;
class PASCALIMPLEMENTATION TSqlitePassTriggers : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassTrigger* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassDatabase* FDatabase;
	
protected:
	void __fastcall ClearAndFreeItems(void);
	HIDESBASE TSqlitePassTrigger* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TSqlitePassTrigger* Value);
	
public:
	__fastcall TSqlitePassTriggers(TSqlitePassDatabase* Owner);
	__fastcall virtual ~TSqlitePassTriggers(void);
	void __fastcall Assign(const TSqlitePassTriggers* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall AddTriggers(const TSqlitePassTriggers* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall CreateTrigger(AnsiString Sql);
	void __fastcall DeleteTrigger(AnsiString TriggerName);
	TSqlitePassTrigger* __fastcall TriggerByName(const AnsiString Value);
	TSqlitePassTrigger* __fastcall FindTrigger(const AnsiString Value);
	__property TSqlitePassTrigger* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property Count ;
	void __fastcall Refresh(void);
};


#pragma option push -b-
enum TSqlitePassSystemEncoding { sysANSI, sysUTF8, sysUTF16 };
#pragma option pop

class DELPHICLASS TSqlitePassSQLStmtDefs;
class DELPHICLASS TSqlitePassSQLStmtDef;
class PASCALIMPLEMENTATION TSqlitePassSQLStmtDefs : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassSQLStmtDef* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassDatabase* FDatabase;
	void __fastcall ClearAndFreeItems(void);
	HIDESBASE TSqlitePassSQLStmtDef* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassSQLStmtDef* Value);
	void __fastcall UpdateSQLStmtTable(const int UpdateType, const AnsiString SQLStmtName, const AnsiString NewSQLStmtName, const Classes::TStringList* SQLStmt);
	
public:
	__fastcall TSqlitePassSQLStmtDefs(TSqlitePassDatabase* Owner);
	__fastcall virtual ~TSqlitePassSQLStmtDefs(void);
	void __fastcall Assign(const TSqlitePassSQLStmtDefs* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall AddSQLStmts(const TSqlitePassSQLStmtDefs* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall CreateSQLStmt(const AnsiString SQLStmtName, const Classes::TStringList* SQLStmt);
	void __fastcall DeleteSQLStmt(const AnsiString SQLStmtName);
	TSqlitePassSQLStmtDef* __fastcall FindSQLStmt(const AnsiString Value);
	void __fastcall RenameSQLStmt(const AnsiString OldName, const AnsiString NewName);
	TSqlitePassSQLStmtDef* __fastcall SQLStmtByName(const AnsiString Value);
	__property Count ;
	void __fastcall Refresh(void);
	__property TSqlitePassSQLStmtDef* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


class DELPHICLASS TSqlitePassDatabasesAttached;
class PASCALIMPLEMENTATION TSqlitePassDatabasesAttached : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassDatabaseAttached* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassDatabase* FDatabase;
	
protected:
	HIDESBASE TSqlitePassDatabaseAttached* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TSqlitePassDatabaseAttached* Database);
	void __fastcall DetachAll(void);
	
public:
	__fastcall TSqlitePassDatabasesAttached(TSqlitePassDatabase* Owner);
	__fastcall virtual ~TSqlitePassDatabasesAttached(void);
	TSqlitePassDatabaseAttached* __fastcall DatabaseByName(const AnsiString Name);
	TSqlitePassDatabaseAttached* __fastcall FindDatabase(const AnsiString Value);
	__property TSqlitePassDatabaseAttached* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property Count ;
};


class DELPHICLASS TSqlitePassDatabaseDataTypeOptions;
#pragma option push -b-
enum TSqlitePassBooleanStorage { asInteger, asText };
#pragma option pop

class DELPHICLASS TSqlitePassCustomFieldDefs;
class DELPHICLASS TSqlitePassCustomFieldDef;
class PASCALIMPLEMENTATION TSqlitePassCustomFieldDefs : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassCustomFieldDef* operator[](int Index) { return Items[Index]; }
	
protected:
	HIDESBASE TSqlitePassCustomFieldDef* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TSqlitePassCustomFieldDef* CustomFieldDef);
	
public:
	__fastcall TSqlitePassCustomFieldDefs(void);
	__fastcall virtual ~TSqlitePassCustomFieldDefs(void);
	HIDESBASE int __fastcall Add(TSqlitePassCustomFieldDef* CustomFieldDef);
	void __fastcall ClearAndFreeItems(void);
	__property TSqlitePassCustomFieldDef* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


#pragma option push -b-
enum TSqlitePassDateTimeStorage { dtsDateTime, dtsJulian, dtsText, dtsUnix, dtsMac };
#pragma option pop

#pragma option push -b-
enum TSqlitePassDataTypeDetectionMode { dmTypeName, dmDbSpecific, dmCustom, dmForceStr };
#pragma option pop

class DELPHICLASS TSqlitePassFieldTypesDefaultTranslationRules;
class DELPHICLASS TSqlitePassFieldTypesGenericTranslationRules;
class DELPHICLASS TSqlitePassFieldTypeTranslationRule;
class PASCALIMPLEMENTATION TSqlitePassFieldTypesGenericTranslationRules : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassFieldTypeTranslationRule* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassDatabaseDataTypeOptions* FDataTypeOptions;
	
protected:
	HIDESBASE TSqlitePassFieldTypeTranslationRule* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, TSqlitePassFieldTypeTranslationRule* FieldTypeTranslationRule);
	
public:
	__fastcall TSqlitePassFieldTypesGenericTranslationRules(TSqlitePassDatabaseDataTypeOptions* DataTypeOptions);
	__fastcall virtual ~TSqlitePassFieldTypesGenericTranslationRules(void);
	HIDESBASE int __fastcall Add(TSqlitePassFieldTypeTranslationRule* FieldTypeTranslationRule);
	void __fastcall ClearAndFreeItems(void);
	__property TSqlitePassFieldTypeTranslationRule* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
};


class PASCALIMPLEMENTATION TSqlitePassFieldTypesDefaultTranslationRules : public TSqlitePassFieldTypesGenericTranslationRules 
{
	typedef TSqlitePassFieldTypesGenericTranslationRules inherited;
	
private:
	void __fastcall InitDefaultTranslationRules(void);
public:
	#pragma option push -w-inl
	/* TSqlitePassFieldTypesGenericTranslationRules.Create */ inline __fastcall TSqlitePassFieldTypesDefaultTranslationRules(TSqlitePassDatabaseDataTypeOptions* DataTypeOptions) : TSqlitePassFieldTypesGenericTranslationRules(DataTypeOptions) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TSqlitePassFieldTypesGenericTranslationRules.Destroy */ inline __fastcall virtual ~TSqlitePassFieldTypesDefaultTranslationRules(void) { }
	#pragma option pop
	
};


class DELPHICLASS TSqlitePassFieldTypesTranslationRules;
class PASCALIMPLEMENTATION TSqlitePassFieldTypesTranslationRules : public TSqlitePassFieldTypesGenericTranslationRules 
{
	typedef TSqlitePassFieldTypesGenericTranslationRules inherited;
	
public:
	void __fastcall Assign(const TSqlitePassFieldTypesGenericTranslationRules* Source);
	void __fastcall LoadDefaultTranslationRules(void);
	bool __fastcall IsCustomized(TSqlitePassFieldTypeTranslationRule* Item);
	void __fastcall SetFieldDefDataType(TSqlitePassTableFieldDef* FieldDef);
public:
	#pragma option push -w-inl
	/* TSqlitePassFieldTypesGenericTranslationRules.Create */ inline __fastcall TSqlitePassFieldTypesTranslationRules(TSqlitePassDatabaseDataTypeOptions* DataTypeOptions) : TSqlitePassFieldTypesGenericTranslationRules(DataTypeOptions) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TSqlitePassFieldTypesGenericTranslationRules.Destroy */ inline __fastcall virtual ~TSqlitePassFieldTypesTranslationRules(void) { }
	#pragma option pop
	
};


#pragma option push -b-
enum SqlitePassDbo__6 { loDefaultProperties, loCustomProperties, loTranslationRules, loCustomFieldDefs };
#pragma option pop

typedef Set<SqlitePassDbo__6, loDefaultProperties, loCustomFieldDefs>  TSqlitePassDataTypeStorageLoadOptions;

#pragma option push -b-
enum SqlitePassDbo__7 { soCustomProperties, soTranslationRules, soCustomFieldDefs };
#pragma option pop

typedef Set<SqlitePassDbo__7, soCustomProperties, soCustomFieldDefs>  TSqlitePassDataTypeStorageSaveOptions;

#pragma option push -b-
enum TSqlitePassUnicodeEncoding { ueAuto, ueUTF8, ueUTF16, ueRawText };
#pragma option pop

class PASCALIMPLEMENTATION TSqlitePassDatabaseDataTypeOptions : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	Word FDateFormatPattern[3][2];
	Word FTimeFormatPattern[4][2];
	Word FDateTimeFormatPattern[7][2];
	Classes::TStringList* FBooleanTrueValues;
	Classes::TStringList* FBooleanFalseValues;
	AnsiString FBooleanFormat;
	TSqlitePassBooleanStorage FBooleanStorage;
	TSqlitePassCustomFieldDefs* FCustomFieldDefs;
	TSqlitePassDatabase* FDatabase;
	int FDateDelta;
	AnsiString FDateFormat;
	TSqlitePassBooleanStorage FDateStorage;
	int FDateTimeDelta;
	AnsiString FDateTimeFormat;
	TSqlitePassDateTimeStorage FDateTimeStorage;
	char FDecimalSeparator;
	Db::TFieldType FDefaultFieldType;
	TSqlitePassDataTypeDetectionMode FDetectionMode;
	TSqlitePassFieldTypesDefaultTranslationRules* FFieldTypesDefaultTranslationRules;
	TSqlitePassFieldTypesTranslationRules* FFieldTypesTranslationRules;
	TSqlitePassDataTypeStorageLoadOptions FLoadOptions;
	TSqlitePassDataTypeStorageSaveOptions FSaveOptions;
	TSqlitePassUnicodeEncoding FUnicodeEncoding;
	AnsiString FTimeFormat;
	TSqlitePassBooleanStorage FTimeStorage;
	AnsiString FStorageVersion;
	void __fastcall FindSubString(char Chr, AnsiString LowerStr, Word &StartPos, Word &EndPos);
	void __fastcall SetFDateFormat(const AnsiString Value);
	void __fastcall SetFTimeFormat(const AnsiString Value);
	void __fastcall SetFDateTimeFormat(const AnsiString Value);
	void __fastcall SetFBooleanFormat(const AnsiString Value);
	void __fastcall SetFUnicodeEncoding(const TSqlitePassUnicodeEncoding Value);
	void __fastcall ReadTranslationRules(Classes::TReader* Reader);
	void __fastcall WriteTranslationRules(Classes::TWriter* Writer);
	void __fastcall ReadCustomFieldDefs(Classes::TReader* Reader);
	void __fastcall WriteCustomFieldDefs(Classes::TWriter* Writer);
	
protected:
	virtual void __fastcall DefineProperties(Classes::TFiler* Filer);
	
public:
	__fastcall TSqlitePassDatabaseDataTypeOptions(TSqlitePassDatabase* Database);
	__fastcall virtual ~TSqlitePassDatabaseDataTypeOptions(void);
	void __fastcall ApplyCustomFieldDefs(void);
	void __fastcall SetDefaultPropertiesValues(void);
	void __fastcall LoadFromDatabase(TSqlitePassDataTypeStorageLoadOptions _LoadOptions = System::Set<SqlitePassDbo__6, loDefaultProperties, loCustomFieldDefs> () );
	void __fastcall SaveToDatabase(TSqlitePassDataTypeStorageSaveOptions _SaveOptions = System::Set<SqlitePassDbo__7, soCustomProperties, soCustomFieldDefs> () );
	__property TSqlitePassDatabase* Database = {read=FDatabase};
	
__published:
	__property AnsiString BooleanFormat = {read=FBooleanFormat, write=SetFBooleanFormat};
	__property TSqlitePassBooleanStorage BooleanStorage = {read=FBooleanStorage, write=FBooleanStorage, nodefault};
	__property TSqlitePassCustomFieldDefs* CustomFieldDefs = {read=FCustomFieldDefs, write=FCustomFieldDefs};
	__property AnsiString DateFormat = {read=FDateFormat, write=SetFDateFormat};
	__property TSqlitePassBooleanStorage DateStorage = {read=FDateStorage, write=FDateStorage, nodefault};
	__property AnsiString DateTimeFormat = {read=FDateTimeFormat, write=SetFDateTimeFormat};
	__property TSqlitePassDateTimeStorage DateTimeStorage = {read=FDateTimeStorage, write=FDateTimeStorage, nodefault};
	__property char DecimalSeparator = {read=FDecimalSeparator, write=FDecimalSeparator, nodefault};
	__property Db::TFieldType DefaultFieldType = {read=FDefaultFieldType, write=FDefaultFieldType, nodefault};
	__property TSqlitePassDataTypeDetectionMode DetectionMode = {read=FDetectionMode, write=FDetectionMode, nodefault};
	__property TSqlitePassDataTypeStorageLoadOptions LoadOptions = {read=FLoadOptions, write=FLoadOptions, nodefault};
	__property TSqlitePassDataTypeStorageSaveOptions SaveOptions = {read=FSaveOptions, write=FSaveOptions, nodefault};
	__property TSqlitePassUnicodeEncoding UnicodeEncoding = {read=FUnicodeEncoding, write=SetFUnicodeEncoding, nodefault};
	__property AnsiString TimeFormat = {read=FTimeFormat, write=SetFTimeFormat};
	__property TSqlitePassBooleanStorage TimeStorage = {read=FTimeStorage, write=FTimeStorage, nodefault};
	__property TSqlitePassFieldTypesTranslationRules* TranslationRules = {read=FFieldTypesTranslationRules, write=FFieldTypesTranslationRules};
};


class DELPHICLASS TSqlitePassEngine;
class DELPHICLASS TSqlitePassTransaction;
class PASCALIMPLEMENTATION TSqlitePassTransaction : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	int FLevel;
	TSqlitePassEngine* FEngine;
	bool FInternalTransaction;
	
public:
	__fastcall TSqlitePassTransaction(TSqlitePassEngine* Owner);
	__fastcall virtual ~TSqlitePassTransaction(void);
	void __fastcall CommitInternalTransaction(void);
	void __fastcall RollbackInternalTransaction(void);
	void __fastcall StartInternalTransaction(void);
	void __fastcall ResetTransactions(bool CommitTransaction);
	void __fastcall Commit(void);
	void __fastcall CommitAll(void);
	void __fastcall Rollback(void);
	void __fastcall RollbackAll(void);
	void __fastcall Start(void);
	__property int Level = {read=FLevel, write=FLevel, nodefault};
};


class PASCALIMPLEMENTATION TSqlitePassEngine : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TSqlitePassDatabase* FDatabase;
	void *FConnectionHandle;
	double FElapsedTime;
	AnsiString FLibraryFile;
	int FLibraryHandle;
	bool FLibraryLoaded;
	int FStartTime;
	int FStopTime;
	int FQueryTimeOut;
	TSqlitePassTransaction* FTransaction;
	bool __fastcall LoadFunctions(void);
	
public:
	__fastcall TSqlitePassEngine(TSqlitePassDatabase* Database);
	__fastcall virtual ~TSqlitePassEngine(void);
	__property void * Connection = {read=FConnectionHandle};
	__property int QueryTimeout = {read=FQueryTimeOut, write=FQueryTimeOut, nodefault};
	void __fastcall StartChrono(void);
	void __fastcall StopChrono(void);
	__property double ElapsedTime = {read=FElapsedTime};
	bool __fastcall LoadSqliteLibrary(AnsiString LibraryFile);
	bool __fastcall OpenDatabase(AnsiString FullName, const AnsiString LibraryFile = "sqlite3.dll");
	void __fastcall CloseDatabase(void);
	__property TSqlitePassTransaction* Transaction = {read=FTransaction, write=FTransaction};
	bool __fastcall PrepareStmt(void * &Stmt, AnsiString Sql, TSqlitePassVerboseLevel VerboseLevel = (TSqlitePassVerboseLevel)(0x3));
	bool __fastcall UnprepareStmt(void * &Stmt);
	void __fastcall FinalizePendingStmts(void);
	int __fastcall ExecSQL(const AnsiString Sql, TSqlitePassExecCallBack CallBackFunc = 0x0);
	void __fastcall ExecQueryUTF8(const AnsiString Sql, TSqlitePassVerboseLevel VerboseLevel = (TSqlitePassVerboseLevel)(0x3));
	void __fastcall ExecQueryUTF16(const WideString Sql, TSqlitePassVerboseLevel VerboseLevel = (TSqlitePassVerboseLevel)(0x3));
	void __fastcall ExecQuery(const AnsiString Sql, TSqlitePassVerboseLevel VerboseLevel = (TSqlitePassVerboseLevel)(0x3));
	int __fastcall GetChangesCount(void);
	int __fastcall GetTotalChangesCount(void);
	__int64 __fastcall GetLastInsertRowId(void);
	int __fastcall CheckResult(const int i, TSqlitePassVerboseLevel VerboseLevel = (TSqlitePassVerboseLevel)(0x3));
	bool __fastcall CreateFunction(AnsiString FuncName, Shortint ArgCount, Byte DefaultEncoding, void * UserData, Sqlitepassapi_v3::TFuncHandler xFunc, Sqlitepassapi_v3::TFuncHandler xStep, Sqlitepassapi_v3::TFuncFinalizer xFinal);
};


class DELPHICLASS TSqlitePassTranslator;
class PASCALIMPLEMENTATION TSqlitePassTranslator : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TSqlitePassDatabase* FDatabase;
	TSqlitePassFieldTypesTranslationRules* FFieldTypesTranslationRules;
	unsigned __fastcall GetMemoryBuffer(const AnsiString StrValue, void * &Buffer, const Db::TFieldType DataType);
	void __fastcall IntegerToWordBool(const int IntegerValue, /* out */ Word &Value);
	void __fastcall BooleanTextToWordBool(const AnsiString StrValue, /* out */ Word &Value);
	void __fastcall DateTextToInteger(const AnsiString StrValue, const Word YearStart, const Word YearLength, const Word MonthStart, const Word MonthLength, const Word DayStart, const Word DayLength, /* out */ int &Value)/* overload */;
	void __fastcall DateTextToInteger(const AnsiString StrValue, /* out */ int &Value)/* overload */;
	void __fastcall TimeTextToInteger(const AnsiString StrValue, const Word HourStart, const Word HourLength, const Word MinStart, const Word MinLength, const Word SecStart, const Word SecLength, const Word MSecStart, const Word MSecLength, /* out */ int &Value)/* overload */;
	void __fastcall TimeTextToInteger(const AnsiString StrValue, /* out */ int &Value)/* overload */;
	void __fastcall JulianDateTimeToDouble(const double DoubleValue, /* out */ double &Value);
	void __fastcall DateTimeTextToDouble(const AnsiString StrValue, /* out */ double &Value);
	void __fastcall UnixDateTimeToDouble(const __int64 Int64Value, /* out */ double &Value);
	void __fastcall MacDateTimeToDouble(const __int64 Int64Value, /* out */ double &Value);
	void __fastcall WordBoolToInteger(const Word Value, /* out */ int &IntegerValue);
	void __fastcall WordBoolToBooleanText(const Word Value, /* out */ AnsiString &StrValue);
	void __fastcall IntegerToDateText(const int Value, const AnsiString DatePattern, const Word YearStart, const Word YearLength, const Word MonthStart, const Word MonthLength, const Word DayStart, const Word DayLength, /* out */ AnsiString &StrValue)/* overload */;
	void __fastcall IntegerToDateText(const int Value, /* out */ AnsiString &StrValue)/* overload */;
	void __fastcall IntegerToTimeText(const int Value, const AnsiString TimePattern, const Word HourStart, const Word HourLength, const Word MinStart, const Word MinLength, const Word SecStart, const Word SecLength, const Word MSecStart, const Word MSecLength, /* out */ AnsiString &StrValue)/* overload */;
	void __fastcall IntegerToTimeText(const int Value, /* out */ AnsiString &StrValue)/* overload */;
	void __fastcall DoubleToJulianDateTime(const double Value, /* out */ double &DoubleValue);
	void __fastcall DoubleToDateTimeText(const double Value, /* out */ AnsiString &StrValue);
	void __fastcall DoubleToUnixDateTime(const double Value, /* out */ __int64 &Int64Value);
	void __fastcall DoubleToMacDateTime(const double Value, /* out */ __int64 &Int64Value);
	void __fastcall SystemEncodingToUTF8(const AnsiString StrValue, /* out */ AnsiString &UTF8AnsiString);
	void __fastcall UTF8ToSystemEncoding(const AnsiString UTF8AnsiString, /* out */ AnsiString &StrValue);
	virtual void __fastcall GetDatabaseTableDefs(TSqlitePassTableDefs* TableDefs);
	virtual void __fastcall GetDatabaseTableFieldDefs(TSqlitePassTableDef* TableDef, TSqlitePassRecordset* FieldDefsRecordset);
	virtual void __fastcall GetDatabaseIndexDefs(TSqlitePassDatabaseIndexDefs* IndexDefs);
	virtual void __fastcall GetDatabaseQueryDefs(TSqlitePassQueryDefs* QueryDefs);
	virtual void __fastcall GetDatabaseViews(TSqlitePassViews* Views);
	virtual void __fastcall GetDatabaseTriggers(TSqlitePassTriggers* Triggers);
	virtual bool __fastcall IsSystemTable(AnsiString TableName);
	void __fastcall ConvertNativeFieldTypeToPascalFieldType(TSqlitePassTableFieldDef* FieldDef);
	void __fastcall GetFieldDefSize(TSqlitePassTableFieldDef* FieldDef);
	__property TSqlitePassFieldTypesTranslationRules* FieldTypesTranslationRules = {read=FFieldTypesTranslationRules};
	
public:
	__fastcall TSqlitePassTranslator(TSqlitePassDatabase* Owner);
	__fastcall virtual ~TSqlitePassTranslator(void);
	AnsiString __fastcall DateTimeToStr(System::TDateTime Value);
	AnsiString __fastcall DateToStr(System::TDateTime Value);
	AnsiString __fastcall TimeToStr(System::TDateTime Value);
};


class DELPHICLASS TSqlitePassDatabaseOptions;
#pragma option push -b-
enum TSqlitePassApplyMode { amOverwriteDatabaseFileSettings, amAutoVacuum, amCacheSize, amCaseSensitiveLike, amCountChanges, amDefaultCacheSize, amFullColumnNames, amForeignKeys, amJournalMode, amJournalSizeLimit, amLockingMode, amMaxPageCount, amPageSize, amRecursiveTriggers, amSecureDelete, amSynchronous, amTemporaryStorage, amTemporaryStorageDir };
#pragma option pop

typedef Set<TSqlitePassApplyMode, amOverwriteDatabaseFileSettings, amTemporaryStorageDir>  TSqlitePassApplyModes;

#pragma option push -b-
enum TSqlitePassAutoVacuumType { avNone, avFull, avIncremental };
#pragma option pop

#pragma option push -b-
enum TSqlitePassEncoding { UTF8, UTF16, UTF16le, UTF16be };
#pragma option pop

#pragma option push -b-
enum TSqlitePassJournalMode { jmDelete, jmTruncate, jmPersist, jmMemory, jmOff };
#pragma option pop

#pragma option push -b-
enum TSqlitePassLockingMode { lmNormal, lmExclusive };
#pragma option pop

typedef Word TSqlitePassPageSize;

#pragma option push -b-
enum TSqlitePassSynchronous { syncOff, syncNormal, syncFull };
#pragma option pop

#pragma option push -b-
enum TSqlitePassTempStore { tsDefault, tsFile, tsMemory };
#pragma option pop

class PASCALIMPLEMENTATION TSqlitePassDatabaseOptions : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	TSqlitePassDatabase* FDatabase;
	TSqlitePassApplyModes FApplyMode;
	TSqlitePassAutoVacuumType FAutoVacuum;
	int FCacheSize;
	bool FCaseSensitiveLike;
	bool FCountChanges;
	int FDefaultCacheSize;
	TSqlitePassEncoding FEncoding;
	bool FFullColumnNames;
	bool FForeignKeys;
	TSqlitePassJournalMode FJournalMode;
	int FJournalSizeLimit;
	TSqlitePassLockingMode FLockingMode;
	int FMaxPageCount;
	TSqlitePassPageSize FPageSize;
	bool FRecursiveTriggers;
	bool FSecureDelete;
	TSqlitePassSynchronous FSynchronous;
	TSqlitePassTempStore FTemporaryStorage;
	AnsiString FTemporaryStorageDir;
	bool FLogErrors;
	TSqlitePassQuoteStyle FQuoteStyle;
	char FQuoteOpen;
	char FQuoteClose;
	TSqlitePassAutoVacuumType __fastcall GetFAutoVacuum(void);
	int __fastcall GetFCacheSize(void);
	bool __fastcall GetFCountChanges(void);
	int __fastcall GetFDefaultCacheSize(void);
	TSqlitePassEncoding __fastcall GetFEncoding(void);
	bool __fastcall GetFFullColumnNames(void);
	bool __fastcall GetFForeignKeys(void);
	TSqlitePassJournalMode __fastcall GetFJournalMode(void);
	int __fastcall GetFJournalSizeLimit(void);
	TSqlitePassLockingMode __fastcall GetFLockingMode(void);
	int __fastcall GetFMaxPageCount(void);
	TSqlitePassPageSize __fastcall GetFPageSize(void);
	bool __fastcall GetFRecursiveTriggers(void);
	bool __fastcall GetFSecureDelete(void);
	TSqlitePassSynchronous __fastcall GetFSynchronous(void);
	TSqlitePassTempStore __fastcall GetFTemporaryStorage(void);
	AnsiString __fastcall GetFTemporaryStorageDir();
	void __fastcall SetFAutoVacuum(const TSqlitePassAutoVacuumType Value);
	void __fastcall SetFCacheSize(const int Value);
	void __fastcall SetFCaseSensitiveLike(const bool Value);
	void __fastcall SetFCountChanges(const bool Value);
	void __fastcall SetFDefaultCacheSize(const int Value);
	void __fastcall SetFEncoding(const TSqlitePassEncoding Value);
	void __fastcall SetFJournalMode(const TSqlitePassJournalMode Value);
	void __fastcall SetFJournalSizeLimit(const int Value);
	void __fastcall SetFForeignKeys(const bool Value);
	void __fastcall SetFFullColumnNames(const bool Value);
	void __fastcall SetFLockingMode(const TSqlitePassLockingMode Value);
	void __fastcall SetFMaxPageCount(const int Value);
	void __fastcall SetFPageSize(const TSqlitePassPageSize Value);
	void __fastcall SetFQuoteStyle(const TSqlitePassQuoteStyle Value);
	void __fastcall SetFRecursiveTriggers(const bool Value);
	void __fastcall SetFSecureDelete(const bool Value);
	void __fastcall SetFSynchronous(const TSqlitePassSynchronous Value);
	void __fastcall SetFTemporaryStorage(const TSqlitePassTempStore Value);
	void __fastcall SetFTemporaryStorageDir(const AnsiString Value);
	TSqlitePassPageSize __fastcall CheckPageSize(TSqlitePassPageSize Value);
	
public:
	__fastcall TSqlitePassDatabaseOptions(TSqlitePassDatabase* Database);
	__fastcall virtual ~TSqlitePassDatabaseOptions(void);
	AnsiString __fastcall GetEncodingAsString(TSqlitePassEncoding Encoding);
	void __fastcall Apply(void);
	
__published:
	__property TSqlitePassApplyModes ApplyMode = {read=FApplyMode, write=FApplyMode, nodefault};
	__property TSqlitePassAutoVacuumType AutoVacuum = {read=GetFAutoVacuum, write=SetFAutoVacuum, nodefault};
	__property int CacheSize = {read=GetFCacheSize, write=SetFCacheSize, nodefault};
	__property bool CaseSensitiveLike = {read=FCaseSensitiveLike, write=SetFCaseSensitiveLike, nodefault};
	__property bool CountChanges = {read=GetFCountChanges, write=SetFCountChanges, nodefault};
	__property int DefaultCacheSize = {read=GetFDefaultCacheSize, write=SetFDefaultCacheSize, nodefault};
	__property TSqlitePassEncoding Encoding = {read=GetFEncoding, write=SetFEncoding, nodefault};
	__property bool ForeignKeys = {read=GetFForeignKeys, write=SetFForeignKeys, nodefault};
	__property bool FullColumnNames = {read=GetFFullColumnNames, write=SetFFullColumnNames, nodefault};
	__property TSqlitePassJournalMode JournalMode = {read=GetFJournalMode, write=SetFJournalMode, nodefault};
	__property int JournalSizeLimit = {read=GetFJournalSizeLimit, write=SetFJournalSizeLimit, nodefault};
	__property TSqlitePassLockingMode LockingMode = {read=GetFLockingMode, write=SetFLockingMode, nodefault};
	__property bool LogErrors = {read=FLogErrors, write=FLogErrors, nodefault};
	__property int MaxPageCount = {read=GetFMaxPageCount, write=SetFMaxPageCount, nodefault};
	__property TSqlitePassPageSize PageSize = {read=GetFPageSize, write=SetFPageSize, nodefault};
	__property TSqlitePassQuoteStyle QuoteStyle = {read=FQuoteStyle, write=SetFQuoteStyle, nodefault};
	__property bool RecursiveTriggers = {read=GetFRecursiveTriggers, write=SetFRecursiveTriggers, nodefault};
	__property bool SecureDelete = {read=GetFSecureDelete, write=SetFSecureDelete, nodefault};
	__property TSqlitePassSynchronous Synchronous = {read=GetFSynchronous, write=SetFSynchronous, nodefault};
	__property TSqlitePassTempStore TemporaryStorage = {read=GetFTemporaryStorage, write=SetFTemporaryStorage, nodefault};
	__property AnsiString TemporaryStorageDir = {read=GetFTemporaryStorageDir, write=SetFTemporaryStorageDir};
};


typedef void __fastcall (__closure *TConnectEvent)(TSqlitePassDatabase* Database);

typedef void __fastcall (__closure *TDataTypeConversion)(TSqlitePassDatabase* Database, TSqlitePassTableDef* TableDef, TSqlitePassTableFieldDef* FiedDef);

class PASCALIMPLEMENTATION TSqlitePassDatabase : public Classes::TComponent 
{
	typedef Classes::TComponent inherited;
	
private:
	bool FConnected;
	bool FWaitingForConnection;
	AnsiString FCollatingOrder;
	AnsiString FDatabase;
	TSqlitePassDatabaseError* FDatabaseError;
	TSqlitePassDatasets* FDatasets;
	TSqlitePassTableDefs* FTableDefs;
	TSqlitePassDatabaseIndexDefs* FIndexDefs;
	TSqlitePassQueryDefs* FQueryDefs;
	TSqlitePassViews* FViews;
	TSqlitePassTriggers* FTriggers;
	TSqlitePassSystemEncoding FSystemEncoding;
	TSqlitePassSQLStmtDefs* FSQLStmtDefs;
	TSqlitePassRecordset* FTempRecordset;
	Classes::TList* FDatabasesList;
	TSqlitePassDatabasesAttached* FDatabases;
	TSqlitePassDatabaseType FDatabaseType;
	TSqlitePassDatabaseDataTypeOptions* FDataTypeOptions;
	TSqlitePassEngine* FEngine;
	TSqlitePassTranslator* FTranslator;
	TSqlitePassDatabaseOptions* FOptions;
	int FQueryTimeout;
	bool FReadOnly;
	bool FShowSysObjects;
	TSqlitePassDatabaseState FState;
	TSqlitePassDatabaseVersionInfo* FVersionInfo;
	AnsiString FSQLiteLibrary;
	TConnectEvent FAfterConnect;
	TConnectEvent FAfterDisconnect;
	TConnectEvent FBeforeConnect;
	TConnectEvent FBeforeDisconnect;
	TDataTypeConversion FDataTypeConversion;
	Controls::TCursor FSavedScreenCursor;
	bool __fastcall CheckCanOpen(TSqlitePassVerboseLevel VerboseLevel = (TSqlitePassVerboseLevel)(0x3));
	bool __fastcall CheckCanChangePropertyValue(AnsiString PropertyPrivateName, AnsiString PropertyPublicName);
	TSqlitePassDatabaseType __fastcall DatabaseTypeFromFileName(AnsiString FileName);
	void __fastcall SetFDatabase(AnsiString Value);
	void __fastcall SetFDatabaseType(const TSqlitePassDatabaseType Value);
	AnsiString __fastcall GetFCollatingOrder();
	bool __fastcall GetFConnected(void);
	void __fastcall SetFShowSysObjects(bool Value);
	void __fastcall SetFSQLiteLibrary(AnsiString Value);
	void __fastcall SetFReadOnly(bool Value);
	void __fastcall SetFConnected(bool Value);
	TSqlitePassEngine* __fastcall GetFEngine(void);
	void __fastcall ClearDefinitions(void);
	void __fastcall OpenAttachedDatabases(void);
	void __fastcall CloseAttachedDatabases(void);
	void __fastcall ShowBusyScreenCursor(void);
	void __fastcall RestoreScreenCursor(void);
	TSqlitePassValueBufferToSqliteValue __fastcall PrepareBindValueDispacher(const Db::TFieldType DataType);
	void __fastcall SetPragma(AnsiString PragmaName, bool value)/* overload */;
	void __fastcall SetPragma(AnsiString PragmaName, int value)/* overload */;
	void __fastcall SetPragma(AnsiString PragmaName, AnsiString value)/* overload */;
	AnsiString __fastcall GetStrPragma(AnsiString PragmaName);
	int __fastcall GetIntPragma(AnsiString PragmaName);
	
protected:
	virtual void __fastcall Loaded(void);
	virtual void __fastcall Notification(Classes::TComponent* AComponent, Classes::TOperation Operation);
	
public:
	__fastcall virtual TSqlitePassDatabase(Classes::TComponent* AOwner);
	__fastcall virtual ~TSqlitePassDatabase(void);
	void __fastcall Open(void);
	void __fastcall Close(void);
	int __fastcall Compact(void);
	void __fastcall CheckIntegrity(Classes::TStringList* MsgList, int MaxErrorCount = 0x64);
	bool __fastcall CreateDatabase(AnsiString DbName, TSqlitePassDatabaseType DbType, TSqlitePassEncoding DbEncoding = (TSqlitePassEncoding)(0x0), TSqlitePassPageSize PageSize = (TSqlitePassPageSize)(0x1000), TSqlitePassAutoVacuumType AutoVacuum = (TSqlitePassAutoVacuumType)(0x0));
	bool __fastcall DeleteDatabase(const AnsiString DbName);
	bool __fastcall CreateFunction(AnsiString FuncName, Shortint ArgCount, Sqlitepassapi_v3::TFuncHandler Func, void * UserData, Byte DefaultEncoding = (Byte)(0x5));
	bool __fastcall CreateAggFunction(AnsiString FuncName, Shortint ArgCount, Sqlitepassapi_v3::TFuncHandler FuncStep, Sqlitepassapi_v3::TFuncFinalizer FuncFinal, void * UserData, Byte DefaultEncoding = (Byte)(0x5));
	bool __fastcall DeleteFunction(AnsiString FuncName);
	bool __fastcall AttachDatabase(AnsiString FAttachedDatabase, AnsiString DatabaseAlias);
	bool __fastcall DetachDatabase(AnsiString DatabaseAlias);
	void __fastcall RefreshDefinitions(void);
	bool __fastcall IsSystemTable(AnsiString TableName);
	__property TSqlitePassDatabaseError* DatabaseError = {read=FDatabaseError};
	__property TSqlitePassEngine* Engine = {read=GetFEngine};
	__property TSqlitePassTranslator* Translator = {read=FTranslator};
	__property TSqlitePassDatabasesAttached* Databases = {read=FDatabases};
	__property TSqlitePassDatasets* Datasets = {read=FDatasets, write=FDatasets};
	__property TSqlitePassDatabaseIndexDefs* IndexDefs = {read=FIndexDefs, write=FIndexDefs};
	__property TSqlitePassQueryDefs* QueryDefs = {read=FQueryDefs, write=FQueryDefs};
	__property TSqlitePassSystemEncoding SystemEncoding = {read=FSystemEncoding, nodefault};
	__property TSqlitePassSQLStmtDefs* SQLStmtDefs = {read=FSQLStmtDefs, write=FSQLStmtDefs};
	__property TSqlitePassTableDefs* TableDefs = {read=FTableDefs, write=FTableDefs};
	__property TSqlitePassViews* Views = {read=FViews, write=FViews};
	__property TSqlitePassTriggers* Triggers = {read=FTriggers, write=FTriggers};
	
__published:
	__property bool Connected = {read=GetFConnected, write=SetFConnected, default=0};
	__property AnsiString Database = {read=FDatabase, write=SetFDatabase};
	__property TSqlitePassDatabaseType DatabaseType = {read=FDatabaseType, write=FDatabaseType, nodefault};
	__property TSqlitePassDatabaseDataTypeOptions* DatatypeOptions = {read=FDataTypeOptions, write=FDataTypeOptions};
	__property TSqlitePassDatabaseOptions* Options = {read=FOptions, write=FOptions};
	__property int QueryTimeout = {read=FQueryTimeout, write=FQueryTimeout, nodefault};
	__property bool ReadOnly = {read=FReadOnly, write=SetFReadOnly, default=0};
	__property bool ShowSystemObjects = {read=FShowSysObjects, write=SetFShowSysObjects, nodefault};
	__property AnsiString SQLiteLibrary = {read=FSQLiteLibrary, write=SetFSQLiteLibrary};
	__property TSqlitePassDatabaseVersionInfo* VersionInfo = {read=FVersionInfo, write=FVersionInfo};
	__property TConnectEvent OnAfterConnect = {read=FAfterConnect, write=FAfterConnect};
	__property TConnectEvent OnAfterDisconnect = {read=FAfterDisconnect, write=FAfterDisconnect};
	__property TConnectEvent OnBeforeConnect = {read=FBeforeConnect, write=FBeforeConnect};
	__property TConnectEvent OnBeforeDisconnect = {read=FBeforeDisconnect, write=FBeforeDisconnect};
	__property TDataTypeConversion OnDataTypeConversion = {read=FDataTypeConversion, write=FDataTypeConversion};
};


class PASCALIMPLEMENTATION TSqlitePassDatabaseVersionInfo : public Classes::TPersistent 
{
	typedef Classes::TPersistent inherited;
	
private:
	AnsiString FComponent;
	TSqlitePassDatabase* FDatabase;
	AnsiString FPackage;
	int FSchema;
	int FUserTag;
	int __fastcall GetFDbSchema(void);
	AnsiString __fastcall GetFSqliteLibrary();
	int __fastcall GetFSqliteLibraryNumber(void);
	AnsiString __fastcall GetFSqliteLibrarySourceId();
	int __fastcall GetFUserTag(void);
	void __fastcall SetFPackage(const AnsiString Value);
	void __fastcall SetFDbSchema(const int Value);
	void __fastcall SetFSqliteLibrary(const AnsiString Value);
	void __fastcall SetFSqliteLibraryNumber(const int Value);
	void __fastcall SetFSqliteLibrarySourceId(const AnsiString Value);
	void __fastcall SetFUserTag(const int Value);
	void __fastcall SetFComponent(const AnsiString Value);
	
public:
	__fastcall TSqlitePassDatabaseVersionInfo(TSqlitePassDatabase* Database);
	__fastcall virtual ~TSqlitePassDatabaseVersionInfo(void);
	
__published:
	__property AnsiString Component = {read=FComponent, write=SetFComponent};
	__property int Schema = {read=GetFDbSchema, write=SetFDbSchema, nodefault};
	__property AnsiString Package = {read=FPackage, write=SetFPackage};
	__property AnsiString SqliteLibrary = {read=GetFSqliteLibrary, write=SetFSqliteLibrary};
	__property int SqliteLibraryNumber = {read=GetFSqliteLibraryNumber, write=SetFSqliteLibraryNumber, nodefault};
	__property AnsiString SqliteSourceId = {read=GetFSqliteLibrarySourceId, write=SetFSqliteLibrarySourceId};
	__property int UserTag = {read=GetFUserTag, write=SetFUserTag, nodefault};
};


typedef TSqlitePassBooleanStorage TSqlitePassDateStorage;

typedef TSqlitePassBooleanStorage TSqlitePassTimeStorage;

#pragma option push -b-
enum TSqlitePassDataTypeMappingMode { mmExact, mmExactNoCase, mmPartial, mmPartialNoCase, mmAll };
#pragma option pop

class PASCALIMPLEMENTATION TSqlitePassFieldTypeTranslationRule : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	AnsiString FDatatypeName;
	TSqlitePassDataTypeMappingMode FMappingMode;
	Db::TFieldType FFieldType;
	
public:
	__property AnsiString DatatypeName = {read=FDatatypeName, write=FDatatypeName};
	__property TSqlitePassDataTypeMappingMode MappingMode = {read=FMappingMode, write=FMappingMode, nodefault};
	__property Db::TFieldType FieldType = {read=FFieldType, write=FFieldType, nodefault};
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TSqlitePassFieldTypeTranslationRule(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TSqlitePassFieldTypeTranslationRule(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TSqlitePassCustomFieldDef : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	AnsiString FFieldName;
	Db::TFieldType FFieldType;
	int FFieldSize;
	int FFieldPrecision;
	AnsiString FTableName;
	
public:
	__property AnsiString TableName = {read=FTableName, write=FTableName};
	__property AnsiString FieldName = {read=FFieldName, write=FFieldName};
	__property Db::TFieldType FieldType = {read=FFieldType, write=FFieldType, nodefault};
	__property int FieldSize = {read=FFieldSize, write=FFieldSize, nodefault};
	__property int FieldPrecision = {read=FFieldPrecision, write=FFieldPrecision, nodefault};
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TSqlitePassCustomFieldDef(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TSqlitePassCustomFieldDef(void) { }
	#pragma option pop
	
};

class DELPHICLASS TSqlitePassGenericFieldDef;
class PASCALIMPLEMENTATION TSqlitePassGenericFieldDef : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	bool FNoConstraints;
	bool FAutoInc;
	bool FUnique;
	bool FPrimaryKey;
	bool FForeignKey;
	bool FNotNull;
	bool FNotEmpty;
	bool FIndexed;
	int FDatabaseOrigineNameIndex;
	int FTableOrigineNameIndex;
	AnsiString FFieldName;
	AnsiString FDisplayName;
	Word FSize;
	int FPrecision;
	AnsiString FNativeDataType;
	int FNativeDataTypeCode;
	Db::TFieldType FDataType;
	AnsiString FDefaultValue;
	int FTableFieldNo;
	int FRecordFieldIndex;
	AnsiString FHint;
	AnsiString FOrgFieldName;
	void __fastcall Assign(const TSqlitePassGenericFieldDef* Source);
	virtual void __fastcall SetFDataType(Db::TFieldType Value);
	virtual void __fastcall SetFFieldName(AnsiString Value);
	virtual void __fastcall SetFOrgFieldName(AnsiString Value);
	
public:
	__property bool AutoInc = {read=FAutoInc, nodefault};
	__property Db::TFieldType DataType = {read=FDataType, write=SetFDataType, nodefault};
	__property AnsiString DefaultValue = {read=FDefaultValue};
	__property AnsiString DisplayName = {read=FDisplayName, write=FDisplayName};
	__property AnsiString FieldName = {read=FFieldName};
	__property int TableFieldNo = {read=FTableFieldNo, nodefault};
	__property bool ForeignKey = {read=FForeignKey, nodefault};
	__property AnsiString Hint = {read=FHint, write=FHint};
	__property bool Indexed = {read=FIndexed, nodefault};
	__property AnsiString NativeDataType = {read=FNativeDataType};
	__property int NativeDataTypeCode = {read=FNativeDataTypeCode, write=FNativeDataTypeCode, nodefault};
	__property bool NotEmpty = {read=FNotEmpty, nodefault};
	__property bool NoConstraints = {read=FNoConstraints, nodefault};
	__property bool NotNull = {read=FNotNull, nodefault};
	__property int Precision = {read=FPrecision, nodefault};
	__property bool PrimaryKey = {read=FPrimaryKey, nodefault};
	__property int RecordFieldIndex = {read=FRecordFieldIndex, nodefault};
	__property Word Size = {read=FSize, nodefault};
	__property bool Unique = {read=FUnique, nodefault};
	__property AnsiString OrgFieldName = {read=FOrgFieldName};
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TSqlitePassGenericFieldDef(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TSqlitePassGenericFieldDef(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TSqlitePassTableFieldDef : public TSqlitePassGenericFieldDef 
{
	typedef TSqlitePassGenericFieldDef inherited;
	
private:
	TSqlitePassTableFieldDefs* FFieldDefs;
	AnsiString __fastcall GetFFieldFullName();
	
public:
	__fastcall TSqlitePassTableFieldDef(TSqlitePassTableFieldDefs* Owner);
	__fastcall virtual ~TSqlitePassTableFieldDef(void);
	HIDESBASE void __fastcall Assign(const TSqlitePassTableFieldDef* Source);
	__property AnsiString FieldFullName = {read=GetFFieldFullName};
	__property TSqlitePassTableFieldDefs* FieldDefs = {read=FFieldDefs};
};


class PASCALIMPLEMENTATION TSqlitePassSelectStmtFieldDef : public TSqlitePassGenericFieldDef 
{
	typedef TSqlitePassGenericFieldDef inherited;
	
private:
	TSqlitePassSelectStmtFieldDefs* FFieldDefs;
	AnsiString FFieldUpdateStmt;
	TSqlitePassValueBufferToSqliteValue BindValue;
	AnsiString __fastcall GetFFieldFullName();
	virtual void __fastcall SetFDataType(Db::TFieldType Value);
	virtual void __fastcall SetFFieldName(AnsiString Value);
	
public:
	__fastcall TSqlitePassSelectStmtFieldDef(TSqlitePassSelectStmtFieldDefs* Owner);
	__fastcall virtual ~TSqlitePassSelectStmtFieldDef(void);
	HIDESBASE void __fastcall Assign(const TSqlitePassTableFieldDef* Source);
	__property AnsiString FieldFullName = {read=GetFFieldFullName};
	__property TSqlitePassSelectStmtFieldDefs* FieldDefs = {read=FFieldDefs};
};


class PASCALIMPLEMENTATION TSqlitePassTableFieldDefs : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassTableFieldDef* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassTableDef* FTableDef;
	
protected:
	void __fastcall ClearAndFreeItems(void);
	HIDESBASE TSqlitePassTableFieldDef* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassTableFieldDef* Value);
	
public:
	__fastcall TSqlitePassTableFieldDefs(TSqlitePassTableDef* Owner);
	__fastcall virtual ~TSqlitePassTableFieldDefs(void);
	void __fastcall Assign(const TSqlitePassTableFieldDefs* Source);
	TSqlitePassTableFieldDef* __fastcall FieldDefByName(const AnsiString Value);
	TSqlitePassTableFieldDef* __fastcall FindFieldDef(const AnsiString Value);
	__property Count ;
	__property TSqlitePassTableFieldDef* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property TSqlitePassTableDef* TableDef = {read=FTableDef};
};


typedef bool __fastcall (*TFieldFilterExpAcceptValueFunc)(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);

class PASCALIMPLEMENTATION TSqlitePassFieldFilterExp : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TSqlitePassFieldFilter* FFieldFilter;
	TSqlitePassFilterLogicalOperators FLogicalOperator;
	TSqlitePassFilterComparisonOperators FComparisonOperator;
	void *FValueMem;
	void *FValue;
	AnsiString FTextValue;
	TFieldFilterExpAcceptValueFunc AcceptValue;
	TFieldFilterExpAcceptValueFunc IsEqual;
	TFieldFilterExpAcceptValueFunc IsLesser;
	void __fastcall BinarySetResultRecordsRanges(int &RangeStart, int &RangeStop);
	AnsiString __fastcall ComparisonOpAsText();
	AnsiString __fastcall GetExpressionText();
	AnsiString __fastcall LogicalOpAsText();
	void __fastcall SetFComparisonOperator(TSqlitePassFilterComparisonOperators Value);
	void __fastcall SetFValue(const AnsiString StrValue);
	
public:
	__fastcall TSqlitePassFieldFilterExp(TSqlitePassFieldFilter* Owner);
	__fastcall virtual ~TSqlitePassFieldFilterExp(void);
	__property TSqlitePassFilterComparisonOperators ComparisonOperator = {read=FComparisonOperator, write=SetFComparisonOperator, nodefault};
	__property AnsiString ExpressionText = {read=GetExpressionText};
	__property TSqlitePassFilterLogicalOperators LogicalOperator = {read=FLogicalOperator, write=FLogicalOperator, nodefault};
	__property AnsiString Value = {read=FTextValue, write=SetFValue};
};


class PASCALIMPLEMENTATION TSqlitePassDatabaseAttached : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	AnsiString FAliasName;
	AnsiString FDatabase;
	TSqlitePassDatabasesAttached* FDatabasesList;
	
public:
	__fastcall TSqlitePassDatabaseAttached(TSqlitePassDatabasesAttached* Databases);
	__fastcall virtual ~TSqlitePassDatabaseAttached(void);
	__property AnsiString AliasName = {read=FAliasName};
	__property AnsiString Database = {read=FDatabase, write=FDatabase};
};


class DELPHICLASS TSqlitePassGenericTableDef;
class PASCALIMPLEMENTATION TSqlitePassGenericTableDef : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TSqlitePassDatabaseAttached* FAttachedDatabase;
	AnsiString FAliasName;
	int FDatabaseOrigineNameIndex;
	AnsiString FOnConflict;
	AnsiString FSql;
	AnsiString FTableName;
	bool FTemporary;
	bool __fastcall GetAttached(void);
	virtual bool __fastcall GetCanModify(void);
	AnsiString __fastcall GetTableFullName();
	
public:
	void __fastcall Assign(const TSqlitePassGenericTableDef* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	__property AnsiString AliasName = {read=FAliasName};
	__property bool Attached = {read=GetAttached, nodefault};
	__property bool CanModify = {read=GetCanModify, nodefault};
	__property AnsiString OnConlict = {read=FOnConflict};
	__property AnsiString Sql = {read=FSql};
	__property AnsiString TableName = {read=FTableName};
	__property AnsiString TableFullName = {read=GetTableFullName};
	__property bool Temporary = {read=FTemporary, nodefault};
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TSqlitePassGenericTableDef(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TSqlitePassGenericTableDef(void) { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TSqlitePassTableDef : public TSqlitePassGenericTableDef 
{
	typedef TSqlitePassGenericTableDef inherited;
	
private:
	TSqlitePassTableDefs* FTableDefs;
	TSqlitePassTableFieldDefs* FFieldDefs;
	
public:
	__fastcall TSqlitePassTableDef(TSqlitePassTableDefs* Owner);
	__fastcall virtual ~TSqlitePassTableDef(void);
	HIDESBASE void __fastcall Assign(const TSqlitePassTableDef* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall CopyTable(AnsiString NewTableName, bool TempTable = false, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall DeleteTable(bool Silent = false);
	void __fastcall RenameAs(AnsiString NewName);
	void __fastcall Reindex(void);
	__property TSqlitePassTableFieldDefs* FieldDefs = {read=FFieldDefs};
};


class PASCALIMPLEMENTATION TSqlitePassSelectStmtTableDef : public TSqlitePassGenericTableDef 
{
	typedef TSqlitePassGenericTableDef inherited;
	
private:
	TSqlitePassSelectStmtTableDefs* FTableDefs;
	void *FInsertStmt;
	void *FUpdateStmt;
	void *FDeleteStmt;
	AnsiString FInsertStmtText;
	AnsiString FUpdateStmtText;
	AnsiString FDeleteStmtText;
	__int64 FLastInsertedRowId;
	int FTableDefNo;
	TSqlitePassSelectStmtFieldDefs* FAutoIncFieldDefs;
	TSqlitePassAvailableOperations FAvailableOperations;
	TSqlitePassSelectStmtFieldDefs* FFieldDefs;
	virtual bool __fastcall GetCanModify(void);
	void __fastcall UpdateAutoIncValues(const char * RecordBuffer);
	
public:
	__fastcall TSqlitePassSelectStmtTableDef(TSqlitePassSelectStmtTableDefs* Owner);
	__fastcall virtual ~TSqlitePassSelectStmtTableDef(void);
	HIDESBASE void __fastcall Assign(const TSqlitePassTableDef* Source);
	void __fastcall PrepareWritingSQLStmts(void);
	void __fastcall UnPrepareWritingSQLStmts(void);
	void __fastcall PostInsert(const char * RecordBuffer);
	void __fastcall PostUpdate(const __int64 RowId, const char * RecordBuffer);
	void __fastcall PostDelete(const __int64 RowId, const char * RecordBuffer);
	__property TSqlitePassAvailableOperations AvailableOperations = {read=FAvailableOperations, nodefault};
	__property TSqlitePassSelectStmtFieldDefs* FieldDefs = {read=FFieldDefs};
};


class PASCALIMPLEMENTATION TSqlitePassParam : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TSqlitePassParams* FParams;
	TSqlitePassValueBufferToSqliteValue FBindValue;
	bool FBound;
	Db::TFieldType FDataType;
	bool FIsNull;
	Db::TField* FMasterField;
	AnsiString FName;
	int FParamIndex;
	AnsiString FTextValue;
	void *FValue;
	void *FValueMem;
	unsigned FValueMemSize;
	void __fastcall Prepare(void);
	void __fastcall PrepareBindValueDispacher(void);
	void __fastcall SetFDataType(const Db::TFieldType Value);
	void __fastcall SetFName(const AnsiString Value);
	void __fastcall SetFValue(const AnsiString StrValue);
	void __fastcall SetDatatypeFromParamName(void);
	
public:
	__fastcall TSqlitePassParam(TSqlitePassParams* Owner);
	__fastcall virtual ~TSqlitePassParam(void);
	void __fastcall Assign(const TSqlitePassParam* Source);
	void __fastcall BindValue(void);
	__property bool Bound = {read=FBound, write=FBound, nodefault};
	__property Db::TFieldType DataType = {read=FDataType, write=SetFDataType, nodefault};
	__property int ParamIndex = {read=FParamIndex, write=FParamIndex, nodefault};
	__property bool IsNull = {read=FIsNull, write=FIsNull, nodefault};
	__property AnsiString Name = {read=FName, write=SetFName};
	__property AnsiString Value = {read=FTextValue, write=SetFValue};
};


class PASCALIMPLEMENTATION TSqlitePassQueryDef : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TSqlitePassQueryDefs* FQueryDefs;
	TSqlitePassDatabaseAttached* FAttachedDatabase;
	AnsiString FQueryName;
	AnsiString FSql;
	Db::TFieldDefs* FFieldDefs;
	TSqlitePassParams* FParams;
	bool __fastcall GetAttached(void);
	AnsiString __fastcall GetQueryFullName();
	
public:
	__fastcall TSqlitePassQueryDef(TSqlitePassQueryDefs* Owner);
	__fastcall virtual ~TSqlitePassQueryDef(void);
	void __fastcall Assign(const TSqlitePassQueryDef* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	__property bool Attached = {read=GetAttached, nodefault};
	void __fastcall DeleteQuery(void);
	void __fastcall RenameAs(AnsiString NewName);
	__property AnsiString QueryName = {read=FQueryName};
	__property AnsiString QueryFullName = {read=GetQueryFullName};
	__property AnsiString Sql = {read=FSql};
	__property TSqlitePassParams* Params = {read=FParams};
	__property Db::TFieldDefs* Fields = {read=FFieldDefs};
};


#pragma option push -b-
enum TSqlitePassIndexDirection { cidAscending, cidDescending, cidUnknown };
#pragma option pop

class DELPHICLASS TSqlitePassIndexColumn;
class PASCALIMPLEMENTATION TSqlitePassIndexColumn : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	int Position;
	AnsiString CollatingSequence;
	AnsiString ColumnName;
	TSqlitePassIndexDirection Direction;
	void __fastcall Assign(const TSqlitePassIndexColumn* Source);
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TSqlitePassIndexColumn(void) : System::TObject() { }
	#pragma option pop
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TSqlitePassIndexColumn(void) { }
	#pragma option pop
	
};


class DELPHICLASS TSqlitePassIndexColumns;
class PASCALIMPLEMENTATION TSqlitePassIndexColumns : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassIndexColumn* operator[](int Index) { return Items[Index]; }
	
private:
	TSqlitePassIndex* FIndex;
	
protected:
	void __fastcall ClearAndFreeItems(void);
	HIDESBASE TSqlitePassIndexColumn* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassIndexColumn* Value);
	
public:
	__fastcall TSqlitePassIndexColumns(TSqlitePassIndex* Owner);
	__fastcall virtual ~TSqlitePassIndexColumns(void);
	void __fastcall Assign(const TSqlitePassIndexColumns* Source);
	void __fastcall AddColumns(const TSqlitePassIndexColumns* Source);
	TSqlitePassIndexColumn* __fastcall ColumnByName(const AnsiString Value);
	TSqlitePassIndexColumn* __fastcall FindColumn(const AnsiString Value);
	__property TSqlitePassIndexColumn* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
	__property Count ;
};


class PASCALIMPLEMENTATION TSqlitePassIndex : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TSqlitePassDatabaseAttached* FAttachedDatabase;
	AnsiString FTableName;
	AnsiString FIndexName;
	bool FOverwriteIfExists;
	TSqlitePassIndexColumns* FColumns;
	AnsiString FSql;
	bool FUnique;
	AnsiString __fastcall GetIndexFullName();
	bool __fastcall GetAttached(void);
	void __fastcall SetFIndexName(AnsiString value);
	
public:
	__fastcall TSqlitePassIndex(void);
	__fastcall virtual ~TSqlitePassIndex(void);
	void __fastcall Assign(const TSqlitePassIndex* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	__property bool Attached = {read=GetAttached, nodefault};
	__property TSqlitePassIndexColumns* Columns = {read=FColumns, write=FColumns};
	__property AnsiString IndexName = {read=FIndexName, write=SetFIndexName};
	__property AnsiString IndexFullName = {read=GetIndexFullName};
	__property AnsiString Sql = {read=FSql};
	__property AnsiString TableName = {read=FTableName, write=FTableName};
	__property bool Unique = {read=FUnique, write=FUnique, nodefault};
};


class DELPHICLASS TSqlitePassDatabaseIndex;
class PASCALIMPLEMENTATION TSqlitePassDatabaseIndex : public TSqlitePassIndex 
{
	typedef TSqlitePassIndex inherited;
	
private:
	TSqlitePassDatabaseIndexDefs* FIndexDefs;
	
public:
	__fastcall TSqlitePassDatabaseIndex(TSqlitePassDatabaseIndexDefs* Owner);
	__fastcall virtual ~TSqlitePassDatabaseIndex(void);
	void __fastcall Reindex(void);
	void __fastcall DeleteIndex(void);
};


class PASCALIMPLEMENTATION TSqlitePassView : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TSqlitePassDatabaseAttached* FAttachedDatabase;
	TSqlitePassViews* FViews;
	AnsiString FSqlCreateStmt;
	AnsiString FSqlSelectStmt;
	AnsiString FViewName;
	bool FTemp;
	bool __fastcall GetAttached(void);
	AnsiString __fastcall GetViewFullName();
	
public:
	__fastcall TSqlitePassView(TSqlitePassViews* Owner);
	__fastcall virtual ~TSqlitePassView(void);
	void __fastcall Assign(const TSqlitePassView* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	__property bool Attached = {read=GetAttached, nodefault};
	void __fastcall DeleteView(void);
	__property AnsiString SqlCreateStmt = {read=FSqlCreateStmt};
	__property AnsiString SqlSelectStmt = {read=FSqlSelectStmt};
	__property AnsiString ViewName = {read=FViewName};
	__property AnsiString ViewFullName = {read=GetViewFullName};
};


class PASCALIMPLEMENTATION TSqlitePassTrigger : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TSqlitePassDatabaseAttached* FAttachedDatabase;
	TSqlitePassTriggers* FTriggers;
	AnsiString FSql;
	bool FTemporary;
	AnsiString FTriggerName;
	bool __fastcall GetAttached(void);
	AnsiString __fastcall GetTriggerFullName();
	
public:
	__fastcall TSqlitePassTrigger(TSqlitePassTriggers* Owner);
	__fastcall virtual ~TSqlitePassTrigger(void);
	void __fastcall Assign(const TSqlitePassTrigger* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall DeleteTrigger(void);
	__property bool Attached = {read=GetAttached, nodefault};
	__property AnsiString Sql = {read=FSql};
	__property bool Temporary = {read=FTemporary, write=FTemporary, nodefault};
	__property AnsiString TriggerName = {read=FTriggerName, write=FTriggerName};
	__property AnsiString TriggerFullName = {read=GetTriggerFullName};
};


typedef void __fastcall (__closure *TSqlitePassDatasetExportProgressEvent)(int Current, int Total);

typedef void __fastcall (__closure *TSqlitePassDatasetImportProgressEvent)(int Current);

class DELPHICLASS TSqlitePassBlobStream;
class PASCALIMPLEMENTATION TSqlitePassBlobStream : public Classes::TMemoryStream 
{
	typedef Classes::TMemoryStream inherited;
	
private:
	int FActiveRecIndex;
	Db::TBlobField* FField;
	TSqlitePassDataset* FDataSet;
	bool FOpened;
	bool FModified;
	Classes::TMemoryStream* FRecBlobStream;
	
public:
	__fastcall TSqlitePassBlobStream(Db::TBlobField* Field, Db::TBlobStreamMode Mode);
	__fastcall virtual ~TSqlitePassBlobStream(void);
	virtual int __fastcall Read(void *Buffer, int Count);
	virtual int __fastcall Write(const void *Buffer, int Count);
};


class PASCALIMPLEMENTATION TSqlitePassDatasetIndex : public TSqlitePassIndex 
{
	typedef TSqlitePassIndex inherited;
	
private:
	TSqlitePassDatasetIndexDefs* FIndexDefs;
	
public:
	__fastcall TSqlitePassDatasetIndex(TSqlitePassDatasetIndexDefs* Owner);
	__fastcall virtual ~TSqlitePassDatasetIndex(void);
	void __fastcall Reindex(void);
	void __fastcall DeleteIndex(void);
};


class DELPHICLASS TSqlitePassTranslator_Kexi;
class PASCALIMPLEMENTATION TSqlitePassTranslator_Kexi : public TSqlitePassTranslator 
{
	typedef TSqlitePassTranslator inherited;
	
public:
	HIDESBASE void __fastcall ConvertNativeFieldTypeToPascalFieldType(TSqlitePassTableFieldDef* FieldDef);
	AnsiString __fastcall GetNativeFieldTypeName(Word FieldType);
	virtual void __fastcall GetDatabaseTableFieldDefs(TSqlitePassTableDef* TableDef, TSqlitePassRecordset* FieldDefsRecordset);
	virtual void __fastcall GetDatabaseQueryDefs(TSqlitePassQueryDefs* QueryDefs);
	virtual bool __fastcall IsSystemTable(AnsiString TableName);
public:
	#pragma option push -w-inl
	/* TSqlitePassTranslator.Create */ inline __fastcall TSqlitePassTranslator_Kexi(TSqlitePassDatabase* Owner) : TSqlitePassTranslator(Owner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TSqlitePassTranslator.Destroy */ inline __fastcall virtual ~TSqlitePassTranslator_Kexi(void) { }
	#pragma option pop
	
};


class DELPHICLASS TSqlitePassTranslator_SqliteExpert;
class PASCALIMPLEMENTATION TSqlitePassTranslator_SqliteExpert : public TSqlitePassTranslator 
{
	typedef TSqlitePassTranslator inherited;
	
public:
	#pragma option push -w-inl
	/* TSqlitePassTranslator.Create */ inline __fastcall TSqlitePassTranslator_SqliteExpert(TSqlitePassDatabase* Owner) : TSqlitePassTranslator(Owner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TSqlitePassTranslator.Destroy */ inline __fastcall virtual ~TSqlitePassTranslator_SqliteExpert(void) { }
	#pragma option pop
	
};


class DELPHICLASS TSqlitePassTranslator_SqliteAdmin;
class PASCALIMPLEMENTATION TSqlitePassTranslator_SqliteAdmin : public TSqlitePassTranslator 
{
	typedef TSqlitePassTranslator inherited;
	
public:
	#pragma option push -w-inl
	/* TSqlitePassTranslator.Create */ inline __fastcall TSqlitePassTranslator_SqliteAdmin(TSqlitePassDatabase* Owner) : TSqlitePassTranslator(Owner) { }
	#pragma option pop
	#pragma option push -w-inl
	/* TSqlitePassTranslator.Destroy */ inline __fastcall virtual ~TSqlitePassTranslator_SqliteAdmin(void) { }
	#pragma option pop
	
};


#pragma option push -b-
enum SqlitePassDbo__85 { toClean, toUpperCase };
#pragma option pop

typedef Set<SqlitePassDbo__85, toClean, toUpperCase>  TSqlitePassSQLTokenizerOptions;

typedef Set<TSqlitePassSQLTokenType, ttKeyword, ttUnknown>  TSqlitePassSQLTokenizerCleanOptions;

class DELPHICLASS TSqlitePassSQLToken;
class PASCALIMPLEMENTATION TSqlitePassSQLToken : public System::TObject 
{
	typedef System::TObject inherited;
	
public:
	AnsiString Text;
	TSqlitePassSQLTokenType TokenType;
	int NestingLevel;
	AnsiString __fastcall TokenTypeAsText();
	__fastcall TSqlitePassSQLToken(void);
public:
	#pragma option push -w-inl
	/* TObject.Destroy */ inline __fastcall virtual ~TSqlitePassSQLToken(void) { }
	#pragma option pop
	
};


class DELPHICLASS TSqlitePassSQLTokens;
class PASCALIMPLEMENTATION TSqlitePassSQLTokens : public Sqlitepassutils::TSqlitePassObjectList 
{
	typedef Sqlitepassutils::TSqlitePassObjectList inherited;
	
public:
	TSqlitePassSQLToken* operator[](int Index) { return Items[Index]; }
	
private:
	HIDESBASE TSqlitePassSQLToken* __fastcall GetItem(int Index);
	HIDESBASE void __fastcall SetItem(int Index, const TSqlitePassSQLToken* Value);
	void __fastcall ClearAndFreeItems(void);
	
public:
	__fastcall virtual ~TSqlitePassSQLTokens(void);
	__property Count ;
	__property TSqlitePassSQLToken* Items[int Index] = {read=GetItem, write=SetItem/*, default*/};
public:
	#pragma option push -w-inl
	/* TObject.Create */ inline __fastcall TSqlitePassSQLTokens(void) : Sqlitepassutils::TSqlitePassObjectList() { }
	#pragma option pop
	
};


class PASCALIMPLEMENTATION TSqlitePassSQLTokenizer : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	AnsiString FText;
	int FCurrentTokenIndex;
	char FNestingCharStack[256];
	int FNestingLevel;
	TSqlitePassSQLTokens* FTokens;
	int __fastcall GetFCount(void);
	TSqlitePassSQLToken* __fastcall GetFCurrentToken(void);
	bool __fastcall GetFEOF(void);
	AnsiString __fastcall GetFText();
	void __fastcall SetFText(const AnsiString Value);
	void __fastcall Clean(const TSqlitePassSQLTokenizerCleanOptions &Options);
	
public:
	__fastcall TSqlitePassSQLTokenizer(void);
	__fastcall virtual ~TSqlitePassSQLTokenizer(void);
	bool __fastcall First(void);
	bool __fastcall Prior(void)/* overload */;
	bool __fastcall Prior(TSqlitePassSQLTokenType TokenType)/* overload */;
	bool __fastcall Next(void)/* overload */;
	bool __fastcall Next(TSqlitePassSQLTokenType TokenType)/* overload */;
	bool __fastcall Last(void);
	void __fastcall Replace(AnsiString OldText, AnsiString NewText);
	bool __fastcall Locate(AnsiString TokenText)/* overload */;
	bool __fastcall Locate(TSqlitePassSQLTokenType TokenType)/* overload */;
	void __fastcall InsertBefore(AnsiString TokenText, AnsiString InsertedStmt);
	void __fastcall InsertAfter(AnsiString TokenText, AnsiString InsertedStmt);
	void __fastcall RemoveBefore(AnsiString TokenText);
	void __fastcall RemoveAfter(AnsiString TokenText);
	void __fastcall Remove(AnsiString TokenText);
	void __fastcall Tokenize(TSqlitePassSQLTokenizerOptions Options = System::Set<SqlitePassDbo__85, toClean, toUpperCase> () );
	AnsiString __fastcall GetTextAfter(TSqlitePassSQLTokenType TokenType);
	AnsiString __fastcall GetTextBefore(TSqlitePassSQLTokenType TokenType);
	__property AnsiString Text = {read=GetFText, write=SetFText};
	__property TSqlitePassSQLToken* Token = {read=GetFCurrentToken};
	__property int TokenIndex = {read=FCurrentTokenIndex, nodefault};
	__property bool EOF = {read=GetFEOF, nodefault};
	__property int Count = {read=GetFCount, nodefault};
};


class PASCALIMPLEMENTATION TSqlitePassSQLStmtDef : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TSqlitePassDatabaseAttached* FAttachedDatabase;
	TSqlitePassSQLStmtDefs* FSQLStmtDefs;
	AnsiString FSQLText;
	AnsiString FSQLStmtName;
	bool __fastcall GetAttached(void);
	AnsiString __fastcall GetSQLStmtFullName();
	StmtType __fastcall GetStmtType(void);
	
public:
	__fastcall TSqlitePassSQLStmtDef(TSqlitePassSQLStmtDefs* SQLStmts);
	__fastcall virtual ~TSqlitePassSQLStmtDef(void);
	void __fastcall Assign(const TSqlitePassSQLStmtDef* Source, TSqlitePassDatabaseAttached* AttachedDatabase = (TSqlitePassDatabaseAttached*)(0x0));
	void __fastcall DeleteSQLStmt(void);
	__property bool Attached = {read=GetAttached, nodefault};
	__property AnsiString SQL = {read=FSQLText, write=FSQLText};
	__property AnsiString SQLStmtName = {read=FSQLStmtName, write=FSQLStmtName};
	__property AnsiString SQLStmtFullName = {read=GetSQLStmtFullName};
	__property StmtType SQLType = {read=GetStmtType, nodefault};
};


#pragma pack(push, 4)
struct TSqlitePassDataReader
{
	int BufferSize;
	TSqlitePassSqliteValueToValueBuffer Load;
} ;
#pragma pack(pop)

typedef DynamicArray<TSqlitePassDataReader >  SqlitePassDbo__96;

typedef DynamicArray<int >  SqlitePassDbo__07;

class PASCALIMPLEMENTATION TSqlitePassRecordset : public System::TObject 
{
	typedef System::TObject inherited;
	
private:
	TSqlitePassDatabase* FDatabase;
	TSqlitePassDataset* FDataset;
	DynamicArray<TSqlitePassDataReader >  FDataReader;
	Classes::TList* FRecordsMemoryBlocs;
	int FRecordsUsedInMemoryBloc;
	int FRecordMemoryBlocCapacity;
	char * *FRecords;
	int FRecordsCapacity;
	int FRecordsCount;
	Sqlitepassutils::TSqlitePassList* FRecycledRecords;
	Sqlitepassutils::TSqlitePassAnsiStringList* FAnsiStrings;
	Sqlitepassutils::TSqlitePassIntegerList* FRecycledAnsiStrings;
	Sqlitepassutils::TSqlitePassWideStringList* FWideStrings;
	Sqlitepassutils::TSqlitePassIntegerList* FRecycledWideStrings;
	Classes::TList* FMemoryStreams;
	Sqlitepassutils::TSqlitePassIntegerList* FRecycledMemoryStreams;
	Word FBookMarkDataOffset;
	Word FRecordStateOffset;
	Word FRowIdsOffset;
	Word FFieldsValuesOffset;
	int FColumnsCount;
	int FDataFieldsCount;
	unsigned FCalcFieldsCount;
	unsigned FFieldsCount;
	int FRowidTablesCount;
	DynamicArray<int >  FInternalFieldsValueOffset;
	int FRecordSize;
	bool FRecordsChanged;
	bool FActive;
	char *FActiveRecordOldValues;
	int FOldActiveRecordIndex;
	int FCurrentRecordIndex;
	Db::TGetResult MoveState;
	bool FDirectPost;
	void __fastcall PrepareDataReader(void);
	int __fastcall SetFRecordSize(void);
	void __fastcall SetFRecordsCapacity(const int NewCapacity);
	int __fastcall GetFieldSize(const Db::TFieldType DataType);
	void __fastcall GetRecords(void * StmtHandle);
	void __fastcall BuildAllRecordsList(void);
	void __fastcall ExchangeRecords(const int RecordIndex1, const int RecordIndex2);
	void __fastcall CopyRecord(const char * Source, const char * Dest);
	int __fastcall GetActiveRecordIndex(void);
	Db::TBookmarkFlag __fastcall GetBookMarkFlag(const int RecordIndex);
	void __fastcall SetBookMarkFlag(const int RecordIndex, const Db::TBookmarkFlag Value);
	unsigned __fastcall GetBookMarkData(const int RecordIndex);
	void __fastcall SetBookMarkData(const int RecordIndex, const unsigned Value);
	bool __fastcall GetRecordState(const char * RecordBuffer, const TSqlitePassRecordStateType RecordStateType, const TSqlitePassRecordStateValue Value)/* overload */;
	bool __fastcall GetRecordState(const int RecordIndex, const TSqlitePassRecordStateType RecordStateType, const TSqlitePassRecordStateValue Value)/* overload */;
	void __fastcall SetRecordState(const char * RecordBuffer, const TSqlitePassRecordStateType RecordStateType, const TSqlitePassRecordStateValue Value)/* overload */;
	void __fastcall SetRecordState(const int RecordIndex, const TSqlitePassRecordStateType RecordStateType, const TSqlitePassRecordStateValue Value)/* overload */;
	void __fastcall ResetRecordState(const char * RecordBuffer);
	void __fastcall DisableRemainingRecords(void);
	__int64 __fastcall GetRowId(const char * RecordBuffer, const Word TableNo)/* overload */;
	__int64 __fastcall GetRowId(const int RecordIndex, const Word TableNo)/* overload */;
	void __fastcall SetRowId(const char * RecordBuffer, const Word TableNo, const __int64 Value)/* overload */;
	void __fastcall SetRowId(const int RecordIndex, const Word TableNo, const __int64 Value)/* overload */;
	char * __fastcall GetFieldValueBuffer(const int RecordIndex, const int FieldIndex)/* overload */;
	char * __fastcall GetFieldValueBuffer(const char * RecordBuffer, const int FieldIndex)/* overload */;
	AnsiString __fastcall GetFieldAsAnsiString(const char * FieldValueBuffer)/* overload */;
	AnsiString __fastcall GetFieldAsAnsiString(const int RecordIndex, const int FieldIndex)/* overload */;
	void __fastcall SetFieldAsAnsiString(const char * FieldValueBuffer, const AnsiString Value)/* overload */;
	void __fastcall SetFieldAsAnsiString(const int RecordIndex, const int FieldIndex, const AnsiString Value)/* overload */;
	WideString __fastcall GetFieldAsWideString(const char * FieldValueBuffer)/* overload */;
	WideString __fastcall GetFieldAsWideString(const int RecordIndex, const int FieldIndex)/* overload */;
	void __fastcall SetFieldAsWideString(const char * FieldValueBuffer, const WideString Value)/* overload */;
	void __fastcall SetFieldAsWideString(const int RecordIndex, const int FieldIndex, const WideString Value)/* overload */;
	Classes::TMemoryStream* __fastcall GetFieldAsBlob(const int RecordIndex, const int FieldIndex)/* overload */;
	Classes::TMemoryStream* __fastcall GetFieldAsBlob(const char * RecordBuffer, const int FieldIndex)/* overload */;
	Classes::TMemoryStream* __fastcall GetFieldAsBlob(const char * FieldBuffer)/* overload */;
	Variant __fastcall GetFieldAsVariant(const int RecordIndex, const int FieldIndex, const Db::TField* Field);
	bool __fastcall FieldIsNull(const int RecordIndex, const int FieldIndex)/* overload */;
	bool __fastcall FieldIsNull(const char * RecordBuffer, const int FieldIndex)/* overload */;
	bool __fastcall FieldIsNull(const char * FieldValueBuffer)/* overload */;
	void __fastcall SetFieldNullValue(const int RecordIndex, const int FieldIndex, const bool Value)/* overload */;
	void __fastcall SetFieldNullValue(const char * FieldValueBuffer, const bool Value)/* overload */;
	void __fastcall SetFieldsNullValue(const int RecordIndex);
	bool __fastcall FieldWasModified(const int RecordIndex, const int FieldIndex)/* overload */;
	bool __fastcall FieldWasModified(const char * RecordBuffer, const int FieldIndex)/* overload */;
	bool __fastcall FieldWasModified(const char * FieldValueBuffer)/* overload */;
	void __fastcall SetFieldWasModifiedValue(const int RecordIndex, const int FieldIndex, const bool Value)/* overload */;
	void __fastcall SetFieldWasModifiedValue(const char * FieldValueBuffer, const bool Value)/* overload */;
	void __fastcall ResetFieldsState(const int RecordIndex)/* overload */;
	void __fastcall ResetFieldsState(const char * RecordBuffer)/* overload */;
	AnsiString __fastcall GetTextItem(const int RecordIndex, const int FieldIndex);
	void __fastcall SetTextItem(const int RecordIndex, const int FieldIndex, const AnsiString Value);
	void __fastcall AddTextItem(const int RecordIndex, const int FieldIndex, const AnsiString Value);
	void __fastcall ShowAllRecords(void);
	void __fastcall ShowFilteredRecords(void);
	void __fastcall BuildIndexFromRecordsList(TSqlitePassInMemoryIndex* InMemoryIndex, const bool Ascending);
	void __fastcall BuildRecordsListFromIndex(TSqlitePassInMemoryIndex* InMemoryIndex, const bool Ascending);
	void __fastcall SortRecords(TSqlitePassInMemoryIndexInfos &SortedFields, Sqlitepassutils::PRecBufferList RecordBufferList);
	void __fastcall _AddRecord(void);
	int __fastcall AddRecord(void);
	int __fastcall AddTempRecord(void);
	void __fastcall ClearRecord(int Index);
	void __fastcall InsertRecord(int Index);
	void __fastcall DeleteRecord(int Index);
	void __fastcall PostRecord(void);
	void __fastcall Cancel(void);
	int __fastcall _AddMemoryStream(const char * FieldValueBuffer)/* overload */;
	int __fastcall AddMemoryStream(const char * FieldValueBuffer)/* overload */;
	int __fastcall AddMemoryStream(const int RecordIndex, const int FieldIndex)/* overload */;
	void __fastcall ClearMemoryStream(const char * FieldValueBuffer)/* overload */;
	void __fastcall ClearMemoryStream(const int RecordIndex, const int FieldIndex)/* overload */;
	void __fastcall _AddAnsiString(const char * FieldValueBuffer, const AnsiString StrValue);
	void __fastcall AddAnsiString(const char * FieldValueBuffer, const AnsiString StrValue)/* overload */;
	void __fastcall AddAnsiString(const int RecordIndex, const int FieldIndex, const AnsiString StrValue)/* overload */;
	void __fastcall ClearAnsiString(const char * FieldValueBuffer)/* overload */;
	void __fastcall ClearAnsiString(const int RecordIndex, const int FieldIndex)/* overload */;
	void __fastcall _AddWideString(const char * FieldValueBuffer, const WideString StrValue)/* overload */;
	void __fastcall AddWideString(const char * FieldValueBuffer, const WideString StrValue)/* overload */;
	void __fastcall AddWideString(const int RecordIndex, const int FieldIndex, const WideString StrValue)/* overload */;
	void __fastcall ClearWideString(const char * FieldValueBuffer)/* overload */;
	void __fastcall ClearWideString(const int RecordIndex, const int FieldIndex)/* overload */;
	void __fastcall SaveActiveRecordOldValues(void);
	void __fastcall RestoreActiveRecordOldValues(void);
	void __fastcall ClearActiveRecordOldValues(void);
	void __fastcall Open(const AnsiString Sql, const Word TablesCount = (Word)(0x0))/* overload */;
	void __fastcall Open(const void * SqlStmtHandle, const Word TablesCount = (Word)(0x0))/* overload */;
	void __fastcall Close(void)/* overload */;
	void __fastcall ClearMemory(void);
	void __fastcall First(void);
	void __fastcall Prior(void);
	void __fastcall Next(void);
	void __fastcall Last(void);
	void __fastcall MoveBy(int Offset);
	void __fastcall GotoRecord(char * RecBufferBookmark);
	__property bool Active = {read=FActive, nodefault};
	__property int RecordsCount = {read=FRecordsCount, nodefault};
	__property int ActiveRecordIndex = {read=GetActiveRecordIndex, nodefault};
	__property int CurrentRecordIndex = {read=FCurrentRecordIndex, write=FCurrentRecordIndex, nodefault};
	__property AnsiString ItemsTextValue[int RecordIndex][int FieldIndex] = {read=GetTextItem, write=SetTextItem};
	
public:
	__fastcall TSqlitePassRecordset(TSqlitePassDataset* Dataset)/* overload */;
	__fastcall TSqlitePassRecordset(TSqlitePassDatabase* Database)/* overload */;
	__fastcall virtual ~TSqlitePassRecordset(void);
};


//-- var, const, procedure ---------------------------------------------------
extern PACKAGE bool __fastcall AcceptDummyValue(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptValueCmpNull(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptValueCmpNotNull(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptIntegerValueCmpEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptIntegerValueCmpNotEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptIntegerValueCmpGreater(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptIntegerValueCmpGreaterOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptIntegerValueCmpLesserOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptIntegerValueCmpLesser(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptInt64ValueCmpEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptInt64ValueCmpNotEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptInt64ValueCmpGreater(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptInt64ValueCmpGreaterOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptInt64ValueCmpLesserOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptInt64ValueCmpLesser(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptDoubleValueCmpEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptDoubleValueCmpNotEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptDoubleValueCmpGreater(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptDoubleValueCmpGreaterOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptDoubleValueCmpLesserOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptDoubleValueCmpLesser(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptCurrencyValueCmpEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptCurrencyValueCmpNotEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptCurrencyValueCmpGreater(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptCurrencyValueCmpGreaterOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptCurrencyValueCmpLesserOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptCurrencyValueCmpLesser(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWordBoolValueCmpEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWordBoolValueCmpNotEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringCsValueCmpEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringCsValueCmpNotEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringCsValueCmpGreater(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringCsValueCmpGreaterOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringCsValueCmpLesserOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringCsValueCmpLesser(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringCsValueCmpStartWith(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringCsValueCmpEndWith(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringCsValueCmpAnywhere(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringValueCmpEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringValueCmpNotEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringValueCmpGreater(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringValueCmpGreaterOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringValueCmpLesserOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringValueCmpLesser(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringValueCmpStartWith(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringValueCmpEndWith(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptAnsiStringValueCmpAnywhere(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringCsValueCmpEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringCsValueCmpNotEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringCsValueCmpGreater(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringCsValueCmpGreaterOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringCsValueCmpLesserOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringCsValueCmpLesser(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringCsValueCmpStartWith(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringCsValueCmpEndWith(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringCsValueCmpAnywhere(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringValueCmpEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringValueCmpNotEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringValueCmpGreater(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringValueCmpGreaterOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringValueCmpLesserOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringValueCmpLesser(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringValueCmpStartWith(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringValueCmpEndWith(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptWideStringValueCmpAnywhere(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE AnsiString __fastcall GetMemoValue(const TSqlitePassRecordset* Recordset, const void * FieldValue);
extern PACKAGE bool __fastcall AcceptMemoCsValueCmpEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoCsValueCmpNotEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoCsValueCmpGreater(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoCsValueCmpGreaterOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoCsValueCmpLesserOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoCsValueCmpLesser(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoCsValueCmpStartWith(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoCsValueCmpEndWith(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoCsValueCmpAnywhere(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoValueCmpEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoValueCmpNotEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoValueCmpGreater(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoValueCmpGreaterOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoValueCmpLesserOrEqual(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoValueCmpLesser(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoValueCmpStartWith(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoValueCmpEndWith(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE bool __fastcall AcceptMemoValueCmpAnywhere(const TSqlitePassRecordset* Recordset, const void * FieldValue, const void * FilterValue);
extern PACKAGE void __fastcall BindDummyFieldValueBufferToSqliteValue(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindWordBoolFieldValueBufferToSqliteValue(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindWordBoolFieldValueBufferToSqliteValueAsText(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindIntegerFieldValueBufferToSqliteValue(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindInt64FieldValueBufferToSqliteValue(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindDoubleFieldValueBufferToSqliteValue(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindCurrencyFieldValueBufferToSqliteValue(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindDateFieldValueBufferToSqliteValueAsText(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindTimeFieldValueBufferToSqliteValueAsText(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindDateTimeFieldValueBufferToSqliteValueAsText(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindDateTimeFieldValueBufferToSqliteValueAsJulianDateTime(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindDateTimeFieldValueBufferToSqliteValueAsUnixDateTime(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindDateTimeFieldValueBufferToSqliteValueAsMacDateTime(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindAnsiStringFieldValueBufferToSqliteValueAsUTF8(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindUTF8AnsiStringFieldValueBufferToSqliteValueAsUTF8(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindUTF8AnsiStringFieldValueBufferToSqliteValueAsUTF16(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindWideStringFieldValueBufferToSqliteValueAsUTF16(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall BindBlobFieldValueBufferToSqliteValue(const TSqlitePassDatabase* Database, const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int PreparedStmtFieldNo);
extern PACKAGE void __fastcall SqliteValueToDummy(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueToWordBool(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueTextToWordBool(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueToInteger(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueToInt64(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueToDouble(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueToCurrency(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueTextToDate(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueTextToTime(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueJulianDateTimeToDouble(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueDateTimeTextToDouble(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueUnixDateTimeToDouble(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueMacDateTimeToDouble(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueToRawString(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueToAnsiString(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueToUTF8AnsiString(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueToRawWideString(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueToUTF16WideString(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE void __fastcall SqliteValueToBlob(const TSqlitePassRecordset* Recordset, const char * FieldValueBuffer, const void * PreparedStmt, const int ColumnIndex);
extern PACKAGE int __fastcall CompareRecord(TSqlitePassRecordset* Recordset, TMidRecordBuffers &MidRecordBuffers, TSqlitePassInMemoryIndexInfos &SortedFields, char * RecordBuffer);
extern PACKAGE void __fastcall InsertionSort(TSqlitePassRecordset* Recordset, Sqlitepassutils::PRecBufferList RecordBufferList, TMidRecordBuffers &MidRecordBuffers, TSqlitePassInMemoryIndexInfos &SortedFields, const int Lo, const int Hi);
extern PACKAGE int __fastcall CompareDummyValue(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareWordBoolValueDesc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareIntegerValueDesc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareInt64ValueDesc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareDoubleValueDesc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareCurrencyValueDesc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareAnsiStringValueDesc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareWideStringValueDesc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareMemoValueDesc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareWordBoolValueAsc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareIntegerValueAsc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareInt64ValueAsc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareDoubleValueAsc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareCurrencyValueAsc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareAnsiStringValueAsc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareWideStringValueAsc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);
extern PACKAGE int __fastcall CompareMemoValueAsc(const TSqlitePassRecordset* Recordset, const void * FieldValueBuffer1, const void * FieldValueBuffer2);

}	/* namespace Sqlitepassdbo */
using namespace Sqlitepassdbo;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SqlitePassDbo
