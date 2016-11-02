// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SqlitePassConst.pas' rev: 6.00

#ifndef SqlitePassConstHPP
#define SqlitePassConstHPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sqlitepassconst
{
//-- type declarations -------------------------------------------------------
typedef AnsiString SqlitePassConst__1[8];

typedef AnsiString SqlitePassConst__2[4];

typedef AnsiString SqlitePassConst__3[5];

typedef AnsiString SqlitePassConst__4[5];

typedef AnsiString SqlitePassConst__5[8];

typedef AnsiString SqlitePassConst__6[44];

typedef AnsiString SqlitePassConst__7[8];

//-- var, const, procedure ---------------------------------------------------
#define SqlitePassPackageVersion "0.55"
#define SqlitePassDatabaseVersion "0.55"
#define SqlitePassDatasetVersion "0.55"
#define SqlitePassStorageVersion "0.55"
#define DefaultSQLiteLibrary "sqlite3.dll"
static const char SqlitePassPathSeparator = '\x5c';
static const Shortint DefaultStringFieldSize = 0x32;
#define JulianEpoch  (-2.415018E+06)
#define UnixEpoch  (2.556900E+04)
#define SqlitePassDbSettingsTable "SQLitePass__DbSettings"
#define SqlitePassSQLStmtDefsTable "SQLitePass__SQLStmts"
static const Shortint rsEnabledFlag = 0x0;
static const Shortint rsVisibleFlag = 0x1;
static const Shortint rsModifiedFlag = 0x2;
static const Shortint rsInsertedFlag = 0x3;
static const Shortint rsDeletedFlag = 0x4;
static const Shortint rsEnabled = 0x0;
static const Shortint rsNotEnabled = 0x1;
static const Shortint rsInserted = 0x1;
static const Shortint rsNotInserted = 0x0;
static const Shortint rsModified = 0x1;
static const Shortint rsNotModified = 0x0;
static const Shortint rsDeleted = 0x1;
static const Shortint rsNotDeleted = 0x0;
static const Shortint rsVisible = 0x0;
static const Shortint rsNotVisible = 0x1;
static const Shortint fsNullFlag = 0x0;
static const Shortint fsModifiedFlag = 0x1;
static const Shortint fsNull = 0x1;
static const Shortint fsNotNull = 0x0;
static const Shortint fsModified = 0x1;
static const Shortint fsNotModified = 0x0;
static const Shortint vlSilent = 0x0;
static const Shortint vlLog = 0x1;
static const Shortint vlShow = 0x2;
static const Shortint vlLogAndShow = 0x3;
static const char kwSQLEnd = '\x3b';
#define KwASAlias "AS"
static const char KwSpace = '\x20';
#define KwAnd "AND"
static const char kwLineBreak = '\xa';
static const char KwLineReturn = '\xd';
#define kwLineEnd "\r\n"
#define kwCreate "CREATE"
#define kwCreateTable "CREATE TABLE"
#define kwCreateTempTable "CREATE TEMP TABLE"
#define kwCreateTemporaryTable "CREATE TEMPORARY TABLE"
#define kwSelect "SELECT"
#define kwAll "ALL"
#define kwDistinct "DISTINCT"
#define kwFrom "FROM"
#define kwWhere "WHERE"
#define kwGroupBy "GROUP BY"
#define kwHaving "HAVING"
#define kwOrderBy "ORDER BY"
#define kwLimit "LIMIT"
#define kwLike "LIKE"
static const char KwAllFields = '\x2a';
static const char kwComma = '\x2c';
static const char kwDot = '\x2e';
static const char kwBraceOpen = '\x28';
static const char kwBraceClose = '\x29';
static const char kwEqual = '\x3d';
static const char kwBracketOpen = '\x5b';
static const char kwBracketClose = '\x5d';
static const char kwSingleQuote = '\x27';
static const char kwGraveQuote = '\x60';
static const char kwDoubleQuote = '\x22';
extern PACKAGE AnsiString SelectStmtKeywords[8];
extern PACKAGE AnsiString SelectStmtTableDefs[4];
extern PACKAGE AnsiString SelectStmtFieldDefs[5];
#define kwInsert "INSERT"
#define kwUpdate "UPDATE"
#define kwDelete "DELETE"
#define kwPragmaTableInfo "PRAGMA TABLE_INFO"
extern PACKAGE AnsiString QuoteCharsArray[5];
#define QuoteChars (System::Set<char, 0, 255> () << '\x22' << '\x27' << '\x42' << '\x47' )
#define BeforeIdentifierSeparator (System::Set<char, 0, 255> () << '\xa' << '\x20' << '\x2a' )
#define AfterIdentifierSeparator (System::Set<char, 0, 255> () << '\xd' << '\x20' << '\x2d' )
extern PACKAGE AnsiString StmtTypeKeywords[8];
extern PACKAGE System::Set<char, 0, 255>  IdentifierChar;
extern PACKAGE AnsiString SqlitePassSQLTokenTypeAsString[44];
extern PACKAGE AnsiString KexiSystemTables[8];
#define KexiFieldConstraints "NoConstraints,AutoInc,Unique,PrimaryKey,ForeignKey,NotNull"\
	",NotEmpty,Indexed"
#define KexiDb_CreateSQLStmt "CREATE TABLE kexi__db (db_property Text(32), db_value CLOB"\
	");"
#define KexiParts_CreateSQLStmt "CREATE TABLE kexi__parts (p_id INTEGER PRIMARY KEY, p_name"\
	" Text(200), p_mime Text(200), p_url Text(200));"
#define KexiObjects_CreateSQLStmt "CREATE TABLE kexi__objects (o_id INTEGER PRIMARY KEY, o_ty"\
	"pe Byte UNSIGNED, o_name Text(200), o_caption Text(200), o"\
	"_desc CLOB);"
#define KexiObjectData_CreateSQLStmt "CREATE TABLE kexi__objectdata (o_id Integer UNSIGNED NOT N"\
	"ULL, o_data CLOB, o_sub_id Text(200));"
#define KexiFields_CreateSQLStmt "CREATE TABLE kexi__fields (t_id Integer UNSIGNED, f_type B"\
	"yte UNSIGNED, f_name Text(200), f_length Integer, f_precis"\
	"ion Integer, f_constraints Integer, f_options Integer, f_d"\
	"efault Text(200), f_order Integer, f_caption Text(200), f_"\
	"help CLOB);"
#define KexiBlobs_CreateSQLStmt "CREATE TABLE kexi__blobs (o_id INTEGER PRIMARY KEY, o_data"\
	" BLOB, o_name Text(200), o_caption Text(200), o_mime Text("\
	"200) NOT NULL, o_folder_id Integer UNSIGNED);"

}	/* namespace Sqlitepassconst */
using namespace Sqlitepassconst;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SqlitePassConst
