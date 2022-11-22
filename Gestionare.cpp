//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Gestionare.h"
#include "DataModule1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFGestionareArticole *FGestionareArticole;
//---------------------------------------------------------------------------
__fastcall TFGestionareArticole::TFGestionareArticole(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFGestionareArticole::FormShow(TObject *Sender)
{
	TabSheet2->TabVisible = false;
	TabSheet3->TabVisible = false;
	TabSheet4->TabVisible = false;
}
//---------------------------------------------------------------------------
void __fastcall TFGestionareArticole::Image2Click(TObject *Sender)
{
	TabSheet2->TabVisible = true;
	TabSheet2->Show();
}
//---------------------------------------------------------------------------
void __fastcall TFGestionareArticole::Image1Click(TObject *Sender)
{
	TabSheet3->TabVisible = true;
	TabSheet3->Show();
}
//---------------------------------------------------------------------------
void __fastcall TFGestionareArticole::Image3Click(TObject *Sender)
{
	TabSheet4->TabVisible = true;
	TabSheet4->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::SpeedButton1Click(TObject *Sender)
{
	if((Edit1->Text!="") && (Edit2->Text!=""))
	{
		AnsiString s;
        s = "INSERT INTO ARTICOL(DENUMIRE,PRET) VALUES (:DENUMIRE,:PRET)";
		dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add(s);
		dm->QLiber->ParamByName("DENUMIRE")->AsString = Edit1->Text;
		dm->QLiber->ParamByName("PRET")->AsFloat = Edit2->Text.ToDouble();
		dm->QLiber->ExecSQL();

		Edit1->Clear();
		Edit2->Clear();
		Panel4->Visible = true;
        Panel4->Enabled = true;
	}
	else ShowMessage("Completati campurile");
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::SpeedButton2Click(TObject *Sender)
{
	Edit1->Clear();
	Edit2->Clear();
	TabSheet2->TabVisible = false;
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::Button2Click(TObject *Sender)
{
	Panel4->Visible = false;
    Panel4->Enabled = false;
    Edit1->Clear();
	Edit2->Clear();
	TabSheet2->TabVisible = false;
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::Button1Click(TObject *Sender)
{
	Panel6->Visible = false;
	Panel6->Enabled = false;

	Edit3->Clear();
	Edit4->Clear();
    Edit7->Clear();

	Panel5->Enabled = false;
    Panel2->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::SpeedButton5Click(TObject *Sender)
{
    Edit7->Clear();
	Edit3->Clear();
	Edit4->Clear();

	Panel2->Enabled = true;     //campul cu codul articolului
	Panel5->Enabled = false;    //campurile cu modificarile

	TabSheet3->TabVisible = false;
    TabSheet1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::Image5Click(TObject *Sender)
{
	if(Edit7->Text!="")
	{
		Panel5->Enabled = true;
		Panel2->Enabled= false;

		dm->QCautare->Close();
		dm->QCautare->SQL->Clear();
		dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID");
		dm->QCautare->ParamByName("ARTICOL_ID")->AsInteger = Edit7->Text.ToInt();
		dm->QCautare->Open();

		Edit4->Text = dm->QCautare->FieldByName("DENUMIRE")->AsString;
        Edit3->Text = dm->QCautare->FieldByName("PRET")->AsFloat;
	}
	else ShowMessage("Introduceti codul articolului");
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::SpeedButton4Click(TObject *Sender)
{
	if((Edit3->Text!="") && (Edit4->Text!=""))
	{
		AnsiString s;
        s = "UPDATE ARTICOL SET DENUMIRE=:DENUMIRE,PRET=:PRET WHERE ARTICOL_ID=:ARTICOL_ID";
		dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add(s);
		dm->QLiber->ParamByName("ARTICOL_ID")->AsInteger = Edit7->Text.ToInt();
		dm->QLiber->ParamByName("DENUMIRE")->AsString = Edit4->Text;
		dm->QLiber->ParamByName("PRET")->AsFloat = Edit3->Text.ToDouble();
		dm->QLiber->ExecSQL();

		Panel6->Visible = true;
        Panel6->Enabled = true;
	}
	else ShowMessage("Completati campurile!");
}
//---------------------------------------------------------------------------


void __fastcall TFGestionareArticole::Button3Click(TObject *Sender)
{
	Panel6->Visible = false;
	Panel6->Enabled = false;

	Edit7->Clear();
	Edit3->Clear();
	Edit4->Clear();

	Panel5->Enabled = false;
    Panel2->Enabled = true;
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::Button4Click(TObject *Sender)
{
    //panelul cu intrebarea
	Panel6->Visible = false;
	Panel6->Enabled = false;
	//curatam casetele
    Edit7->Clear();
	Edit3->Clear();
	Edit4->Clear();

	TabSheet3->TabVisible = false;
    TabSheet1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::RB1Click(TObject *Sender)
{
	Edit8->TextHint = "Cod articol";
    Edit8->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::RB2Click(TObject *Sender)
{
	Edit8->TextHint = "Denumire";
    Edit8->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::Image4Click(TObject *Sender)
{
	if(Edit8->Text!="")
	{
		if(RB1->Checked)
		{
			dm->QCautare->Close();
			dm->QCautare->SQL->Clear();
			dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID");
            dm->QCautare->ParamByName("ARTICOL_ID")->AsInteger = Edit8->Text.ToInt();
            dm->QCautare->Open();
		}
		else if(RB2->Checked)
		{
			dm->QCautare->Close();
			dm->QCautare->SQL->Clear();
			dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE DENUMIRE=:DENUMIRE");
			dm->QCautare->ParamByName("DENUMIRE")->AsString = Edit8->Text;
			dm->QCautare->Open();
		}
		else
		{
            dm->QCautare->Close();
			dm->QCautare->SQL->Clear();
			dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE PRET=:PRET");
			dm->QCautare->ParamByName("PRET")->AsString = Edit8->Text;
			dm->QCautare->Open();
        }
	}
    else ShowMessage("Completati campul!");
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::SpeedButton7Click(TObject *Sender)
{

	if(RB1->Checked)
	{
        dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add("DELETE FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID");
		dm->QLiber->ParamByName("ARTICOL_ID")->AsInteger = Edit8->Text.ToInt();
        dm->QLiber->ExecSQL();
	}
	else if(RB2->Checked)
	{
        dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add("DELETE FROM ARTICOL WHERE DENUMIRE=:DENUMIRE");
		dm->QLiber->ParamByName("DENUMIRE")->AsString = Edit8->Text;
		dm->QLiber->ExecSQL();
	}
	else
	{
        dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add("DELETE FROM ARTICOL WHERE PRET=:PRET");
		dm->QLiber->ParamByName("PRET")->AsString = Edit8->Text;
		dm->QLiber->ExecSQL();
	}

    Edit8->Clear();

    //panelul cu intrebarea
	Panel8->Visible = true;
	Panel8->Enabled = true;

}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::Button5Click(TObject *Sender)
{
	Edit8->Clear();
    //panelul cu intrebarea
	Panel8->Visible = false;
	Panel8->Enabled = false;
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::Button6Click(TObject *Sender)
{
	Edit8->Clear();
	Panel8->Visible = false;
    Panel8->Enabled = false;
	TabSheet4->TabVisible = false;
    TabSheet1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::SpeedButton8Click(TObject *Sender)
{
	Edit8->Clear();
	TabSheet4->TabVisible = false;
    TabSheet1->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareArticole::RB3Click(TObject *Sender)
{
	Edit8->Clear();
    Edit8->TextHint = "Pret";
}
//---------------------------------------------------------------------------

