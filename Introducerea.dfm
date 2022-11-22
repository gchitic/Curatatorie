object FIntroducere: TFIntroducere
  Left = 0
  Top = 0
  Caption = 'Introducere'
  ClientHeight = 382
  ClientWidth = 728
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 737
    Height = 385
    TabOrder = 0
    object PageControl1: TPageControl
      Left = 0
      Top = 0
      Width = 737
      Height = 385
      ActivePage = TabSheet1
      TabOrder = 0
      object TabSheet1: TTabSheet
        Caption = 'Servicii'
        object Panel2: TPanel
          Left = 0
          Top = 1
          Width = 249
          Height = 360
          TabOrder = 0
          object SpeedButton7: TSpeedButton
            Left = 32
            Top = 200
            Width = 169
            Height = 41
            Caption = 'SELECTEAZA'
          end
          object SpeedButton8: TSpeedButton
            Left = 32
            Top = 247
            Width = 169
            Height = 41
            Caption = 'ANULEAZA'
          end
          object Image5: TImage
            Left = 175
            Top = 99
            Width = 34
            Height = 33
            Picture.Data = {
              0954506E67496D61676589504E470D0A1A0A0000000D49484452000000200000
              00200806000000737A7AF40000000473424954080808087C0864880000000970
              485973000000EC000000EC01792871BD0000001974455874536F667477617265
              007777772E696E6B73636170652E6F72679BEE3C1A000003C94944415478DABD
              576B884D51145E6BEF73CDC5601AD40CE38661280A91FC120A2522455394C6A3
              193F8C1ACF284E61E431F7C66432F3435E511E49324A317E4C6A8AFC9A4CF298
              90C79DFB0393A1B9E79C659D2BE7CEB9E775E765D5BE7B9F7BD65EEB5BCFBD0F
              02D389361A41123686044CE0C7A79D93A1514534E03F10AAAD5420009AA58062
              C10B690E096D3C8E8D8BC0F5F588FAA00238F042AF53A4D86E29E721D2F32B13
              C8B7085C638F68830260DF33A38595CDFFAB147B2AFF3BCB94475EF3BA3A1C87
              ABE5F33039A00076B5E85705E2064B594A39DA40F458BF4584EAA109B83C5040
              70E7535A2990EE09A7FB531EB1D6D2F6EEBD8210CD35A0BE6C12FEEE17009548
              249AE91D0B8ED8947B782383E703B3D5F407089A3F154DBA2A241EF6703B38F2
              433A78BEF28875039CAD9A80BF7A0D606B131509A2761626A55B12DAC0A00740
              162620AE08888624D4968FC3AEAC019854F6D0B8CF425664C4DA75B68546BABD
              830ECE911A9905100BC0C6465AA348BAE3ABDCC31B9E6193D0C1739D1E8668E5
              68FCE10B60511329E3BBA89D378FF7893578568B8FE73834099ECF294321569E
              8FDF5D0198547A8F2A11E98C7F323ACBD23551DD3D97E011CB0941ED96B1D8E9
              000044B8EE2EEC138276F186311E3D0002014A0CE249B0CC4D1585D888E0416B
              6F53E19030F70682885420A2A01141811359768443339185E4B9574940B5A48D
              E90282A99E00FC4855497C5A480F58D032DF6A91DE8D2CB546D8D62700EB6E90
              CCCD23B36C9707E785333FFEFDC73D63B32F801537A840212866C153501AE67D
              618A8268CE25FC5F5EEFF222E36C11D01952586EA6D2C517B4D520603733CF66
              C6DCB475E85B8E7E55E2B41C3F03DFC0D419F8D80660C1796D2DC7EC166F46DF
              EEE71AEB6CBAA77966E0292D04E74FCFC29FF632E4129C5B67BC64C669C1D661
              709FB0F7802F12F1E4AF30D437CCB3B7660BC0CC58729114A2A937D679DEA0D2
              CF71E689B2CADA8655EE67820560FA29FD3A6F2ECDAA0B6624960B4F9C6F59D1
              64179CBDB9DEFF784E0128394D6374CDF8C89B738233D9B7F1C4B90B46152D58
              B10D40D1117D0F87F5A4D3BA2C4B8C938B6B3A961B12592BEE0180B0E090D626
              A428C9CAEDF6BCF8C0406B0488FA27657DBC928DDA9F5CA2487CE45B6A4E6FBC
              678F45870FEBBB620BC088BD5A83D993EDD6799E66ED6CF171F82E2EB6AAD8DD
              1FC516807095F690052F0DB896BF1392AAF3F3E5A5E7E503FC61A254268FB2C5
              073D3ADC5BE44FB3A2427965A0155B0060078D14643C610BE7F450FE862F95C7
              BE0D9357401D9C6FC234009376500E187A297F214DE383A2A53B5FDE1F6CC5FF
              E80FBBD701D92FD39FC80000000049454E44AE426082}
          end
          object GroupBox1: TGroupBox
            Left = 16
            Top = 20
            Width = 193
            Height = 73
            Caption = 'Cauta dupa'
            TabOrder = 0
            object RB2: TRadioButton
              Left = 110
              Top = 43
              Width = 83
              Height = 17
              Caption = 'Denumire'
              TabOrder = 0
            end
            object RB1: TRadioButton
              Left = 15
              Top = 43
              Width = 97
              Height = 17
              Caption = 'Cod serviciu'
              TabOrder = 1
            end
            object RB3: TRadioButton
              Left = 15
              Top = 20
              Width = 97
              Height = 17
              Caption = 'Toate serviciile'
              TabOrder = 2
            end
          end
          object Edit8: TEdit
            Left = 16
            Top = 104
            Width = 153
            Height = 21
            TabOrder = 1
            TextHint = 'Cautare articol'
          end
        end
        object Panel3: TPanel
          Left = 255
          Top = 0
          Width = 474
          Height = 361
          TabOrder = 1
          object DBGrid1: TDBGrid
            Left = 0
            Top = 1
            Width = 473
            Height = 357
            DataSource = dm.DSQCautareServicii
            TabOrder = 0
            TitleFont.Charset = DEFAULT_CHARSET
            TitleFont.Color = clWindowText
            TitleFont.Height = -11
            TitleFont.Name = 'Tahoma'
            TitleFont.Style = []
            Columns = <
              item
                Expanded = False
                FieldName = 'SERVICIU_ID'
                Title.Caption = 'Nr.'
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'DENUMIRE'
                Title.Caption = 'Denumire'
                Width = 223
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'PRET'
                Title.Caption = 'Pret'
                Width = 111
                Visible = True
              end>
          end
        end
      end
      object TabSheet2: TTabSheet
        Caption = 'Articole'
        ImageIndex = 1
        object Panel4: TPanel
          Left = 0
          Top = -2
          Width = 265
          Height = 360
          TabOrder = 0
          object Image1: TImage
            Left = 183
            Top = 107
            Width = 34
            Height = 33
            Picture.Data = {
              0954506E67496D61676589504E470D0A1A0A0000000D49484452000000200000
              00200806000000737A7AF40000000473424954080808087C0864880000000970
              485973000000EC000000EC01792871BD0000001974455874536F667477617265
              007777772E696E6B73636170652E6F72679BEE3C1A000003C94944415478DABD
              576B884D51145E6BEF73CDC5601AD40CE38661280A91FC120A2522455394C6A3
              193F8C1ACF284E61E431F7C66432F3435E511E49324A317E4C6A8AFC9A4CF298
              90C79DFB0393A1B9E79C659D2BE7CEB9E775E765D5BE7B9F7BD65EEB5BCFBD0F
              02D389361A41123686044CE0C7A79D93A1514534E03F10AAAD5420009AA58062
              C10B690E096D3C8E8D8BC0F5F588FAA00238F042AF53A4D86E29E721D2F32B13
              C8B7085C638F68830260DF33A38595CDFFAB147B2AFF3BCB94475EF3BA3A1C87
              ABE5F33039A00076B5E85705E2064B594A39DA40F458BF4584EAA109B83C5040
              70E7535A2990EE09A7FB531EB1D6D2F6EEBD8210CD35A0BE6C12FEEE17009548
              249AE91D0B8ED8947B782383E703B3D5F407089A3F154DBA2A241EF6703B38F2
              433A78BEF28875039CAD9A80BF7A0D606B131509A2761626A55B12DAC0A00740
              162620AE08888624D4968FC3AEAC019854F6D0B8CF425664C4DA75B68546BABD
              830ECE911A9905100BC0C6465AA348BAE3ABDCC31B9E6193D0C1739D1E8668E5
              68FCE10B60511329E3BBA89D378FF7893578568B8FE73834099ECF294321569E
              8FDF5D0198547A8F2A11E98C7F323ACBD23551DD3D97E011CB0941ED96B1D8E9
              000044B8EE2EEC138276F186311E3D0002014A0CE249B0CC4D1585D888E0416B
              6F53E19030F70682885420A2A01141811359768443339185E4B9574940B5A48D
              E90282A99E00FC4855497C5A480F58D032DF6A91DE8D2CB546D8D62700EB6E90
              CCCD23B36C9707E785333FFEFDC73D63B32F801537A840212866C153501AE67D
              618A8268CE25FC5F5EEFF222E36C11D01952586EA6D2C517B4D520603733CF66
              C6DCB475E85B8E7E55E2B41C3F03DFC0D419F8D80660C1796D2DC7EC166F46DF
              EEE71AEB6CBAA77966E0292D04E74FCFC29FF632E4129C5B67BC64C669C1D661
              709FB0F7802F12F1E4AF30D437CCB3B7660BC0CC58729114A2A937D679DEA0D2
              CF71E689B2CADA8655EE67820560FA29FD3A6F2ECDAA0B6624960B4F9C6F59D1
              64179CBDB9DEFF784E0128394D6374CDF8C89B738233D9B7F1C4B90B46152D58
              B10D40D1117D0F87F5A4D3BA2C4B8C938B6B3A961B12592BEE0180B0E090D626
              A428C9CAEDF6BCF8C0406B0488FA27657DBC928DDA9F5CA2487CE45B6A4E6FBC
              678F45870FEBBB620BC088BD5A83D993EDD6799E66ED6CF171F82E2EB6AAD8DD
              1FC516807095F690052F0DB896BF1392AAF3F3E5A5E7E503FC61A254268FB2C5
              073D3ADC5BE44FB3A2427965A0155B0060078D14643C610BE7F450FE862F95C7
              BE0D9357401D9C6FC234009376500E187A297F214DE383A2A53B5FDE1F6CC5FF
              E80FBBD701D92FD39FC80000000049454E44AE426082}
          end
          object SpeedButton1: TSpeedButton
            Left = 40
            Top = 208
            Width = 169
            Height = 41
            Caption = 'SELECTEAZA'
          end
          object SpeedButton2: TSpeedButton
            Left = 40
            Top = 255
            Width = 169
            Height = 41
            Caption = 'ANULEAZA'
          end
          object GroupBox2: TGroupBox
            Left = 24
            Top = 28
            Width = 193
            Height = 73
            Caption = 'Cauta dupa'
            TabOrder = 0
            object RadioButton2: TRadioButton
              Left = 110
              Top = 43
              Width = 83
              Height = 17
              Caption = 'Denumire'
              TabOrder = 0
            end
            object RadioButton3: TRadioButton
              Left = 15
              Top = 43
              Width = 73
              Height = 17
              Caption = 'Cod articol'
              TabOrder = 1
            end
            object RadioButton4: TRadioButton
              Left = 15
              Top = 20
              Width = 97
              Height = 17
              Caption = 'Toate articolele'
              TabOrder = 2
            end
          end
          object Edit1: TEdit
            Left = 24
            Top = 112
            Width = 153
            Height = 21
            TabOrder = 1
            TextHint = 'Cautare articol'
          end
        end
        object Panel5: TPanel
          Left = 271
          Top = 1
          Width = 458
          Height = 353
          TabOrder = 1
          object DBGrid2: TDBGrid
            Left = 0
            Top = -1
            Width = 457
            Height = 361
            DataSource = dm.DSQCautare
            TabOrder = 0
            TitleFont.Charset = DEFAULT_CHARSET
            TitleFont.Color = clWindowText
            TitleFont.Height = -11
            TitleFont.Name = 'Tahoma'
            TitleFont.Style = []
            Columns = <
              item
                Expanded = False
                FieldName = 'ARTICOL_ID'
                Title.Caption = 'Nr.'
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'DENUMIRE'
                Title.Caption = 'Denumire'
                Width = 204
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'PRET'
                Title.Caption = 'Pret'
                Width = 106
                Visible = True
              end>
          end
        end
      end
      object TabSheet3: TTabSheet
        Caption = 'Materiale'
        ImageIndex = 2
        object Panel6: TPanel
          Left = -4
          Top = 1
          Width = 282
          Height = 360
          TabOrder = 0
          object Image2: TImage
            Left = 191
            Top = 99
            Width = 34
            Height = 33
            Picture.Data = {
              0954506E67496D61676589504E470D0A1A0A0000000D49484452000000200000
              00200806000000737A7AF40000000473424954080808087C0864880000000970
              485973000000EC000000EC01792871BD0000001974455874536F667477617265
              007777772E696E6B73636170652E6F72679BEE3C1A000003C94944415478DABD
              576B884D51145E6BEF73CDC5601AD40CE38661280A91FC120A2522455394C6A3
              193F8C1ACF284E61E431F7C66432F3435E511E49324A317E4C6A8AFC9A4CF298
              90C79DFB0393A1B9E79C659D2BE7CEB9E775E765D5BE7B9F7BD65EEB5BCFBD0F
              02D389361A41123686044CE0C7A79D93A1514534E03F10AAAD5420009AA58062
              C10B690E096D3C8E8D8BC0F5F588FAA00238F042AF53A4D86E29E721D2F32B13
              C8B7085C638F68830260DF33A38595CDFFAB147B2AFF3BCB94475EF3BA3A1C87
              ABE5F33039A00076B5E85705E2064B594A39DA40F458BF4584EAA109B83C5040
              70E7535A2990EE09A7FB531EB1D6D2F6EEBD8210CD35A0BE6C12FEEE17009548
              249AE91D0B8ED8947B782383E703B3D5F407089A3F154DBA2A241EF6703B38F2
              433A78BEF28875039CAD9A80BF7A0D606B131509A2761626A55B12DAC0A00740
              162620AE08888624D4968FC3AEAC019854F6D0B8CF425664C4DA75B68546BABD
              830ECE911A9905100BC0C6465AA348BAE3ABDCC31B9E6193D0C1739D1E8668E5
              68FCE10B60511329E3BBA89D378FF7893578568B8FE73834099ECF294321569E
              8FDF5D0198547A8F2A11E98C7F323ACBD23551DD3D97E011CB0941ED96B1D8E9
              000044B8EE2EEC138276F186311E3D0002014A0CE249B0CC4D1585D888E0416B
              6F53E19030F70682885420A2A01141811359768443339185E4B9574940B5A48D
              E90282A99E00FC4855497C5A480F58D032DF6A91DE8D2CB546D8D62700EB6E90
              CCCD23B36C9707E785333FFEFDC73D63B32F801537A840212866C153501AE67D
              618A8268CE25FC5F5EEFF222E36C11D01952586EA6D2C517B4D520603733CF66
              C6DCB475E85B8E7E55E2B41C3F03DFC0D419F8D80660C1796D2DC7EC166F46DF
              EEE71AEB6CBAA77966E0292D04E74FCFC29FF632E4129C5B67BC64C669C1D661
              709FB0F7802F12F1E4AF30D437CCB3B7660BC0CC58729114A2A937D679DEA0D2
              CF71E689B2CADA8655EE67820560FA29FD3A6F2ECDAA0B6624960B4F9C6F59D1
              64179CBDB9DEFF784E0128394D6374CDF8C89B738233D9B7F1C4B90B46152D58
              B10D40D1117D0F87F5A4D3BA2C4B8C938B6B3A961B12592BEE0180B0E090D626
              A428C9CAEDF6BCF8C0406B0488FA27657DBC928DDA9F5CA2487CE45B6A4E6FBC
              678F45870FEBBB620BC088BD5A83D993EDD6799E66ED6CF171F82E2EB6AAD8DD
              1FC516807095F690052F0DB896BF1392AAF3F3E5A5E7E503FC61A254268FB2C5
              073D3ADC5BE44FB3A2427965A0155B0060078D14643C610BE7F450FE862F95C7
              BE0D9357401D9C6FC234009376500E187A297F214DE383A2A53B5FDE1F6CC5FF
              E80FBBD701D92FD39FC80000000049454E44AE426082}
          end
          object SpeedButton3: TSpeedButton
            Left = 47
            Top = 200
            Width = 169
            Height = 41
            Caption = 'SELECTEAZA'
          end
          object SpeedButton4: TSpeedButton
            Left = 47
            Top = 247
            Width = 169
            Height = 41
            Caption = 'ANULEAZA'
          end
          object GroupBox3: TGroupBox
            Left = 32
            Top = 20
            Width = 193
            Height = 73
            Caption = 'Cauta dupa'
            TabOrder = 0
            object RadioButton5: TRadioButton
              Left = 110
              Top = 43
              Width = 83
              Height = 17
              Caption = 'Denumire'
              TabOrder = 0
            end
            object RadioButton6: TRadioButton
              Left = 15
              Top = 43
              Width = 73
              Height = 17
              Caption = 'Cod material'
              TabOrder = 1
              OnClick = RadioButton6Click
            end
            object RadioButton7: TRadioButton
              Left = 15
              Top = 20
              Width = 97
              Height = 17
              Caption = 'Toate materialele'
              TabOrder = 2
            end
          end
          object Edit2: TEdit
            Left = 32
            Top = 104
            Width = 153
            Height = 21
            TabOrder = 1
            TextHint = 'Cautare articol'
          end
        end
        object Panel7: TPanel
          Left = 281
          Top = -3
          Width = 445
          Height = 361
          TabOrder = 1
          object DBGrid3: TDBGrid
            Left = 3
            Top = 4
            Width = 441
            Height = 357
            DataSource = dm.DSQCautareMaterial
            TabOrder = 0
            TitleFont.Charset = DEFAULT_CHARSET
            TitleFont.Color = clWindowText
            TitleFont.Height = -11
            TitleFont.Name = 'Tahoma'
            TitleFont.Style = []
            Columns = <
              item
                Expanded = False
                FieldName = 'MATERIAL_ID'
                Title.Caption = 'Nr.'
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'DENUMIRE'
                Title.Caption = 'Denumire'
                Width = 194
                Visible = True
              end
              item
                Expanded = False
                FieldName = 'PRET'
                Title.Caption = 'Pret'
                Width = 109
                Visible = True
              end>
          end
        end
      end
    end
  end
end
