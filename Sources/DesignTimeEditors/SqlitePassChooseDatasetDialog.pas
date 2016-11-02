{ This library is free software; you can redistribute it and/or modify it
  under the terms of the GNU Library General Public License as published by
  the Free Software Foundation; either version 2 of the License, or (at your
  option) any later version.

  This program is distributed in the hope that it will be useful, but WITHOUT
  ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
  FITNESS FOR A PARTICULAR PURPOSE. See the GNU Library General Public License
  for more details.

  You should have received a copy of the GNU Library General Public License
  along with this library; if not, write to the Free Software Foundation,
  Inc., 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.

  ---------------------------------------------------------------------------

    Author : Luc DAVID Email: luckylazarus@free.fr
    2007-2009
    Last update : 06/10/2009

  --------------------------------------------------------------------------- }

unit SqlitePassChooseDatasetDialog;
{$i ..\..\Sources\SqlitePassDbo.inc}

interface

uses
 {$IFDEF FPC}
  LResources,
 {$ELSE}
  Windows,
  Messages,
  DB,
  ImgList,
 {$ENDIF}
  SysUtils, Classes, Graphics, Controls, Forms,
  StdCtrls, Buttons, ExtCtrls, ComCtrls, SqlitePassDbo, SqlitePassVisualTools;

type

  { TSqlitePassChooseDatasetDialog }

  TSqlitePassChooseDatasetDlg = class(TForm)
    PanelTv: TPanel;
    PanelBottom: TPanel;
    BtOk: TButton;
    BtCancel: TButton;
    PanelTop: TPanel;
    LabelAvailableDatasets: TLabel;
    TreeViewImageList: TImageList;
    procedure TvDblClick(Sender: TObject);
  private
    FDatabase: TSqlitePassDatabase;
    procedure SetFDatabase(const Value: TSqlitePassDatabase);
   Public
   DBTreeView: TSPVTDBTreeView;
   Constructor Create(AOwner: TComponent); Override;
   property Database: TSqlitePassDatabase read FDatabase write SetFDatabase;
  end;

var
  SqlitePassChooseDatasetDlg: TSqlitePassChooseDatasetDlg;

implementation

{$IFNDEF FPC}
 {$R *.DFM}
{$ENDIF}

constructor TSqlitePassChooseDatasetDlg.Create(AOwner: TComponent);
begin
{ Must be Create(Nil) in order to properly display the form at design time ! }
Inherited Create(Nil);
DBTreeView := TSPVTDBTreeView.Create(PanelTv);
DBTreeView.Parent := PanelTv;
DBTreeView.ImageList := TreeViewImageList;
Database := TSqlitePassDatabase(AOwner);
end;

procedure TSqlitePassChooseDatasetDlg.SetFDatabase(const Value: TSqlitePassDatabase);
begin
FDatabase := Value;
if FDatabase = nil then exit;

With DBTreeview do
  begin
  Database := FDatabase;
  RefreshItems;
  end;
end;

procedure TSqlitePassChooseDatasetDlg.TvDblClick(Sender: TObject);
begin
ModalResult := mrOk;
end;


initialization
 {$IFDEF FPC}
  {$I SqlitePassChooseDatasetDialog.lrs}
 {$ENDIF}
end.
 
