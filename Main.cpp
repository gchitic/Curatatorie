//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Main.h"
#include "GestionareAlegere.h"
#include "DataModule1.h"
#include "NewComand.h"
#include "EditComand.h"
#include "Logarea.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFMain *FMain;
TDateTime DT;
//---------------------------------------------------------------------------
__fastcall TFMain::TFMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------


void __fastcall TFMain::Image3MouseEnter(TObject *Sender)
{
    Label2->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Image3MouseLeave(TObject *Sender)
{
    Label2->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TFMain::RadioButton1Click(TObject *Sender)
{
	Edit1->TextHint = "Nume client";
	Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFMain::RadioButton2Click(TObject *Sender)
{
	Edit1->TextHint = "Numar telefon";
	Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFMain::RadioButton4Click(TObject *Sender)
{
	Edit1->TextHint = "Cod comanda";
    Edit1->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Image2MouseEnter(TObject *Sender)
{
	Label6->Visible = true;
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Image2MouseLeave(TObject *Sender)
{
    Label6->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Image2Click(TObject *Sender)
{
    FGestionareAlegere->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFMain::FormShow(TObject *Sender)
{
	FLogare->ShowModal();
	Label5->Caption = DT.CurrentDate();

	AnsiString s;
	s = "SELECT C.COMANDA_ID , CL.NUME, CL.PRENUME, CL.NR_TELEFON, C.SUMA_TOTAL, C.DATA_RETURN ";
	s+= "FROM COMANDA C INNER JOIN CLIENT CL ON CL.CLIENT_ID = C.CLIENT_ID";
	dm->QComand->Close();
	dm->QComand->SQL->Clear();
	dm->QComand->SQL->Add(s);
	dm->QComand->Open();

	//extragem id-ul operatorului
	dm->QCautare->Close();
	dm->QCautare->SQL->Clear();
	dm->QCautare->SQL->Add("SELECT * FROM OPERATOR WHERE NUME=:NUME AND PRENUME=:PRENUME");
	dm->QCautare->ParamByName("NUME")->AsString = FLogare->Label11->Caption;
    dm->QCautare->ParamByName("PRENUME")->AsString = FLogare->Label12->Caption;
	dm->QCautare->Open();
    Label9->Caption = dm->QCautare->FieldByName("OPERATOR_ID")->AsString;

}
//---------------------------------------------------------------------------

void __fastcall TFMain::RB1Click(TObject *Sender)
{
    AnsiString s;
	s = "SELECT C.COMANDA_ID , CL.NUME, CL.PRENUME, CL.NR_TELEFON, C.SUMA_TOTAL, C.DATA_RETURN ";
	s+= "FROM COMANDA C INNER JOIN CLIENT CL ON CL.CLIENT_ID = C.CLIENT_ID ";
	s+= "WHERE C.ACTIV = 1";
	dm->QComand->Close();
	dm->QComand->SQL->Clear();
	dm->QComand->SQL->Add(s);
	dm->QComand->Open();
}
//---------------------------------------------------------------------------

void __fastcall TFMain::RB2Click(TObject *Sender)
{
	AnsiString s;
	s = "SELECT C.COMANDA_ID , CL.NUME, CL.PRENUME, CL.NR_TELEFON, C.SUMA_TOTAL, C.DATA_RETURN ";
	s+= "FROM COMANDA C INNER JOIN CLIENT CL ON CL.CLIENT_ID = C.CLIENT_ID ";
	s+= "WHERE C.ACTIV = 0";
	dm->QComand->Close();
	dm->QComand->SQL->Clear();
	dm->QComand->SQL->Add(s);
	dm->QComand->Open();
}
//---------------------------------------------------------------------------

void __fastcall TFMain::RB3Click(TObject *Sender)
{
	AnsiString s;
	s = "SELECT C.COMANDA_ID , CL.NUME, CL.PRENUME, CL.NR_TELEFON, C.SUMA_TOTAL, C.DATA_RETURN ";
	s+= "FROM COMANDA C INNER JOIN CLIENT CL ON CL.CLIENT_ID = C.CLIENT_ID";
	dm->QComand->Close();
	dm->QComand->SQL->Clear();
	dm->QComand->SQL->Add(s);
	dm->QComand->Open();
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Image5Click(TObject *Sender)
{
	if(Edit1->Text!="")
	{
        if(RadioButton1->Checked)
		{
			AnsiString s;
			s = "SELECT C.COMANDA_ID , CL.NUME, CL.PRENUME, CL.NR_TELEFON, C.SUMA_TOTAL, C.DATA_RETURN ";
			s+= "FROM COMANDA C INNER JOIN CLIENT CL ON CL.CLIENT_ID = C.CLIENT_ID ";
			s+= "WHERE CL.NUME = :NUME OR CL.PRENUME = :PRENUME";
			dm->QComand->Close();
			dm->QComand->SQL->Clear();
			dm->QComand->SQL->Add(s);
			dm->QComand->ParamByName("NUME")->AsString = Edit1->Text;
			dm->QComand->ParamByName("PRENUME")->AsString = Edit1->Text;
			dm->QComand->Open();
		}
		else if(RadioButton2->Checked)
		{
			AnsiString s;
			s = "SELECT C.COMANDA_ID , CL.NUME, CL.PRENUME, CL.NR_TELEFON, C.SUMA_TOTAL, C.DATA_RETURN ";
			s+= "FROM COMANDA C INNER JOIN CLIENT CL ON CL.CLIENT_ID = C.CLIENT_ID ";
			s+= "WHERE CL.NR_TELEFON = :NR_TELEFON";
			dm->QComand->Close();
			dm->QComand->SQL->Clear();
			dm->QComand->SQL->Add(s);
			dm->QComand->ParamByName("NR_TELEFON")->AsInteger = Edit1->Text.ToInt();
			dm->QComand->Open();
		}
		else if(RadioButton4->Checked)
		{
			AnsiString s;
			s = "SELECT C.COMANDA_ID , CL.NUME, CL.PRENUME, CL.NR_TELEFON, C.SUMA_TOTAL, C.DATA_RETURN ";
			s+= "FROM COMANDA C INNER JOIN CLIENT CL ON CL.CLIENT_ID = C.CLIENT_ID ";
			s+= "WHERE C.COMANDA_ID = :COMANDA_ID";
			dm->QComand->Close();
			dm->QComand->SQL->Clear();
			dm->QComand->SQL->Add(s);
			dm->QComand->ParamByName("COMANDA_ID")->AsInteger = Edit1->Text.ToInt();
			dm->QComand->Open();
		}
	}
    else if(RadioButton3->Checked)
	{
		AnsiString s;
		s = "SELECT C.COMANDA_ID , CL.NUME, CL.PRENUME, CL.NR_TELEFON, C.SUMA_TOTAL, C.DATA_RETURN ";
		s+= "FROM COMANDA C INNER JOIN CLIENT CL ON CL.CLIENT_ID = C.CLIENT_ID ";
		s+= "WHERE C.DATA_RETURN = :DATA_RETURN";
		dm->QComand->Close();
		dm->QComand->SQL->Clear();
		dm->QComand->SQL->Add(s);
		dm->QComand->ParamByName("DATA_RETURN")->AsDate = DateTimePicker1->Date;
		dm->QComand->Open();
	}
	else ShowMessage("Completati campul");
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Image3Click(TObject *Sender)
{
    FComand->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFMain::Timer1Timer(TObject *Sender)
{
    Label4->Caption = DT.CurrentTime();
}
//---------------------------------------------------------------------------

void __fastcall TFMain::SpeedButton1Click(TObject *Sender)
{
	FEditComand->Edit25->Text = dm->QComand->FieldByName("COMANDA_ID")->AsInteger;
	FEditComand->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFMain::RadioButton3Click(TObject *Sender)
{
    Edit1->Clear();
}
//---------------------------------------------------------------------------





