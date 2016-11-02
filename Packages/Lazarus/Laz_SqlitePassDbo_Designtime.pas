{ Ce fichier a été automatiquement créé par Lazarus. Ne pas l'éditer !
  Cette source est seulement employée pour compiler et installer le paquet.
 }

unit Laz_SqlitePassDbo_Designtime; 

interface

uses
    RegisterSqlitePassDbo, SqlitePassChooseDatasetDialog, 
  SqlitePassCreateNewDatabaseDialog, SqlitePassCreateNewIndex, 
  SqlitePassCustomFieldDefsDialog, SqlitePassDataTypeOptions, 
  SqlitePassDataTypesDialog, SqlitePassFieldDefsDialog, 
  SqlitePassFiltersDialog, SqlitePassFiltersDialogTemplate, 
  SqlitePassFilterValues, SqlitePassIndexedByDialog, SqlitePassIndexesDialog, 
  SqlitePassLocateDialog, SqlitePassMasterDetailFieldsDialog, 
  SqlitePassSortByDialog, LazarusPackageIntf;

implementation

procedure Register; 
begin
  RegisterUnit('RegisterSqlitePassDbo', @RegisterSqlitePassDbo.Register); 
end; 

initialization
  RegisterPackage('Laz_SqlitePassDbo_Designtime', @Register); 
end.
