object Form1: TForm1
  Left = 192
  Top = 107
  Width = 870
  Height = 500
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Button1: TButton
    Left = 24
    Top = 48
    Width = 75
    Height = 25
    Caption = #26597#35810
    TabOrder = 0
    OnClick = Button1Click
  end
  object Memo1: TMemo
    Left = 520
    Top = 48
    Width = 321
    Height = 409
    Lines.Strings = (
      'Memo1')
    TabOrder = 1
  end
  object DBGrid1: TDBGrid
    Left = 24
    Top = 88
    Width = 473
    Height = 369
    DataSource = DataSource1
    TabOrder = 2
    TitleFont.Charset = DEFAULT_CHARSET
    TitleFont.Color = clWindowText
    TitleFont.Height = -11
    TitleFont.Name = 'MS Sans Serif'
    TitleFont.Style = []
  end
  object DBNavigator1: TDBNavigator
    Left = 256
    Top = 48
    Width = 240
    Height = 25
    DataSource = DataSource1
    TabOrder = 3
  end
  object CheckBox1: TCheckBox
    Left = 128
    Top = 48
    Width = 121
    Height = 17
    Caption = #37325#26032#21019#24314#25968#25454#24211
    TabOrder = 4
  end
  object ADOConnection1: TADOConnection
    Left = 296
    Top = 16
  end
  object DataSource1: TDataSource
    Left = 256
    Top = 16
  end
end
