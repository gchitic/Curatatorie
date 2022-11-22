//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "NewComand.h"
#include "Introducerea.h"
#include "IntroducereServicii.h"
#include "IntroducereArticole.h"
#include "IntroducereMateriale.h"
#include "DataModule1.h"
#include "Main.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFComand *FComand;
int visible = 1;
int tabVisible;
float pret,total,datorie;
bool activ=1;
int client_id,operator_id;
//---------------------------------------------------------------------------
__fastcall TFComand::TFComand(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFComand::FormShow(TObject *Sender)
{
	//servicii
	Edit5->Visible = false;
	Edit6->Visible = false;
	Edit7->Visible = false;
	Edit8->Visible = false;
	SpeedButton6->Visible = false;
	SpeedButton7->Visible = false;
	SpeedButton8->Visible = false;
	SpeedButton9->Visible = false;
	//articole
	Edit10->Visible = false;
	Edit11->Visible = false;
	Edit12->Visible = false;
	Edit13->Visible = false;
	SpeedButton11->Visible = false;
	SpeedButton12->Visible = false;
	SpeedButton13->Visible = false;
	SpeedButton14->Visible = false;
	//materiale
	Edit16->Visible = false;
	Edit17->Visible = false;
	Edit18->Visible = false;
	Edit19->Visible = false;
	SpeedButton16->Visible = false;
	SpeedButton17->Visible = false;
	SpeedButton18->Visible = false;
    SpeedButton19->Visible = false;
	//memo
	Memo2->Visible = false;
	Memo3->Visible = false;
	Memo4->Visible = false;
	Memo5->Visible = false;
	//pret
	Edit21->Visible = false;
	Edit22->Visible = false;
	Edit23->Visible = false;
	Edit24->Visible = false;
	Label23->Visible = false;
	Label24->Visible = false;
	Label25->Visible = false;
	Label26->Visible = false;

    //curatam campurile//curatam campurile
	Edit1->Clear();
	Edit2->Clear();
	Edit3->Clear();
	Edit4->Clear();
	Edit5->Clear();
	Edit6->Clear();
	Edit7->Clear();
	Edit8->Clear();
	Edit9->Clear();
	Edit10->Clear();
	Edit11->Clear();
	Edit12->Clear();
	Edit13->Clear();
	Edit15->Clear();
	Edit16->Clear();
	Edit17->Clear();
	Edit18->Clear();
	Edit19->Clear();
    Memo1->Lines->Text = "-";
	Memo2->Lines->Text = "-";
	Memo3->Lines->Text = "-";
	Memo4->Lines->Text = "-";
	Memo5->Lines->Text = "-";
//	Memo1->Lines->Clear();
//	Memo2->Lines->Clear();
//	Memo3->Lines->Clear();
//	Memo4->Lines->Clear();
//	Memo5->Lines->Clear();
	Edit20->Text = "0";
	Edit21->Text = "0";
	Edit22->Text = "0";
	Edit23->Text = "0";
	Edit24->Text = "0";

	Label20->Caption = "1";
	Label8->Caption = "000";
	Label14->Caption = "000";
	Edit14->Clear();

	SpeedButton1->Enabled = true;
    SpeedButton2->Enabled = false;
}
//---------------------------------------------------------------------------


void __fastcall TFComand::Image2Click(TObject *Sender)
{
	if(visible==1)
	{
		Edit5->Visible = true;
		SpeedButton6->Visible = true;
		Edit10->Visible = true;
		SpeedButton11->Visible = true;
		Edit16->Visible = true;
		SpeedButton16->Visible = true;
		Memo2->Visible = true;
		Edit21->Visible = true;
		Label23->Visible = true;
		visible++;
		Label20->Caption = "2";
	}
	else if(visible==2)
	{
		Edit6->Visible = true;
		SpeedButton7->Visible = true;
		Edit11->Visible = true;
		SpeedButton12->Visible = true;
		Edit17->Visible = true;
		SpeedButton17->Visible = true;
		Memo3->Visible = true;
		Edit22->Visible = true;
		Label24->Visible = true;
		visible++;
		Label20->Caption = "3";

	}
	else if(visible==3)
	{
		Edit7->Visible = true;
		SpeedButton8->Visible = true;
		Edit12->Visible = true;
		SpeedButton13->Visible = true;
		Edit18->Visible = true;
		SpeedButton18->Visible = true;
		Memo4->Visible = true;
		Edit23->Visible = true;
		Label25->Visible = true;
		visible++;
		Label20->Caption = "4";
	}
	else if(visible==4)
	{
		Edit8->Visible = true;
		SpeedButton9->Visible = true;
		Edit13->Visible = true;
		SpeedButton14->Visible = true;
		Edit19->Visible = true;
		SpeedButton19->Visible = true;
		Memo5->Visible = true;
		Edit24->Visible = true;
		Label26->Visible = true;
		visible++;
		Label20->Caption = "5";
	}
	else
	{
		ShowMessage("Nu se permite mai mult de 5 inregistrari!");
		visible++;
	}

}
//---------------------------------------------------------------------------

void __fastcall TFComand::Image4Click(TObject *Sender)
{
	if(visible==5)
	{
		Edit8->Visible = false;
		SpeedButton9->Visible = false;
		Edit13->Visible = false;
		SpeedButton14->Visible = false;
		Edit19->Visible = false;
		SpeedButton19->Visible = false;
		Memo5->Visible = false;
		Edit24->Visible = false;
		Label26->Visible = false;
		visible--;
		Label20->Caption = "4";

		//curatam
		Edit8->Clear();
		Edit13->Clear();
		Edit19->Clear();
		Memo5->Clear();
		Edit24->Clear();
	}
	else if(visible==4)
	{
		Edit7->Visible = false;
		SpeedButton8->Visible = false;
		Edit12->Visible = false;
		SpeedButton13->Visible = false;
		Edit18->Visible = false;
		SpeedButton18->Visible = false;
		Memo4->Visible = false;
		Edit23->Visible = false;
        Label25->Visible = false;
		visible--;
		Label20->Caption = "3";

        //curatam
		Edit7->Clear();
		Edit12->Clear();
		Edit18->Clear();
		Memo4->Clear();
		Edit23->Clear();
	}
	else if(visible==3)
	{
		Edit6->Visible = false;
		SpeedButton7->Visible = false;
		Edit11->Visible = false;
		SpeedButton12->Visible = false;
		Edit17->Visible = false;
		SpeedButton17->Visible = false;
		Memo3->Visible = false;
		Edit22->Visible = false;
        Label24->Visible = false;
		visible--;
		Label20->Caption = "2";

        //curatam
		Edit6->Clear();
		Edit11->Clear();
		Edit17->Clear();
		Memo3->Clear();
		Edit22->Clear();
	}
	else if(visible==2)
	{
		Edit5->Visible = false;
		SpeedButton6->Visible = false;
		Edit10->Visible = false;
		SpeedButton11->Visible = false;
		Edit16->Visible = false;
		SpeedButton16->Visible = false;
		Memo2->Visible = false;
		Edit21->Visible = false;
        Label23->Visible = false;
		visible--;
		Label20->Caption = "1";

        //curatam
		Edit5->Clear();
		Edit10->Clear();
		Edit16->Clear();
		Memo2->Clear();
        Edit21->Clear();
	}
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton5Click(TObject *Sender)
{
    Label34->Caption = "1";
	FIntroducereServicii->ShowModal();
}

//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton10Click(TObject *Sender)
{
    Label34->Caption = "1";
	FIntroducereArticole->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton15Click(TObject *Sender)
{
    Label34->Caption = "1";
	FIntroducereMateriale->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton6Click(TObject *Sender)
{
    Label34->Caption = "2";
    FIntroducereServicii->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton7Click(TObject *Sender)
{
    Label34->Caption = "3";
    FIntroducereServicii->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton8Click(TObject *Sender)
{
    Label34->Caption = "4";
    FIntroducereServicii->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton9Click(TObject *Sender)
{
    Label34->Caption = "5";
    FIntroducereServicii->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton11Click(TObject *Sender)
{
    Label34->Caption = "2";
    FIntroducereArticole->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton12Click(TObject *Sender)
{
    Label34->Caption = "3";
    FIntroducereArticole->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton13Click(TObject *Sender)
{
	Label34->Caption = "4";
    FIntroducereArticole->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton14Click(TObject *Sender)
{
	Label34->Caption = "5";
    FIntroducereArticole->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton16Click(TObject *Sender)
{
    Label34->Caption = "2";
	FIntroducereMateriale->ShowModal();
}
//---------------------------------------------------------------------------


void __fastcall TFComand::SpeedButton17Click(TObject *Sender)
{
    Label34->Caption = "3";
	FIntroducereMateriale->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton18Click(TObject *Sender)
{
    Label34->Caption = "4";
    FIntroducereMateriale->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton19Click(TObject *Sender)
{
    Label34->Caption = "5";
    FIntroducereMateriale->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFComand::Button1Click(TObject *Sender)
{
    pret = (FIntroducereServicii->Label1->Caption.ToDouble()) + (FIntroducereArticole->Label1->Caption.ToDouble()) + (FIntroducereMateriale->Label1->Caption.ToDouble());
	if(visible==1)
	{
		Edit20->Text = String(pret);
        pret = 0;
	}
	else if(visible==2)
	{
		Edit21->Text = String(pret);
        pret = 0;
	}
	else if(visible==3)
	{
		Edit22->Text = String(pret);
		pret = 0;
	}
	else if(visible==4)
	{
        Edit23->Text = String(pret);
		pret = 0;
	}
	else if(visible==5)
	{
        Edit24->Text = String(pret);
		pret = 0;
	}

}
//---------------------------------------------------------------------------


void __fastcall TFComand::Panel6Click(TObject *Sender)
{
	total = Edit20->Text.ToDouble() + Edit21->Text.ToDouble() + Edit22->Text.ToDouble() + Edit23->Text.ToDouble() + Edit24->Text.ToDouble();
    Label8->Caption = String(total);
}
//---------------------------------------------------------------------------

void __fastcall TFComand::Panel7Click(TObject *Sender)
{
	datorie = Label8->Caption.ToDouble() - Edit14->Text.ToDouble();
    Label14->Caption = String(datorie);
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton2Click(TObject *Sender)
{
	activ = 1;
	SpeedButton2->Enabled = false;  //activ
	SpeedButton1->Enabled = true;  //inactiv
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton1Click(TObject *Sender)
{
	activ = 0;
	SpeedButton1->Enabled = false;  //inactiv
    SpeedButton2->Enabled = true;   //activ
}
//---------------------------------------------------------------------------

void __fastcall TFComand::Image1Click(TObject *Sender)
{
	AnsiString s;
	s = "INSERT INTO CLIENT(NUME,PRENUME,NR_TELEFON) ";
	s+= "VALUES(:NUME,:PRENUME,:NR_TELEFON)";

	dm->QLiber->Close();
	dm->QLiber->SQL->Clear();
	dm->QLiber->SQL->Add(s);
	dm->QLiber->ParamByName("NUME")->AsString = Edit1->Text;
	dm->QLiber->ParamByName("PRENUME")->AsString = Edit2->Text;
	dm->QLiber->ParamByName("NR_TELEFON")->AsInteger = Edit3->Text.ToInt();
	dm->QLiber->ExecSQL();

	ShowMessage("Client inregistrat cu succes!");
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton4Click(TObject *Sender)
{
    FComand->Close();
}
//---------------------------------------------------------------------------

void __fastcall TFComand::FormClose(TObject *Sender, TCloseAction &Action)
{
    visible = 1;
    //curatam campurile
	Edit1->Clear();
	Edit2->Clear();
	Edit3->Clear();
	Edit4->Clear();
	Edit5->Clear();
	Edit6->Clear();
	Edit7->Clear();
	Edit8->Clear();
	Edit9->Clear();
	Edit10->Clear();
	Edit11->Clear();
	Edit12->Clear();
	Edit13->Clear();
	Edit15->Clear();
	Edit16->Clear();
	Edit17->Clear();
	Edit18->Clear();
	Edit19->Clear();
	Memo1->Lines->Clear();
	Memo2->Lines->Clear();
	Memo3->Lines->Clear();
	Memo4->Lines->Clear();
	Memo5->Lines->Clear();
	Edit20->Text = "0";
	Edit21->Text = "0";
	Edit22->Text = "0";
	Edit23->Text = "0";
	Edit24->Text = "0";

	Label20->Caption = "1";
	Label8->Caption = "000";
	Label14->Caption = "000";
	Edit14->Clear();

    //le facem transparente
	Edit5->Visible = false;
	Edit6->Visible = false;
	Edit7->Visible = false;
	Edit8->Visible = false;
	SpeedButton6->Visible = false;
	SpeedButton7->Visible = false;
	SpeedButton8->Visible = false;
	SpeedButton9->Visible = false;
	Edit10->Visible = false;
	Edit11->Visible = false;
	Edit12->Visible = false;
	Edit13->Visible = false;
	SpeedButton11->Visible = false;
	SpeedButton12->Visible = false;
	SpeedButton13->Visible = false;
	SpeedButton14->Visible = false;
	Edit16->Visible = false;
	Edit17->Visible = false;
	Edit18->Visible = false;
	Edit19->Visible = false;
	SpeedButton16->Visible = false;
	SpeedButton17->Visible = false;
	SpeedButton18->Visible = false;
	SpeedButton19->Visible = false;
	Memo2->Visible = false;
	Memo3->Visible = false;
	Memo4->Visible = false;
	Memo5->Visible = false;
	Edit21->Visible = false;
	Edit22->Visible = false;
	Edit23->Visible = false;
	Edit24->Visible = false;
	Label23->Visible = false;
	Label24->Visible = false;
	Label25->Visible = false;
	Label26->Visible = false;
}
//---------------------------------------------------------------------------

void __fastcall TFComand::SpeedButton3Click(TObject *Sender)
{
    //extragem id-ul clientului
	dm->QCautare->Close();
	dm->QCautare->SQL->Clear();
	dm->QCautare->SQL->Add("SELECT * FROM CLIENT WHERE NUME=:NUME AND NR_TELEFON=:NR_TELEFON");
	dm->QCautare->ParamByName("NUME")->AsString = Edit1->Text;
	dm->QCautare->ParamByName("NR_TELEFON")->AsInteger = Edit3->Text.ToInt();
    dm->QCautare->Open();
	client_id = dm->QCautare->FieldByName("CLIENT_ID")->AsInteger;

	//id-ul operatorului
	operator_id = FMain->Label9->Caption.ToInt();

	AnsiString s;
	s = "INSERT INTO COMANDA(CLIENT_ID,OPERATOR_ID,SERVICIU1_ID,ARTICOL1_ID,MATERIAL1_ID,COMENTARIU1,PRET1, ";
	s+= "ACTIV,ACHITAT,DATORIE,SUMA_TOTAL,DATA_LUCRU,DATA_RETURN ";

	if(visible==1)
	{
		s+= "VALUES(:CLIENT_ID,:OPERATOR_ID,:SERVICIU1_ID,:ARTICOL1_ID,:MATERIAL1_ID,:COMENTARIU1,:PRET1)";
        dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add(s);
		dm->QLiber->ParamByName("CLIENT_ID")->AsInteger =  client_id;
		dm->QLiber->ParamByName("OPERATOR_ID")->AsInteger = operator_id;	//!!!!

		dm->QLiber->ParamByName("SERVICIU1_ID")->AsInteger = Label27->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL1_ID")->AsInteger = Label44->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL1_ID")->AsInteger = Label42->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU1")->AsString = Memo1->Lines->Text;
		dm->QLiber->ParamByName("PRET1")->AsFloat = Edit20->Text.ToDouble();
	}
	else if(visible==2)
	{
		s+= ",SERVICIU2_ID,ARTICOL2_ID,MATERIAL2_ID,COMENTARIU2,PRET2 ) ";
		s+= "VALUES(:CLIENT_ID,:OPERATOR_ID,:SERVICIU1_ID,:ARTICOL1_ID,:MATERIAL1_ID,:COMENTARIU1,:PRET1, ";
		s+= ":ACTIV,:ACHITAT,:DATORIE,:SUMA_TOTAL,:DATA_LUCRU,:DATA_RETURN, ";
		s+= ":SERVICIU2_ID,:ARTICOL2_ID,:MATERIAL2_ID,:COMENTARIU2,:PRET2)";

		dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add(s);
		dm->QLiber->ParamByName("CLIENT_ID")->AsInteger =  client_id;
		dm->QLiber->ParamByName("OPERATOR_ID")->AsInteger = operator_id;	//!!!!

		dm->QLiber->ParamByName("SERVICIU1_ID")->AsInteger = Label27->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL1_ID")->AsInteger = Label44->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL1_ID")->AsInteger = Label42->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU1")->AsString = Memo1->Lines->Text;
		dm->QLiber->ParamByName("PRET1")->AsFloat = Edit20->Text.ToDouble();

		dm->QLiber->ParamByName("SERVICIU2_ID")->AsInteger = Label29->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL2_ID")->AsInteger = Label45->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL2_ID")->AsInteger = Label49->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU2")->AsString = Memo2->Lines->Text;
		dm->QLiber->ParamByName("PRET2")->AsFloat = Edit21->Text.ToDouble();
	}
	else if(visible==3)
	{
		s+= ",SERVICIU2_ID,ARTICOL2_ID,MATERIAL2_ID,COMENTARIU2,PRET2, ";
		s+= "SERVICIU3_ID,ARTICOL3_ID,MATERIAL3_ID,COMENTARIU3,PRET3 )";
		s+= "VALUES(:CLIENT_ID,:OPERATOR_ID,:SERVICIU1_ID,:ARTICOL1_ID,:MATERIAL1_ID,:COMENTARIU1,:PRET1, ";
		s+= ":ACTIV,:ACHITAT,:DATORIE,:SUMA_TOTAL,:DATA_LUCRU,:DATA_RETURN, ";
		s+= ":SERVICIU2_ID,:ARTICOL2_ID,:MATERIAL2_ID,:COMENTARIU2,:PRET2, ";
        s+= ":SERVICIU3_ID,:ARTICOL3_ID,:MATERIAL3_ID,:COMENTARIU3,:PRET3)";

		dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add(s);
		dm->QLiber->ParamByName("CLIENT_ID")->AsInteger =  client_id;
		dm->QLiber->ParamByName("OPERATOR_ID")->AsInteger = operator_id;	//!!!!

		dm->QLiber->ParamByName("SERVICIU1_ID")->AsInteger = Label27->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL1_ID")->AsInteger = Label44->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL1_ID")->AsInteger = Label42->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU1")->AsString = Memo1->Lines->Text;
		dm->QLiber->ParamByName("PRET1")->AsFloat = Edit20->Text.ToDouble();

		dm->QLiber->ParamByName("SERVICIU2_ID")->AsInteger = Label29->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL2_ID")->AsInteger = Label45->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL2_ID")->AsInteger = Label49->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU2")->AsString = Memo2->Lines->Text;
		dm->QLiber->ParamByName("PRET2")->AsFloat = Edit21->Text.ToDouble();

		dm->QLiber->ParamByName("SERVICIU3_ID")->AsInteger = Label30->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL3_ID")->AsInteger = Label46->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL3_ID")->AsInteger = Label50->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU3")->AsString = Memo3->Lines->Text;
		dm->QLiber->ParamByName("PRET3")->AsFloat = Edit22->Text.ToDouble();
	}
	else if(visible==4)
	{
		s+= ",SERVICIU2_ID,ARTICOL2_ID,MATERIAL2_ID,COMENTARIU2,PRET2, ";
		s+= "SERVICIU3_ID,ARTICOL3_ID,MATERIAL3_ID,COMENTARIU3,PRET3, ";
		s+= "SERVICIU4_ID,ARTICOL4_ID,MATERIAL4_ID,COMENTARIU4,PRET4)";
		s+= "VALUES(:CLIENT_ID,:OPERATOR_ID,:SERVICIU1_ID,:ARTICOL1_ID,:MATERIAL1_ID,:COMENTARIU1,:PRET1, ";
		s+= ":ACTIV,:ACHITAT,:DATORIE,:SUMA_TOTAL,:DATA_LUCRU,:DATA_RETURN, ";
		s+= ":SERVICIU2_ID,:ARTICOL2_ID,:MATERIAL2_ID,:COMENTARIU2,:PRET2, ";
		s+= ":SERVICIU3_ID,:ARTICOL3_ID,:MATERIAL3_ID,:COMENTARIU3,:PRET3, ";
		s+= ":SERVICIU4_ID,:ARTICOL4_ID,:MATERIAL4_ID,:COMENTARIU4,:PRET4)";

		dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add(s);
		dm->QLiber->ParamByName("CLIENT_ID")->AsInteger =  client_id;
		dm->QLiber->ParamByName("OPERATOR_ID")->AsInteger = operator_id;	//!!!!

		dm->QLiber->ParamByName("SERVICIU1_ID")->AsInteger = Label27->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL1_ID")->AsInteger = Label44->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL1_ID")->AsInteger = Label42->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU1")->AsString = Memo1->Lines->Text;
		dm->QLiber->ParamByName("PRET1")->AsFloat = Edit20->Text.ToDouble();

		dm->QLiber->ParamByName("SERVICIU2_ID")->AsInteger = Label29->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL2_ID")->AsInteger = Label45->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL2_ID")->AsInteger = Label49->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU2")->AsString = Memo2->Lines->Text;
		dm->QLiber->ParamByName("PRET2")->AsFloat = Edit21->Text.ToDouble();

		dm->QLiber->ParamByName("SERVICIU3_ID")->AsInteger = Label30->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL3_ID")->AsInteger = Label46->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL3_ID")->AsInteger = Label50->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU3")->AsString = Memo3->Lines->Text;
		dm->QLiber->ParamByName("PRET3")->AsFloat = Edit22->Text.ToDouble();

		dm->QLiber->ParamByName("SERVICIU4_ID")->AsInteger = Label31->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL4_ID")->AsInteger = Label47->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL4_ID")->AsInteger = Label51->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU4")->AsString = Memo4->Lines->Text;
		dm->QLiber->ParamByName("PRET4")->AsFloat = Edit23->Text.ToDouble();
	}
	else if(visible==5)
	{
		s+= ",SERVICIU2_ID,ARTICOL2_ID,MATERIAL2_ID,COMENTARIU2,PRET2, ";
		s+= "SERVICIU3_ID,ARTICOL3_ID,MATERIAL3_ID,COMENTARIU3,PRET3, ";
		s+= "SERVICIU4_ID,ARTICOL4_ID,MATERIAL4_ID,COMENTARIU4,PRET4, ";
        s+= "SERVICIU5_ID,ARTICOL5_ID,MATERIAL5_ID,COMENTARIU5,PRET5) ";
		s+= "VALUES(:CLIENT_ID,:OPERATOR_ID,:SERVICIU1_ID,:ARTICOL1_ID,:MATERIAL1_ID,:COMENTARIU1,:PRET1, ";
		s+= ":ACTIV,:ACHITAT,:DATORIE,:SUMA_TOTAL,:DATA_LUCRU,:DATA_RETURN, ";
		s+= ":SERVICIU2_ID,:ARTICOL2_ID,:MATERIAL2_ID,:COMENTARIU2,:PRET2, ";
		s+= ":SERVICIU3_ID,:ARTICOL3_ID,:MATERIAL3_ID,:COMENTARIU3,:PRET3, ";
		s+= ":SERVICIU4_ID,:ARTICOL4_ID,:MATERIAL4_ID,:COMENTARIU4,:PRET4, ";
        s+= ":SERVICIU5_ID,:ARTICOL5_ID,:MATERIAL5_ID,:COMENTARIU5,:PRET5) ";

		dm->QLiber->Close();
		dm->QLiber->SQL->Clear();
		dm->QLiber->SQL->Add(s);
		dm->QLiber->ParamByName("CLIENT_ID")->AsInteger =  client_id;
		dm->QLiber->ParamByName("OPERATOR_ID")->AsInteger = operator_id;	//!!!!

		dm->QLiber->ParamByName("SERVICIU1_ID")->AsInteger = Label27->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL1_ID")->AsInteger = Label44->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL1_ID")->AsInteger = Label42->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU1")->AsString = Memo1->Lines->Text;
		dm->QLiber->ParamByName("PRET1")->AsFloat = Edit20->Text.ToDouble();

		dm->QLiber->ParamByName("SERVICIU2_ID")->AsInteger = Label29->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL2_ID")->AsInteger = Label45->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL2_ID")->AsInteger = Label49->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU2")->AsString = Memo2->Lines->Text;
		dm->QLiber->ParamByName("PRET2")->AsFloat = Edit21->Text.ToDouble();

		dm->QLiber->ParamByName("SERVICIU3_ID")->AsInteger = Label30->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL3_ID")->AsInteger = Label46->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL3_ID")->AsInteger = Label50->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU3")->AsString = Memo3->Lines->Text;
		dm->QLiber->ParamByName("PRET3")->AsFloat = Edit22->Text.ToDouble();

        dm->QLiber->ParamByName("SERVICIU4_ID")->AsInteger = Label31->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL4_ID")->AsInteger = Label47->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL4_ID")->AsInteger = Label51->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU4")->AsString = Memo4->Lines->Text;
		dm->QLiber->ParamByName("PRET4")->AsFloat = Edit23->Text.ToDouble();

        dm->QLiber->ParamByName("SERVICIU5_ID")->AsInteger = Label32->Caption.ToInt();
		dm->QLiber->ParamByName("ARTICOL5_ID")->AsInteger = Label48->Caption.ToInt();
		dm->QLiber->ParamByName("MATERIAL5_ID")->AsInteger = Label52->Caption.ToInt();
		dm->QLiber->ParamByName("COMENTARIU5")->AsString = Memo5->Lines->Text;
		dm->QLiber->ParamByName("PRET5")->AsFloat = Edit24->Text.ToDouble();
	}


	dm->QLiber->ParamByName("ACTIV")->AsBoolean = activ;
	dm->QLiber->ParamByName("ACHITAT")->AsFloat = Edit14->Text.ToDouble();
	dm->QLiber->ParamByName("DATORIE")->AsFloat = datorie;
	dm->QLiber->ParamByName("SUMA_TOTAL")->AsFloat = total;
	dm->QLiber->ParamByName("DATA_LUCRU")->AsDate = DateTimePicker1->Date;
	dm->QLiber->ParamByName("DATA_RETURN")->AsDate = DateTimePicker2->Date;
	dm->QLiber->ExecSQL();
    ShowMessage("Comanda finalizata!");

}
//---------------------------------------------------------------------------



