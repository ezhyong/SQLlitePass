// Borland C++ Builder
// Copyright (c) 1995, 2002 by Borland Software Corporation
// All rights reserved

// (DO NOT EDIT: machine generated header) 'SqlitePassApi_v3.pas' rev: 6.00

#ifndef SqlitePassApi_v3HPP
#define SqlitePassApi_v3HPP

#pragma delphiheader begin
#pragma option push -w-
#pragma option push -Vx
#include <Windows.hpp>	// Pascal unit
#include <SqlitePassUtils.hpp>	// Pascal unit
#include <SqlitePassErrorLang.hpp>	// Pascal unit
#include <SysUtils.hpp>	// Pascal unit
#include <Classes.hpp>	// Pascal unit
#include <SysInit.hpp>	// Pascal unit
#include <System.hpp>	// Pascal unit

//-- user supplied -----------------------------------------------------------

namespace Sqlitepassapi_v3
{
//-- type declarations -------------------------------------------------------
typedef void __cdecl (*TDestructor)(void * data);

typedef int __cdecl (*TExecCallback)(void * Sender, int ColumnsCount, Sqlitepassutils::PPAnsiChar ColumnValues, Sqlitepassutils::PPAnsiChar ColumnNames);

typedef int __cdecl (*TBusyHandler)(void * user, int count);

typedef void __cdecl (*TFuncHandler)(void * context, int nArgs, Sqlitepassutils::PPSqliteValue args);

typedef void __cdecl (*TFuncFinalizer)(void * context);

typedef int __cdecl (*TUserCollation)(void * user, int lenA, char * a, int lenB, char * b);

typedef void __cdecl (*TUserCollationNeeded)(void * user, void * db, int eTextRep, char * zName);

//-- var, const, procedure ---------------------------------------------------
static const Shortint SQLITE_OK = 0x0;
static const Shortint SQLITE_ERROR = 0x1;
static const Shortint SQLITE_INTERNAL = 0x2;
static const Shortint SQLITE_PERM = 0x3;
static const Shortint SQLITE_ABORT = 0x4;
static const Shortint SQLITE_BUSY = 0x5;
static const Shortint SQLITE_LOCKED = 0x6;
static const Shortint SQLITE_NOMEM = 0x7;
static const Shortint SQLITE_READONLY = 0x8;
static const Shortint SQLITE_INTERRUPT = 0x9;
static const Shortint SQLITE_IOERR = 0xa;
static const Shortint SQLITE_CORRUPT = 0xb;
static const Shortint SQLITE_NOTFOUND = 0xc;
static const Shortint SQLITE_FULL = 0xd;
static const Shortint SQLITE_CANTOPEN = 0xe;
static const Shortint SQLITE_PROTOCOL = 0xf;
static const Shortint SQLITE_EMPTY = 0x10;
static const Shortint SQLITE_SCHEMA = 0x11;
static const Shortint SQLITE_TOOBIG = 0x12;
static const Shortint SQLITE_CONSTRAINT = 0x13;
static const Shortint SQLITE_MISMATCH = 0x14;
static const Shortint SQLITE_MISUSE = 0x15;
static const Shortint SQLITE_NOLFS = 0x16;
static const Shortint SQLITE_AUTH = 0x17;
static const Shortint SQLITE_FORMAT = 0x18;
static const Shortint SQLITE_RANGE = 0x19;
static const Shortint SQLITE_NOTADB = 0x1a;
static const Shortint SQLITE_ROW = 0x64;
static const Shortint SQLITE_DONE = 0x65;
static const Shortint SQLITE_INTEGER = 0x1;
static const Shortint SQLITE_FLOAT = 0x2;
static const Shortint SQLITE_TEXT = 0x3;
static const Shortint SQLITE_BLOB = 0x4;
static const Shortint SQLITE_NULL = 0x5;
static const Shortint SQLITE_UTF8 = 0x1;
static const Shortint SQLITE_UTF16LE = 0x2;
static const Shortint SQLITE_UTF16BE = 0x3;
static const Shortint SQLITE_UTF16 = 0x4;
static const Shortint SQLITE_ANY = 0x5;
static const Shortint SQLITE_STATIC = 0x0;
static const Shortint SQLITE_TRANSIENT = 0xffffffff;
static const Shortint SQLITE_OPEN_READONLY = 0x1;
static const Shortint SQLITE_OPEN_READWRITE = 0x2;
static const Shortint SQLITE_OPEN_CREATE = 0x4;
static const Shortint SQLITE_OPEN_DELETEONCLOSE = 0x8;
static const Shortint SQLITE_OPEN_EXCLUSIVE = 0xa;
static const Shortint SQLITE_OPEN_MAIN_DB = 0x64;
static const Byte SQLITE_OPEN_TEMP_DB = 0xc8;
static const Word SQLITE_OPEN_TRANSIENT_DB = 0x190;
static const Word SQLITE_OPEN_MAIN_JOURNAL = 0x320;
static const Word SQLITE_OPEN_TEMP_JOURNAL = 0x3e8;
static const Word SQLITE_OPEN_SUBJOURNAL = 0x7d0;
static const Word SQLITE_OPEN_MASTER_JOURNAL = 0xfa0;
static const Word SQLITE_OPEN_NOMUTEX = 0x1f40;
static const Word SQLITE_OPEN_FULLMUTEX = 0x2710;
extern PACKAGE int EnginesCount;
extern PACKAGE char * __cdecl (*SqliteDbv3_SqliteLibVersion)(void);
extern PACKAGE int __cdecl (*SqliteDbv3_SqliteLibVersionNumber)(void);
extern PACKAGE char * __cdecl (*SqliteDbv3_SqliteLibSourceId)(void);
extern PACKAGE int __cdecl (*SqliteDbv3_compileoption_used)(char * P);
extern PACKAGE int __cdecl (*SqliteDbv3_close)(void * db);
extern PACKAGE int __cdecl (*SqliteDbv3_exec)(void * db, Sqlitepassutils::PUTF8AnsiString SQLStatement, TExecCallback CallbackPtr, void * CbParam, Sqlitepassutils::PPAnsiChar ErrMsg);
extern PACKAGE char * __cdecl (*SqliteDbv3_sql)(void * stmt);
extern PACKAGE __int64 __cdecl (*SqliteDbv3_last_insert_rowid)(void * db);
extern PACKAGE int __cdecl (*SqliteDbv3_changes)(void * db);
extern PACKAGE int __cdecl (*SqliteDbv3_total_changes)(void * db);
extern PACKAGE void __cdecl (*SqliteDbv3_interrupt)(void * db);
extern PACKAGE int __cdecl (*SqliteDbv3_complete)(char * P);
extern PACKAGE int __cdecl (*SqliteDbv3_busy_handler)(void * db, TBusyHandler CallbackPtr, void * user);
extern PACKAGE int __cdecl (*SqliteDbv3_busy_timeout)(void * db, int TimeOut);
extern PACKAGE void __cdecl (*SqliteDbv3_free)(char * P);
extern PACKAGE void __cdecl (*SqliteDbv3_free_table)(char * Table);
extern PACKAGE int __cdecl (*SqliteDbv3_open)(char * dbname, void * &db, int flags, char * vfs);
extern PACKAGE int __cdecl (*SqliteDbv3_open16)(wchar_t * dbname, void * &db);
extern PACKAGE int __cdecl (*SqliteDbv3_errcode)(void * db);
extern PACKAGE char * __cdecl (*SqliteDbv3_errmsg)(void * db);
extern PACKAGE wchar_t * __cdecl (*SqliteDbv3_errmsg16)(void * db);
extern PACKAGE int __cdecl (*SqliteDbv3_get_table)(void * db, char * SQLStatement, void * &ResultPtr, unsigned &RowCount, unsigned &ColCount, char * &ErrMsg);
extern PACKAGE int __cdecl (*SqliteDbv3_prepare_v2)(void * db, char * Sql, int nBytes, void * &stmt, char * &pzTail);
extern PACKAGE int __cdecl (*SqliteDbv3_prepare16_v2)(void * db, wchar_t * Sql, int nBytes, void * &stmt, wchar_t * &pzTail);
extern PACKAGE int __cdecl (*SqliteDbv3_stmt_readonly)(void * stmt);
extern PACKAGE int __cdecl (*SqliteDbv3_clear_binding)(void * stmt);
extern PACKAGE int __cdecl (*SqliteDbv3_bind_double)(void * stmt, int idx, double value);
extern PACKAGE int __cdecl (*SqliteDbv3_bind_int)(void * stmt, int idx, int value);
extern PACKAGE int __cdecl (*SqliteDbv3_bind_int64)(void * stmt, int idx, __int64 value);
extern PACKAGE int __cdecl (*SqliteDbv3_bind_null)(void * stmt, int idx);
extern PACKAGE int __cdecl (*SqliteDbv3_bind_text)(void * stmt, int idx, char * value, int size, int xDel);
extern PACKAGE int __cdecl (*SqliteDbv3_bind_text16)(void * stmt, int idx, wchar_t * value, int size, int xDel);
extern PACKAGE int __cdecl (*SqliteDbv3_bind_blob)(void * stmt, int idx, void * value, int size, int xDel);
extern PACKAGE int __cdecl (*SqliteDbv3_bind_parameter_count)(void * stmt);
extern PACKAGE char * __cdecl (*SqliteDbv3_bind_parameter_name)(void * stmt, int idx);
extern PACKAGE int __cdecl (*SqliteDbv3_bind_parameter_index)(void * stmt, char * zName);
extern PACKAGE int __cdecl (*SqliteDbv3_column_count)(void * pStmt);
extern PACKAGE char * __cdecl (*SqliteDbv3_column_name)(void * pStmt, int idx);
extern PACKAGE wchar_t * __cdecl (*SqliteDbv3_column_name16)(void * pStmt, int idx);
extern PACKAGE char * __cdecl (*SqliteDbv3_column_origin_name)(void * pStmt, int idx);
extern PACKAGE wchar_t * __cdecl (*SqliteDbv3_column_origin_name16)(void * pStmt, int idx);
extern PACKAGE char * __cdecl (*SqliteDbv3_column_table_name)(void * pStmt, int idx);
extern PACKAGE wchar_t * __cdecl (*SqliteDbv3_column_table_name16)(void * pStmt, int idx);
extern PACKAGE char * __cdecl (*SqliteDbv3_column_decltype)(void * pStmt, int idx);
extern PACKAGE wchar_t * __cdecl (*SqliteDbv3_column_decltype16)(void * pStmt, int idx);
extern PACKAGE int __cdecl (*SqliteDbv3_step)(void * pStmt);
extern PACKAGE int __cdecl (*SqliteDbv3_data_count)(void * pStmt);
extern PACKAGE void * __cdecl (*SqliteDbv3_column_blob)(void * pStmt, int col);
extern PACKAGE int __cdecl (*SqliteDbv3_column_bytes)(void * pStmt, int col);
extern PACKAGE double __cdecl (*SqliteDbv3_column_double)(void * pStmt, int col);
extern PACKAGE int __cdecl (*SqliteDbv3_column_int)(void * pStmt, int col);
extern PACKAGE __int64 __cdecl (*SqliteDbv3_column_int64)(void * pStmt, int col);
extern PACKAGE char * __cdecl (*SqliteDbv3_column_text)(void * pStmt, int col);
extern PACKAGE wchar_t * __cdecl (*SqliteDbv3_column_text16)(void * pStmt, int col);
extern PACKAGE int __cdecl (*SqliteDbv3_column_type)(void * pStmt, int col);
extern PACKAGE int __cdecl (*SqliteDbv3_finalize)(void * pStmt);
extern PACKAGE int __cdecl (*SqliteDbv3_reset)(void * pStmt);
extern PACKAGE int __cdecl (*SqliteDbv3_create_function)(void * db, char * zFunctionName, int nArg, int eTextRep, void * userData, TFuncHandler xFunc, TFuncHandler xStep, TFuncFinalizer xFinal);
extern PACKAGE int __cdecl (*SqliteDbv3_create_function16)(void * db, wchar_t * zFunctionName, int nArg, int eTextRep, void * userData, TFuncHandler xFunc, TFuncHandler xStep, TFuncFinalizer xFinal);
extern PACKAGE int __cdecl (*SqliteDbv3_aggregate_count)(void * SqliteDbv3_context);
extern PACKAGE void * __cdecl (*SqliteDbv3_value_blob)(void * v);
extern PACKAGE int __cdecl (*SqliteDbv3_value_bytes)(void * v);
extern PACKAGE double __cdecl (*SqliteDbv3_value_double)(void * v);
extern PACKAGE int __cdecl (*SqliteDbv3_value_int)(void * v);
extern PACKAGE __int64 __cdecl (*SqliteDbv3_value_int64)(void * v);
extern PACKAGE char * __cdecl (*SqliteDbv3_value_text)(void * v);
extern PACKAGE wchar_t * __cdecl (*SqliteDbv3_value_text16)(void * v);
extern PACKAGE int __cdecl (*SqliteDbv3_value_type)(void * v);
extern PACKAGE void * __cdecl (*SqliteDbv3_aggregate_context)(void * context, int nBytes);
extern PACKAGE void * __cdecl (*SqliteDbv3_user_data)(void * context);
extern PACKAGE void * __cdecl (*SqliteDbv3_get_auxdata)(void * context, int idx);
extern PACKAGE void __cdecl (*SqliteDbv3_set_auxdata)(void * context, int idx, void * data, int xDel);
extern PACKAGE void __cdecl (*SqliteDbv3_result_blob)(void * context, void * value, int size, int xDel);
extern PACKAGE void __cdecl (*SqliteDbv3_result_double)(void * context, double value);
extern PACKAGE void __cdecl (*SqliteDbv3_result_error)(void * context, char * msg, int len);
extern PACKAGE void __cdecl (*SqliteDbv3_result_int)(void * context, int value);
extern PACKAGE void __cdecl (*SqliteDbv3_result_int64)(void * context, __int64 value);
extern PACKAGE void __cdecl (*SqliteDbv3_result_null)(void * context);
extern PACKAGE void __cdecl (*SqliteDbv3_result_text)(void * context, char * value, int len, int xDel);
extern PACKAGE void __cdecl (*SqliteDbv3_result_text16)(void * context, wchar_t * value, int len, int xDel);
extern PACKAGE void __cdecl (*SqliteDbv3_result_value)(void * context, void * value);
extern PACKAGE int __cdecl (*SqliteDbv3_create_collation)(void * db, char * zName, int eTextRep, void * userData, TUserCollation func);
extern PACKAGE int __cdecl (*SqliteDbv3_collation_needed)(void * db, void * userData, TUserCollationNeeded func);

}	/* namespace Sqlitepassapi_v3 */
using namespace Sqlitepassapi_v3;
#pragma option pop	// -w-
#pragma option pop	// -Vx

#pragma delphiheader end.
//-- end unit ----------------------------------------------------------------
#endif	// SqlitePassApi_v3
