//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include "SqlitePassDbo.hpp"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
    : TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TForm1::Button1Click(TObject *Sender)
{
    AnsiString dbf = "r:\\gxdata.db";
//    if( FileExists(dbf.c_str()) && CheckBox1->Checked )
//        DeleteFile( dbf.c_str() );

    if( !FileExists(dbf.c_str()) )
    {
        TSqlitePassDatabase* db = new  TSqlitePassDatabase(0);
        db->Database = dbf;
        db->CreateDatabase( dbf, dbtUnknown, UTF8, 0x1000, avFull );
        db->Close();

        db->Database = dbf;
        db->Open();
        db->Engine->ExecSQL( "create table table1 (id integer, name string(20), updatedate datetime)" );
        db->Close();

        delete db;
    }

    TSqlitePassDatabase* db = new  TSqlitePassDatabase(0);
    db->Database = dbf;
//    db->Options->Encoding = UTF8;
    db->Open();
    if( db->DatatypeOptions->DefaultFieldType != ftString )
    {
        db->DatatypeOptions->DefaultFieldType = ftString;
        db->DatatypeOptions->SaveToDatabase();
    }

    int ret = 0;//db->Engine->ExecSQL("drop table BQ_6502zhData");
//    ret = db->Engine->ExecSQL("create table  IF NOT EXISTS BQ_6502zhData(ID integer,车站名称 VARCHAR(100),线别 VARCHAR(100),IconID integer,Lh VARCHAR(50),ShapeGuid VARCHAR(200),MapID integer,SubGroupID integer,gongshu VARCHAR(100),gongshi VARCHAR(100),Jzgongshi VARCHAR(100),huansuanshu float,DwdName VARCHAR(100),类型 VARCHAR(100),ShowIndex VARCHAR(100), S_UDTIME VARCHAR(100),名称 VARCHAR(255),设计名称 VARCHAR(255),架编号 VARCHAR(255),层编号 VARCHAR(255),生产厂家 VARCHAR(255),上道时间 VARCHAR(255),A名称 VARCHAR(255),B名称 VARCHAR(255))" );//, vlSilent);
    ret = db->Engine->ExecSQL("create table  IF NOT EXISTS BQ_6502zhData2(ID integer,车站名称 text)" );//, vlSilent);
    db->Close();
    db->Open();
    
    TSqlitePassDataset* rs = new TSqlitePassDataset( db );
    rs->Database = db;
    rs->ParamCheck = false;
    rs->SQL->Text = "select * from table1";
//    rs->SQL->Text = "select distinct StationType_ID as ID, StationType_DB_Name as TableName from BQ_StationType_DB";
//    rs->SQL->Text = "select * from BQ_DljxtQitaData";
    rs->Open();

    DataSource1->DataSet = rs;

    //db->Close();
}
//---------------------------------------------------------------------------
