//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "IntroducereMateriale.h"
#include "DataModule1.h"
#include "NewComand.h"
#include "EditComand.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFIntroducereMateriale *FIntroducereMateriale;
float pret_precedent,pret_precedent2,pret_precedent3,pret_precedent4,pret_precedent5;
//---------------------------------------------------------------------------
__fastcall TFIntroducereMateriale::TFIntroducereMateriale(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFIntroducereMateriale::RB1Click(TObject *Sender)
{
	Edit2->Clear();
	Edit2->TextHint = "Cod materiale";
}
//---------------------------------------------------------------------------
void __fastcall TFIntroducereMateriale::RB2Click(TObject *Sender)
{
	Edit2->Clear();
	Edit2->TextHint = "Denumire";
}
//---------------------------------------------------------------------------
void __fastcall TFIntroducereMateriale::RB3Click(TObject *Sender)
{
	Edit2->Clear();
	dm->QCautareMaterial->Close();
	dm->QCautareMaterial->SQL->Clear();
	dm->QCautareMaterial->SQL->Add("SELECT * FROM MATERIAL");
    dm->QCautareMaterial->Open();
}
//---------------------------------------------------------------------------
void __fastcall TFIntroducereMateriale::SpeedButton4Click(TObject *Sender)
{
    FIntroducereMateriale->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFIntroducereMateriale::Image2Click(TObject *Sender)
{
	if(Edit2->Text!="")
	{
		if(RB1->Checked)
		{
			dm->QCautareMaterial->Close();
			dm->QCautareMaterial->SQL->Clear();
			dm->QCautareMaterial->SQL->Add("SELECT * FROM MATERIAL WHERE MATERIAL_ID=:MATERIAL_ID");
			dm->QCautareMaterial->ParamByName("MATERIAL_ID")->AsInteger = Edit2->Text.ToInt();
			dm->QCautareMaterial->Open();
		}
		else if(RB2->Checked)
		{
            dm->QCautareMaterial->Close();
			dm->QCautareMaterial->SQL->Clear();
			dm->QCautareMaterial->SQL->Add("SELECT * FROM MATERIAL WHERE DENUMIRE=:DENUMIRE");
            dm->QCautareMaterial->ParamByName("DENUMIRE")->AsString = Edit2->Text;
			dm->QCautareMaterial->Open();
        }
	}
    else ShowMessage("Nu a fost introdusa informatia in caseta!");
}
//---------------------------------------------------------------------------
void __fastcall TFIntroducereMateriale::FormClose(TObject *Sender, TCloseAction &Action)
{
    Edit2->Clear();
}
//---------------------------------------------------------------------------

void __fastcall TFIntroducereMateriale::SpeedButton3Click(TObject *Sender)
{

    //completam editurile cu denumirea materiale
	//NewComand
    Label1->Caption = dm->QCautareMaterial->FieldByName("PRET")->AsFloat;
	if(FComand->Label34->Caption == "1")
	{
		FComand->Edit15->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;

        //Transmitem pretul
		//verificam daca caseta e goala
		float suma_total;
		if(FComand->Edit15->Text=="")
		{
			//adunam pretul
			suma_total = FComand->Edit20->Text.ToDouble() + Label1->Caption.ToDouble();
		}
		else
		{
			//scadem pretul precedent si adunam pretul curent
			suma_total = FComand->Edit20->Text.ToDouble() - pret_precedent;
			suma_total = suma_total + Label1->Caption.ToDouble();
		}
		FComand->Edit20->Text = String(suma_total);
		pret_precedent = Label1->Caption.ToDouble();
	}
	else if(FComand->Label34->Caption == "2")
	{
		FComand->Edit16->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;

		//Transmitem pretul
		//verificam daca caseta e goala
		float suma_total;
		if(FComand->Edit16->Text=="")
		{
			//adunam pretul
			suma_total = FComand->Edit21->Text.ToDouble() + Label1->Caption.ToDouble();
		}
		else
		{
			//scadem pretul precedent si adunam pretul curent
			suma_total = FComand->Edit21->Text.ToDouble() - pret_precedent2;
			suma_total = suma_total + Label1->Caption.ToDouble();
		}
		FComand->Edit21->Text = String(suma_total);
		pret_precedent2 = Label1->Caption.ToDouble();
	}
	else if(FComand->Label34->Caption == "3")
	{
		FComand->Edit17->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;

        //Transmitem pretul
		//verificam daca caseta e goala
		float suma_total;
		if(FComand->Edit17->Text=="")
		{
			//adunam pretul
			suma_total = FComand->Edit22->Text.ToDouble() + Label1->Caption.ToDouble();
		}
		else
		{
			//scadem pretul precedent si adunam pretul curent
			suma_total = FComand->Edit22->Text.ToDouble() - pret_precedent3;
			suma_total = suma_total + Label1->Caption.ToDouble();
		}
		FComand->Edit22->Text = String(suma_total);
		pret_precedent3 = Label1->Caption.ToDouble();
	}
	else if(FComand->Label34->Caption == "4")
	{
		FComand->Edit18->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;

        //Transmitem pretul
		//verificam daca caseta e goala
		float suma_total;
		if(FComand->Edit18->Text=="")
		{
			//adunam pretul
			suma_total = FComand->Edit23->Text.ToDouble() + Label1->Caption.ToDouble();
		}
		else
		{
			//scadem pretul precedent si adunam pretul curent
			suma_total = FComand->Edit23->Text.ToDouble() - pret_precedent4;
			suma_total = suma_total + Label1->Caption.ToDouble();
		}
		FComand->Edit23->Text = String(suma_total);
		pret_precedent4 = Label1->Caption.ToDouble();
	}
	else if(FComand->Label34->Caption == "5")
	{
		FComand->Edit19->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;

		//Transmitem pretul
		//verificam daca caseta e goala
		float suma_total;
		if(FComand->Edit19->Text=="")
		{
			//adunam pretul
			suma_total = FComand->Edit24->Text.ToDouble() + Label1->Caption.ToDouble();
		}
		else
		{
			//scadem pretul precedent si adunam pretul curent
			suma_total = FComand->Edit24->Text.ToDouble() - pret_precedent5;
			suma_total = suma_total + Label1->Caption.ToDouble();
		}
		FComand->Edit24->Text = String(suma_total);
		pret_precedent5 = Label1->Caption.ToDouble();
    }
	//EditComand
	if(FEditComand->Label34->Caption == "1")
		FEditComand->Edit15->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
	else if(FEditComand->Label34->Caption == "2")
		FEditComand->Edit16->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
	else if(FEditComand->Label34->Caption == "3")
		FEditComand->Edit17->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
	else if(FEditComand->Label34->Caption == "4")
		FEditComand->Edit18->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
	else if(FEditComand->Label34->Caption == "5")
		FEditComand->Edit19->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;

	//extragem id-ul serviciului si il inscriem in label
	//NewComand
	if(FComand->Label34->Caption == "1")
		FComand->Label42->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FComand->Label34->Caption == "2")
		FComand->Label49->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FComand->Label34->Caption == "3")
		FComand->Label50->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FComand->Label34->Caption == "4")
		FComand->Label51->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FComand->Label34->Caption == "5")
		FComand->Label52->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	//EditComand
	if(FEditComand->Label34->Caption == "1")
		FEditComand->Label42->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FEditComand->Label34->Caption == "2")
		FEditComand->Label49->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FEditComand->Label34->Caption == "3")
		FEditComand->Label50->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FEditComand->Label34->Caption == "4")
		FEditComand->Label51->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FEditComand->Label34->Caption == "5")
		FEditComand->Label52->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;

/*
	//completam editurile cu denumirea materiale
	//NewComand
    Label1->Caption = dm->QCautareMaterial->FieldByName("PRET")->AsFloat;
	if(FComand->Label20->Caption == "1")
		FComand->Edit15->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
	else if(FComand->Label20->Caption == "2")
		FComand->Edit16->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
	else if(FComand->Label20->Caption == "3")
		FComand->Edit17->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
	else if(FComand->Label20->Caption == "4")
		FComand->Edit18->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
	else if(FComand->Label20->Caption == "5")
		FComand->Edit19->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
	//EditComand
	if(FEditComand->Label20->Caption == "1")
		FEditComand->Edit15->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
	else if(FEditComand->Label20->Caption == "2")
		FEditComand->Edit16->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
	else if(FEditComand->Label20->Caption == "3")
		FEditComand->Edit17->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
	else if(FEditComand->Label20->Caption == "4")
		FEditComand->Edit18->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
	else if(FEditComand->Label20->Caption == "5")
		FEditComand->Edit19->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;

	//extragem id-ul serviciului si il inscriem in label
	//NewComand
    if(FComand->Label20->Caption == "1")
		FComand->Label42->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FComand->Label20->Caption == "2")
		FComand->Label49->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FComand->Label20->Caption == "3")
		FComand->Label50->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FComand->Label20->Caption == "4")
		FComand->Label51->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FComand->Label20->Caption == "5")
		FComand->Label52->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	//EditComand
	if(FEditComand->Label20->Caption == "1")
		FEditComand->Label42->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FEditComand->Label20->Caption == "2")
		FEditComand->Label49->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FEditComand->Label20->Caption == "3")
		FEditComand->Label50->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FEditComand->Label20->Caption == "4")
		FEditComand->Label51->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
	else if(FEditComand->Label20->Caption == "5")
		FEditComand->Label52->Caption = dm->QCautareMaterial->FieldByName("MATERIAL_ID")->AsString;
 */
	FIntroducereMateriale->Close();
}
//---------------------------------------------------------------------------


void __fastcall TFIntroducereMateriale::RadioButton2Click(TObject *Sender)
{
	Edit2->Clear();
    Edit2->TextHint = "Pret";
}
//---------------------------------------------------------------------------

