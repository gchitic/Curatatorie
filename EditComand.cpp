//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "EditComand.h"
#include "DataModule1.h"
#include "IntroducereServicii.h"
#include "IntroducereArticole.h"
#include "IntroducereMateriale.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFEditComand *FEditComand;
int visible=1,client_id=1;
float pret,total,datorie;
bool activ=1;
//---------------------------------------------------------------------------
__fastcall TFEditComand::TFEditComand(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFEditComand::Image2Click(TObject *Sender)
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
void __fastcall TFEditComand::Image4Click(TObject *Sender)
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
void __fastcall TFEditComand::SpeedButton4Click(TObject *Sender)
{
    FEditComand->Close();
}
//---------------------------------------------------------------------------
void __fastcall TFEditComand::FormClose(TObject *Sender, TCloseAction &Action)
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
void __fastcall TFEditComand::Button1Click(TObject *Sender)
{
	pret = (FIntroducereServicii->Label1->Caption.ToDouble()) + (FIntroducereArticole->Label1->Caption.ToDouble()) + (FIntroducereMateriale->Label1->Caption.ToDouble());
	if(Label34->Caption == "1")
	{
		Edit20->Text = String(pret);
        pret = 0;
	}
	else if(Label34->Caption=="2")
	{
		Edit21->Text = String(pret);
        pret = 0;
	}
	else if(Label34->Caption=="3")
	{
		Edit22->Text = String(pret);
		pret = 0;
	}
	else if(Label34->Caption=="4")
	{
		Edit23->Text = String(pret);
		pret = 0;
	}
	else if(Label34->Caption=="5")
	{
		Edit24->Text = String(pret);
		pret = 0;
	}
/*
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
*/
}
//---------------------------------------------------------------------------
void __fastcall TFEditComand::SpeedButton5Click(TObject *Sender)
{
    Label34->Caption = "1";
    FIntroducereServicii->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TFEditComand::FormShow(TObject *Sender)
{
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




	//Completam campurile cu informatia din comanda
	dm->QModifyComand->Close();
	dm->QModifyComand->SQL->Clear();
	dm->QModifyComand->SQL->Add("SELECT * FROM COMANDA WHERE COMANDA_ID=:COMANDA_ID");
	dm->QModifyComand->ParamByName("COMANDA_ID")->AsInteger = Edit25->Text.ToInt();
	dm->QModifyComand->Open();

	Edit1->Text = dm->QComand->FieldByName("NUME")->AsString;
	Edit2->Text = dm->QComand->FieldByName("PRENUME")->AsString;
	Edit3->Text = dm->QComand->FieldByName("NR_TELEFON")->AsInteger;
	Label8->Caption = dm->QModifyComand->FieldByName("SUMA_TOTAL")->AsFloat;
	Edit14->Text = dm->QModifyComand->FieldByName("ACHITAT")->AsFloat;
	Label14->Caption = dm->QModifyComand->FieldByName("DATORIE")->AsFloat;

	//introducem id-ul serviciilor
	Label27->Caption = dm->QModifyComand->FieldByName("SERVICIU1_ID")->AsInteger;
	Label29->Caption = dm->QModifyComand->FieldByName("SERVICIU2_ID")->AsInteger;
	Label30->Caption = dm->QModifyComand->FieldByName("SERVICIU3_ID")->AsInteger;
	Label31->Caption = dm->QModifyComand->FieldByName("SERVICIU4_ID")->AsInteger;
	Label32->Caption = dm->QModifyComand->FieldByName("SERVICIU5_ID")->AsInteger;
	//introducem id-ul articolelor
	Label44->Caption = dm->QModifyComand->FieldByName("ARTICOL1_ID")->AsInteger;
	Label45->Caption = dm->QModifyComand->FieldByName("ARTICOL2_ID")->AsInteger;
	Label46->Caption = dm->QModifyComand->FieldByName("ARTICOL3_ID")->AsInteger;
	Label47->Caption = dm->QModifyComand->FieldByName("ARTICOL4_ID")->AsInteger;
	Label48->Caption = dm->QModifyComand->FieldByName("ARTICOL5_ID")->AsInteger;
	//introducem id-ul materialelor
	Label42->Caption = dm->QModifyComand->FieldByName("MATERIAL1_ID")->AsInteger;
	Label49->Caption = dm->QModifyComand->FieldByName("MATERIAL2_ID")->AsInteger;
	Label50->Caption = dm->QModifyComand->FieldByName("MATERIAL3_ID")->AsInteger;
	Label51->Caption = dm->QModifyComand->FieldByName("MATERIAL4_ID")->AsInteger;
	Label52->Caption = dm->QModifyComand->FieldByName("MATERIAL5_ID")->AsInteger;


	//Afisam casetele necesare
		//afisam primul rand
			//servicii
	dm->QCautareServicii->Close();
	dm->QCautareServicii->SQL->Clear();
	dm->QCautareServicii->SQL->Add("SELECT * FROM SERVICII WHERE SERVICIU_ID=:SERVICIU_ID");
	dm->QCautareServicii->ParamByName("SERVICIU_ID")->AsInteger = Label27->Caption.ToInt();
	dm->QCautareServicii->Open();
	Edit4->Text = dm->QCautareServicii->FieldByName("DENUMIRE")->AsString;
			//articole
	dm->QCautare->Close();
	dm->QCautare->SQL->Clear();
	dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID");
	dm->QCautare->ParamByName("ARTICOL_ID")->AsInteger = Label44->Caption.ToInt();
	dm->QCautare->Open();
	Edit9->Text = dm->QCautare->FieldByName("DENUMIRE")->AsString;
			//materiale
	dm->QCautareMaterial->Close();
	dm->QCautareMaterial->SQL->Clear();
	dm->QCautareMaterial->SQL->Add("SELECT * FROM MATERIAL WHERE MATERIAL_ID=:MATERIAL_ID");
	dm->QCautareMaterial->ParamByName("MATERIAL_ID")->AsInteger = Label42->Caption.ToInt();
	dm->QCautareMaterial->Open();
	Edit15->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
			//comentariu
	Memo1->Lines->Text = dm->QModifyComand->FieldByName("COMENTARIU1")->AsString;
			//pret
	Edit20->Text = dm->QModifyComand->FieldByName("PRET1")->AsFloat;
	visible=1;

	//SETAM NUMARUL DE CASUTE VIZIBILE
	Label20->Caption = String(visible);

	if(Label29->Caption == "0")  //2rand
	{
    	//2rand -> invizibil
		Edit5->Visible = false;
		Edit10->Visible = false;
		Edit16->Visible = false;
		Memo2->Visible = false;
		Edit21->Visible = false;
		SpeedButton6->Visible = false;
		SpeedButton11->Visible = false;
		SpeedButton16->Visible = false;
		Label23->Visible = false;
        //3rand - >invizibil
		Edit6->Visible = false;
		Edit11->Visible = false;
		Edit17->Visible = false;
		Memo3->Visible = false;
		Edit22->Visible = false;
		SpeedButton7->Visible = false;
		SpeedButton12->Visible = false;
		SpeedButton17->Visible = false;
        Label24->Visible = false;
		//4rand -> invizibil
		Edit7->Visible = false;
		Edit12->Visible = false;
		Edit18->Visible = false;
		Memo4->Visible = false;
		Edit23->Visible = false;
		SpeedButton8->Visible = false;
		SpeedButton13->Visible = false;
		SpeedButton18->Visible = false;
		Label25->Visible = false;
		//5rand - >invizibil
		Edit8->Visible = false;
		Edit13->Visible = false;
		Edit19->Visible = false;
		Memo5->Visible = false;
		Edit24->Visible = false;
		SpeedButton9->Visible = false;
		SpeedButton14->Visible = false;
		SpeedButton19->Visible = false;
		Label26->Visible = false;
	}
	else if(Label30->Caption == "0")   //3rand
	{
		//2rand
		Edit5->Visible = true;
		Edit10->Visible = true;
		Edit16->Visible = true;
		Memo2->Visible = true;
		Edit21->Visible = true;
		SpeedButton6->Visible = true;
		SpeedButton11->Visible = true;
		SpeedButton16->Visible = true;
		Label23->Visible = true;
		//3rand - >invizibil
		Edit6->Visible = false;
		Edit11->Visible = false;
		Edit17->Visible = false;
		Memo3->Visible = false;
		Edit22->Visible = false;
        SpeedButton7->Visible = false;
		SpeedButton12->Visible = false;
		SpeedButton17->Visible = false;
		Label24->Visible = false;
		//4rand -> invizibil
		Edit7->Visible = false;
		Edit12->Visible = false;
		Edit18->Visible = false;
		Memo4->Visible = false;
		Edit23->Visible = false;
        SpeedButton8->Visible = false;
		SpeedButton13->Visible = false;
		SpeedButton18->Visible = false;
		Label25->Visible = false;
		//5rand - >invizibil
		Edit8->Visible = false;
		Edit13->Visible = false;
		Edit19->Visible = false;
		Memo5->Visible = false;
		Edit24->Visible = false;
		SpeedButton9->Visible = false;
		SpeedButton14->Visible = false;
		SpeedButton19->Visible = false;
		Label26->Visible = false;

		//SETAM NUMARUL DE CASUTE VIZIBILE
		visible=2;
        Label20->Caption = String(visible);

		//afisam al 2-lea rand
			//seriviciu
		dm->QCautareServicii->Close();
		dm->QCautareServicii->SQL->Clear();
		dm->QCautareServicii->SQL->Add("SELECT * FROM SERVICII WHERE SERVICIU_ID=:SERVICIU_ID");
		dm->QCautareServicii->ParamByName("SERVICIU_ID")->AsInteger = Label29->Caption.ToInt();
		dm->QCautareServicii->Open();
		Edit5->Text = dm->QCautareServicii->FieldByName("DENUMIRE")->AsString;
			//articol
		dm->QCautare->Close();
		dm->QCautare->SQL->Clear();
		dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID");
		dm->QCautare->ParamByName("ARTICOL_ID")->AsInteger = Label45->Caption.ToInt();
		dm->QCautare->Open();
		Edit10->Text = dm->QCautare->FieldByName("DENUMIRE")->AsString;
			//materiale
		dm->QCautareMaterial->Close();
		dm->QCautareMaterial->SQL->Clear();
		dm->QCautareMaterial->SQL->Add("SELECT * FROM MATERIAL WHERE MATERIAL_ID=:MATERIAL_ID");
		dm->QCautareMaterial->ParamByName("MATERIAL_ID")->AsInteger = Label49->Caption.ToInt();
		dm->QCautareMaterial->Open();
		Edit16->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
			//comentariu
		Memo2->Lines->Text = dm->QModifyComand->FieldByName("COMENTARIU1")->AsString;
			//pret
		Edit21->Text = dm->QModifyComand->FieldByName("PRET1")->AsFloat;
	}
	else if(Label31->Caption == "0")    //4rand
	{
        //2rand
		Edit5->Visible = true;
		Edit10->Visible = true;
		Edit16->Visible = true;
		Memo2->Visible = true;
		Edit21->Visible = true;
		SpeedButton6->Visible = true;
		SpeedButton11->Visible = true;
		SpeedButton16->Visible = true;
		Label23->Visible = true;
		//3rand - >invizibil
		Edit6->Visible = true;
		Edit11->Visible = true;
		Edit17->Visible = true;
		Memo3->Visible = true;
		Edit22->Visible = true;
		SpeedButton7->Visible = true;
		SpeedButton12->Visible = true;
		SpeedButton17->Visible = true;
		Label24->Visible = true;
		//4rand -> invizibil
		Edit7->Visible = false;
		Edit12->Visible = false;
		Edit18->Visible = false;
		Memo4->Visible = false;
		Edit23->Visible = false;
        SpeedButton8->Visible = false;
		SpeedButton13->Visible = false;
		SpeedButton18->Visible = false;
		Label25->Visible = false;
		//5rand - >invizibil
		Edit8->Visible = false;
		Edit13->Visible = false;
		Edit19->Visible = false;
		Memo5->Visible = false;
		Edit24->Visible = false;
		SpeedButton9->Visible = false;
		SpeedButton14->Visible = false;
		SpeedButton19->Visible = false;
		Label26->Visible = false;

        //SETAM NUMARUL DE CASUTE VIZIBILE
		visible=3;
		Label20->Caption = String(visible);

        //afisam al 2-lea rand
			//seriviciu
		dm->QCautareServicii->Close();
		dm->QCautareServicii->SQL->Clear();
		dm->QCautareServicii->SQL->Add("SELECT * FROM SERVICII WHERE SERVICIU_ID=:SERVICIU_ID");
		dm->QCautareServicii->ParamByName("SERVICIU_ID")->AsInteger = Label29->Caption.ToInt();
		dm->QCautareServicii->Open();
		Edit5->Text = dm->QCautareServicii->FieldByName("DENUMIRE")->AsString;
			//articol
		dm->QCautare->Close();
		dm->QCautare->SQL->Clear();
		dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID");
		dm->QCautare->ParamByName("ARTICOL_ID")->AsInteger = Label45->Caption.ToInt();
		dm->QCautare->Open();
		Edit10->Text = dm->QCautare->FieldByName("DENUMIRE")->AsString;
			//materiale
		dm->QCautareMaterial->Close();
		dm->QCautareMaterial->SQL->Clear();
		dm->QCautareMaterial->SQL->Add("SELECT * FROM MATERIAL WHERE MATERIAL_ID=:MATERIAL_ID");
		dm->QCautareMaterial->ParamByName("MATERIAL_ID")->AsInteger = Label49->Caption.ToInt();
		dm->QCautareMaterial->Open();
		Edit16->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
			//comentariu
		Memo2->Lines->Text = dm->QModifyComand->FieldByName("COMENTARIU1")->AsString;
			//pret
		Edit21->Text = dm->QModifyComand->FieldByName("PRET1")->AsFloat;

        //afisam al 3-lea rand
			//seriviciu
		dm->QCautareServicii->Close();
		dm->QCautareServicii->SQL->Clear();
		dm->QCautareServicii->SQL->Add("SELECT * FROM SERVICII WHERE SERVICIU_ID=:SERVICIU_ID");
		dm->QCautareServicii->ParamByName("SERVICIU_ID")->AsInteger = Label30->Caption.ToInt();
		dm->QCautareServicii->Open();
		Edit6->Text = dm->QCautareServicii->FieldByName("DENUMIRE")->AsString;
			//articol
		dm->QCautare->Close();
		dm->QCautare->SQL->Clear();
		dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID");
		dm->QCautare->ParamByName("ARTICOL_ID")->AsInteger = Label46->Caption.ToInt();
		dm->QCautare->Open();
		Edit11->Text = dm->QCautare->FieldByName("DENUMIRE")->AsString;
			//materiale
		dm->QCautareMaterial->Close();
		dm->QCautareMaterial->SQL->Clear();
		dm->QCautareMaterial->SQL->Add("SELECT * FROM MATERIAL WHERE MATERIAL_ID=:MATERIAL_ID");
		dm->QCautareMaterial->ParamByName("MATERIAL_ID")->AsInteger = Label50->Caption.ToInt();
		dm->QCautareMaterial->Open();
		Edit17->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
			//comentariu
		Memo3->Lines->Text = dm->QModifyComand->FieldByName("COMENTARIU1")->AsString;
			//pret
		Edit22->Text = dm->QModifyComand->FieldByName("PRET1")->AsFloat;
	}
	else if(Label32->Caption == "0")   //5rand
	{
		//2rand
		Edit5->Visible = true;
		Edit10->Visible = true;
		Edit16->Visible = true;
		Memo2->Visible = true;
		Edit21->Visible = true;
		SpeedButton6->Visible = true;
		SpeedButton11->Visible = true;
		SpeedButton16->Visible = true;
		Label23->Visible = true;
		//3rand - >invizibil
		Edit6->Visible = true;
		Edit11->Visible = true;
		Edit17->Visible = true;
		Memo3->Visible = true;
		Edit22->Visible = true;
		SpeedButton7->Visible = true;
		SpeedButton12->Visible = true;
		SpeedButton17->Visible = true;
		Label24->Visible = true;
		//4rand -> invizibil
		Edit7->Visible = true;
		Edit12->Visible = true;
		Edit18->Visible = true;
		Memo4->Visible = true;
		Edit23->Visible = true;
		SpeedButton8->Visible = true;
		SpeedButton13->Visible = true;
		SpeedButton18->Visible = true;
		Label25->Visible = true;
		//5rand - >invizibil
		Edit8->Visible = false;
		Edit13->Visible = false;
		Edit19->Visible = false;
		Memo5->Visible = false;
		Edit24->Visible = false;
		SpeedButton9->Visible = false;
		SpeedButton14->Visible = false;
		SpeedButton19->Visible = false;
		Label26->Visible = false;

        //SETAM NUMARUL DE CASUTE VIZIBILE
		visible=4;
		Label20->Caption = String(visible);

        //afisam al 2-lea rand
			//seriviciu
		dm->QCautareServicii->Close();
		dm->QCautareServicii->SQL->Clear();
		dm->QCautareServicii->SQL->Add("SELECT * FROM SERVICII WHERE SERVICIU_ID=:SERVICIU_ID");
		dm->QCautareServicii->ParamByName("SERVICIU_ID")->AsInteger = Label29->Caption.ToInt();
		dm->QCautareServicii->Open();
		Edit5->Text = dm->QCautareServicii->FieldByName("DENUMIRE")->AsString;
			//articol
		dm->QCautare->Close();
		dm->QCautare->SQL->Clear();
		dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID");
		dm->QCautare->ParamByName("ARTICOL_ID")->AsInteger = Label45->Caption.ToInt();
		dm->QCautare->Open();
		Edit10->Text = dm->QCautare->FieldByName("DENUMIRE")->AsString;
			//materiale
		dm->QCautareMaterial->Close();
		dm->QCautareMaterial->SQL->Clear();
		dm->QCautareMaterial->SQL->Add("SELECT * FROM MATERIAL WHERE MATERIAL_ID=:MATERIAL_ID");
		dm->QCautareMaterial->ParamByName("MATERIAL_ID")->AsInteger = Label49->Caption.ToInt();
		dm->QCautareMaterial->Open();
		Edit16->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
			//comentariu
		Memo2->Lines->Text = dm->QModifyComand->FieldByName("COMENTARIU1")->AsString;
			//pret
		Edit21->Text = dm->QModifyComand->FieldByName("PRET1")->AsFloat;

        //afisam al 3-lea rand
			//seriviciu
		dm->QCautareServicii->Close();
		dm->QCautareServicii->SQL->Clear();
		dm->QCautareServicii->SQL->Add("SELECT * FROM SERVICII WHERE SERVICIU_ID=:SERVICIU_ID");
		dm->QCautareServicii->ParamByName("SERVICIU_ID")->AsInteger = Label30->Caption.ToInt();
		dm->QCautareServicii->Open();
		Edit6->Text = dm->QCautareServicii->FieldByName("DENUMIRE")->AsString;
			//articol
		dm->QCautare->Close();
		dm->QCautare->SQL->Clear();
		dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID");
		dm->QCautare->ParamByName("ARTICOL_ID")->AsInteger = Label46->Caption.ToInt();
		dm->QCautare->Open();
		Edit11->Text = dm->QCautare->FieldByName("DENUMIRE")->AsString;
			//materiale
		dm->QCautareMaterial->Close();
		dm->QCautareMaterial->SQL->Clear();
		dm->QCautareMaterial->SQL->Add("SELECT * FROM MATERIAL WHERE MATERIAL_ID=:MATERIAL_ID");
		dm->QCautareMaterial->ParamByName("MATERIAL_ID")->AsInteger = Label50->Caption.ToInt();
		dm->QCautareMaterial->Open();
		Edit17->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
			//comentariu
		Memo3->Lines->Text = dm->QModifyComand->FieldByName("COMENTARIU1")->AsString;
			//pret
		Edit22->Text = dm->QModifyComand->FieldByName("PRET1")->AsFloat;

        //afisam al 4-lea rand
			//seriviciu
		dm->QCautareServicii->Close();
		dm->QCautareServicii->SQL->Clear();
		dm->QCautareServicii->SQL->Add("SELECT * FROM SERVICII WHERE SERVICIU_ID=:SERVICIU_ID");
		dm->QCautareServicii->ParamByName("SERVICIU_ID")->AsInteger = Label31->Caption.ToInt();
		dm->QCautareServicii->Open();
		Edit7->Text = dm->QCautareServicii->FieldByName("DENUMIRE")->AsString;
			//articol
		dm->QCautare->Close();
		dm->QCautare->SQL->Clear();
		dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID");
		dm->QCautare->ParamByName("ARTICOL_ID")->AsInteger = Label47->Caption.ToInt();
		dm->QCautare->Open();
		Edit12->Text = dm->QCautare->FieldByName("DENUMIRE")->AsString;
			//materiale
		dm->QCautareMaterial->Close();
		dm->QCautareMaterial->SQL->Clear();
		dm->QCautareMaterial->SQL->Add("SELECT * FROM MATERIAL WHERE MATERIAL_ID=:MATERIAL_ID");
		dm->QCautareMaterial->ParamByName("MATERIAL_ID")->AsInteger = Label51->Caption.ToInt();
		dm->QCautareMaterial->Open();
		Edit18->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
			//comentariu
		Memo4->Lines->Text = dm->QModifyComand->FieldByName("COMENTARIU1")->AsString;
			//pret
		Edit23->Text = dm->QModifyComand->FieldByName("PRET1")->AsFloat;
	}
	else
	{
        //2rand
		Edit5->Visible = true;
		Edit10->Visible = true;
		Edit16->Visible = true;
		Memo2->Visible = true;
		Edit21->Visible = true;
        SpeedButton6->Visible = true;
		SpeedButton11->Visible = true;
		SpeedButton16->Visible = true;
        Label23->Visible = true;
		//3rand - >invizibil
		Edit6->Visible = true;
		Edit11->Visible = true;
		Edit17->Visible = true;
		Memo3->Visible = true;
		Edit22->Visible = true;
        SpeedButton7->Visible = true;
		SpeedButton12->Visible = true;
		SpeedButton17->Visible = true;
		Label24->Visible = true;
		//4rand -> invizibil
		Edit7->Visible = true;
		Edit12->Visible = true;
		Edit18->Visible = true;
		Memo4->Visible = true;
		Edit23->Visible = true;
        SpeedButton8->Visible = true;
		SpeedButton13->Visible = true;
		SpeedButton18->Visible = true;
		Label25->Visible = true;
		//5rand - >invizibil
		Edit8->Visible = true;
		Edit13->Visible = true;
		Edit19->Visible = true;
		Memo5->Visible = true;
		Edit24->Visible = true;
		SpeedButton9->Visible = true;
		SpeedButton14->Visible = true;
		SpeedButton19->Visible = true;
		Label26->Visible = true;

        //SETAM NUMARUL DE CASUTE VIZIBILE
		visible=5;
        Label20->Caption = String(visible);

        //afisam al 2-lea rand
			//seriviciu
		dm->QCautareServicii->Close();
		dm->QCautareServicii->SQL->Clear();
		dm->QCautareServicii->SQL->Add("SELECT * FROM SERVICII WHERE SERVICIU_ID=:SERVICIU_ID");
		dm->QCautareServicii->ParamByName("SERVICIU_ID")->AsInteger = Label29->Caption.ToInt();
		dm->QCautareServicii->Open();
		Edit5->Text = dm->QCautareServicii->FieldByName("DENUMIRE")->AsString;
			//articol
		dm->QCautare->Close();
		dm->QCautare->SQL->Clear();
		dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID");
		dm->QCautare->ParamByName("ARTICOL_ID")->AsInteger = Label45->Caption.ToInt();
		dm->QCautare->Open();
		Edit10->Text = dm->QCautare->FieldByName("DENUMIRE")->AsString;
			//materiale
		dm->QCautareMaterial->Close();
		dm->QCautareMaterial->SQL->Clear();
		dm->QCautareMaterial->SQL->Add("SELECT * FROM MATERIAL WHERE MATERIAL_ID=:MATERIAL_ID");
		dm->QCautareMaterial->ParamByName("MATERIAL_ID")->AsInteger = Label49->Caption.ToInt();
		dm->QCautareMaterial->Open();
		Edit16->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
			//comentariu
		Memo2->Lines->Text = dm->QModifyComand->FieldByName("COMENTARIU1")->AsString;
			//pret
		Edit21->Text = dm->QModifyComand->FieldByName("PRET1")->AsFloat;

        //afisam al 3-lea rand
			//seriviciu
		dm->QCautareServicii->Close();
		dm->QCautareServicii->SQL->Clear();
		dm->QCautareServicii->SQL->Add("SELECT * FROM SERVICII WHERE SERVICIU_ID=:SERVICIU_ID");
		dm->QCautareServicii->ParamByName("SERVICIU_ID")->AsInteger = Label30->Caption.ToInt();
		dm->QCautareServicii->Open();
		Edit6->Text = dm->QCautareServicii->FieldByName("DENUMIRE")->AsString;
			//articol
		dm->QCautare->Close();
		dm->QCautare->SQL->Clear();
		dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID");
		dm->QCautare->ParamByName("ARTICOL_ID")->AsInteger = Label46->Caption.ToInt();
		dm->QCautare->Open();
		Edit11->Text = dm->QCautare->FieldByName("DENUMIRE")->AsString;
			//materiale
		dm->QCautareMaterial->Close();
		dm->QCautareMaterial->SQL->Clear();
		dm->QCautareMaterial->SQL->Add("SELECT * FROM MATERIAL WHERE MATERIAL_ID=:MATERIAL_ID");
		dm->QCautareMaterial->ParamByName("MATERIAL_ID")->AsInteger = Label50->Caption.ToInt();
		dm->QCautareMaterial->Open();
		Edit17->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
			//comentariu
		Memo3->Lines->Text = dm->QModifyComand->FieldByName("COMENTARIU1")->AsString;
			//pret
		Edit22->Text = dm->QModifyComand->FieldByName("PRET1")->AsFloat;

		//afisam al 4-lea rand
			//seriviciu
		dm->QCautareServicii->Close();
		dm->QCautareServicii->SQL->Clear();
		dm->QCautareServicii->SQL->Add("SELECT * FROM SERVICII WHERE SERVICIU_ID=:SERVICIU_ID");
		dm->QCautareServicii->ParamByName("SERVICIU_ID")->AsInteger = Label31->Caption.ToInt();
		dm->QCautareServicii->Open();
		Edit7->Text = dm->QCautareServicii->FieldByName("DENUMIRE")->AsString;
			//articol
		dm->QCautare->Close();
		dm->QCautare->SQL->Clear();
		dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID");
		dm->QCautare->ParamByName("ARTICOL_ID")->AsInteger = Label47->Caption.ToInt();
		dm->QCautare->Open();
		Edit12->Text = dm->QCautare->FieldByName("DENUMIRE")->AsString;
			//materiale
		dm->QCautareMaterial->Close();
		dm->QCautareMaterial->SQL->Clear();
		dm->QCautareMaterial->SQL->Add("SELECT * FROM MATERIAL WHERE MATERIAL_ID=:MATERIAL_ID");
		dm->QCautareMaterial->ParamByName("MATERIAL_ID")->AsInteger = Label51->Caption.ToInt();
		dm->QCautareMaterial->Open();
		Edit18->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
			//comentariu
		Memo4->Lines->Text = dm->QModifyComand->FieldByName("COMENTARIU1")->AsString;
			//pret
		Edit23->Text = dm->QModifyComand->FieldByName("PRET1")->AsFloat;

        //afisam al 5-lea rand
			//seriviciu
		dm->QCautareServicii->Close();
		dm->QCautareServicii->SQL->Clear();
		dm->QCautareServicii->SQL->Add("SELECT * FROM SERVICII WHERE SERVICIU_ID=:SERVICIU_ID");
		dm->QCautareServicii->ParamByName("SERVICIU_ID")->AsInteger = Label32->Caption.ToInt();
		dm->QCautareServicii->Open();
		Edit8->Text = dm->QCautareServicii->FieldByName("DENUMIRE")->AsString;
			//articol
		dm->QCautare->Close();
		dm->QCautare->SQL->Clear();
		dm->QCautare->SQL->Add("SELECT * FROM ARTICOL WHERE ARTICOL_ID=:ARTICOL_ID");
		dm->QCautare->ParamByName("ARTICOL_ID")->AsInteger = Label48->Caption.ToInt();
		dm->QCautare->Open();
		Edit13->Text = dm->QCautare->FieldByName("DENUMIRE")->AsString;
			//materiale
		dm->QCautareMaterial->Close();
		dm->QCautareMaterial->SQL->Clear();
		dm->QCautareMaterial->SQL->Add("SELECT * FROM MATERIAL WHERE MATERIAL_ID=:MATERIAL_ID");
		dm->QCautareMaterial->ParamByName("MATERIAL_ID")->AsInteger = Label52->Caption.ToInt();
		dm->QCautareMaterial->Open();
		Edit19->Text = dm->QCautareMaterial->FieldByName("DENUMIRE")->AsString;
			//comentariu
		Memo5->Lines->Text = dm->QModifyComand->FieldByName("COMENTARIU1")->AsString;
			//pret
		Edit24->Text = dm->QModifyComand->FieldByName("PRET1")->AsFloat;
    }


	//verificam daca comanda e activa
	activ = dm->QModifyComand->FieldByName("ACTIV")->AsBoolean;
	if(activ==1)
	{
		SpeedButton2->Enabled = false;  //activ
		SpeedButton1->Enabled = true;   //inactiv
	}
	else
	{
		SpeedButton2->Enabled = true;  //activ
		SpeedButton1->Enabled = false ;   //inactiv
	}



}
//---------------------------------------------------------------------------
void __fastcall TFEditComand::SpeedButton10Click(TObject *Sender)
{
    Label34->Caption = "1";
    FIntroducereArticole->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TFEditComand::SpeedButton15Click(TObject *Sender)
{
	Label34->Caption = "1";
	FIntroducereMateriale->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TFEditComand::Panel6Click(TObject *Sender)
{
    total = Edit20->Text.ToDouble() + Edit21->Text.ToDouble() + Edit22->Text.ToDouble() + Edit23->Text.ToDouble() + Edit24->Text.ToDouble();
    Label8->Caption = String(total);
}
//---------------------------------------------------------------------------
void __fastcall TFEditComand::Panel7Click(TObject *Sender)
{
	datorie = Label8->Caption.ToDouble() - Edit14->Text.ToDouble();
    Label14->Caption = String(datorie);
}
//---------------------------------------------------------------------------
void __fastcall TFEditComand::SpeedButton2Click(TObject *Sender)
{
    activ = 1;
	SpeedButton2->Enabled = false;  //activ
	SpeedButton1->Enabled = true;  //inactiv
}
//---------------------------------------------------------------------------
void __fastcall TFEditComand::SpeedButton1Click(TObject *Sender)
{
    activ = 0;
	SpeedButton1->Enabled = false;  //inactiv
    SpeedButton2->Enabled = true;   //activ
}
//---------------------------------------------------------------------------
void __fastcall TFEditComand::Image1Click(TObject *Sender)
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
void __fastcall TFEditComand::SpeedButton3Click(TObject *Sender)
{
    //extragem id-ul clientului
	dm->QCautare->Close();
	dm->QCautare->SQL->Clear();
	dm->QCautare->SQL->Add("SELECT * FROM CLIENT WHERE NUME=:NUME AND NR_TELEFON=:NR_TELEFON");
	dm->QCautare->ParamByName("NUME")->AsString = Edit1->Text;
	dm->QCautare->ParamByName("NR_TELEFON")->AsInteger = Edit3->Text.ToInt();
    dm->QCautare->Open();
	client_id = dm->QCautare->FieldByName("CLIENT_ID")->AsInteger;

    //modificam
	AnsiString s;
	s = "UPDATE COMANDA SET CLIENT_ID=:CLIENT_ID,OPERATOR_ID=:OPERATOR_ID,ACTIV=:ACTIV,";
	s+= "ACHITAT=:ACHITAT,DATORIE=:DATORIE,SUMA_TOTAL=:SUMA_TOTAL,DATA_LUCRU=:DATA_LUCRU,DATA_RETURN=:DATA_RETURN, ";
	if(visible==1)
	{
		s+= "SERVICIU1_ID=:SERVICIU1_ID,ARTICOL1_ID=:ARTICOL1_ID,MATERIAL1_ID=:MATERIAL1_ID,";
		s+= "COMENTARIU1=:COMENTARIU1,PRET1=:PRET1 ";
		s+= "WHERE COMANDA_ID=:COMANDA_ID";

		dm->QModifyComand->Close();
		dm->QModifyComand->SQL->Clear();
		dm->QModifyComand->SQL->Add(s);
		dm->QModifyComand->ParamByName("SERVICIU1_ID")->AsInteger = Label27->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL1_ID")->AsInteger = Label44->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL1_ID")->AsInteger = Label42->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU1")->AsString = Memo1->Lines->Text;
		dm->QModifyComand->ParamByName("PRET1")->AsFloat = Edit20->Text.ToDouble();
	}
	else if(visible==2)
	{
		s+= "SERVICIU1_ID=:SERVICIU1_ID,ARTICOL1_ID=:ARTICOL1_ID,MATERIAL1_ID=:MATERIAL1_ID,COMENTARIU1=:COMENTARIU1,PRET1=:PRET1,";
		s+= "SERVICIU2_ID=:SERVICIU2_ID,ARTICOL2_ID=:ARTICOL2_ID,MATERIAL2_ID=:MATERIAL2_ID,COMENTARIU2=:COMENTARIU2,PRET2=:PRET2 ";
		s+= "WHERE COMANDA_ID=:COMANDA_ID";

		dm->QModifyComand->Close();
		dm->QModifyComand->SQL->Clear();
		dm->QModifyComand->SQL->Add(s);
		dm->QModifyComand->ParamByName("SERVICIU1_ID")->AsInteger = Label27->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL1_ID")->AsInteger = Label44->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL1_ID")->AsInteger = Label42->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU1")->AsString = Memo1->Lines->Text;
		dm->QModifyComand->ParamByName("PRET1")->AsFloat = Edit20->Text.ToDouble();

		dm->QModifyComand->ParamByName("SERVICIU2_ID")->AsInteger = Label29->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL2_ID")->AsInteger = Label45->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL2_ID")->AsInteger = Label49->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU2")->AsString = Memo2->Lines->Text;
		dm->QModifyComand->ParamByName("PRET2")->AsFloat = Edit21->Text.ToDouble();
	}
	else if(visible==3)
	{
		s+= "SERVICIU1_ID=:SERVICIU1_ID,ARTICOL1_ID=:ARTICOL1_ID,MATERIAL1_ID=:MATERIAL1_ID,COMENTARIU1=:COMENTARIU1,PRET1=:PRET1,";
		s+= "SERVICIU2_ID=:SERVICIU2_ID,ARTICOL2_ID=:ARTICOL2_ID,MATERIAL2_ID=:MATERIAL2_ID,COMENTARIU2=:COMENTARIU2,PRET2=:PRET2, ";
		s+= "SERVICIU3_ID=:SERVICIU3_ID,ARTICOL3_ID=:ARTICOL3_ID,MATERIAL3_ID=:MATERIAL3_ID,COMENTARIU3=:COMENTARIU3,PRET3=:PRET3 ";
		s+= "WHERE COMANDA_ID=:COMANDA_ID";

		dm->QModifyComand->Close();
		dm->QModifyComand->SQL->Clear();
		dm->QModifyComand->SQL->Add(s);
		dm->QModifyComand->ParamByName("SERVICIU1_ID")->AsInteger = Label27->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL1_ID")->AsInteger = Label44->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL1_ID")->AsInteger = Label42->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU1")->AsString = Memo1->Lines->Text;
		dm->QModifyComand->ParamByName("PRET1")->AsFloat = Edit20->Text.ToDouble();

		dm->QModifyComand->ParamByName("SERVICIU2_ID")->AsInteger = Label29->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL2_ID")->AsInteger = Label45->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL2_ID")->AsInteger = Label49->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU2")->AsString = Memo2->Lines->Text;
		dm->QModifyComand->ParamByName("PRET2")->AsFloat = Edit21->Text.ToDouble();

		dm->QModifyComand->ParamByName("SERVICIU3_ID")->AsInteger = Label30->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL3_ID")->AsInteger = Label46->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL3_ID")->AsInteger = Label50->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU3")->AsString = Memo3->Lines->Text;
		dm->QModifyComand->ParamByName("PRET3")->AsFloat = Edit22->Text.ToDouble();
	}
	else if(visible==4)
	{
        s+= "SERVICIU1_ID=:SERVICIU1_ID,ARTICOL1_ID=:ARTICOL1_ID,MATERIAL1_ID=:MATERIAL1_ID,COMENTARIU1=:COMENTARIU1,PRET1=:PRET1,";
		s+= "SERVICIU2_ID=:SERVICIU2_ID,ARTICOL2_ID=:ARTICOL2_ID,MATERIAL2_ID=:MATERIAL2_ID,COMENTARIU2=:COMENTARIU2,PRET2=:PRET2, ";
		s+= "SERVICIU3_ID=:SERVICIU3_ID,ARTICOL3_ID=:ARTICOL3_ID,MATERIAL3_ID=:MATERIAL3_ID,COMENTARIU3=:COMENTARIU3,PRET3=:PRET3, ";
        s+= "SERVICIU4_ID=:SERVICIU4_ID,ARTICOL4_ID=:ARTICOL4_ID,MATERIAL4_ID=:MATERIAL4_ID,COMENTARIU4=:COMENTARIU4,PRET4=:PRET4 ";
		s+= "WHERE COMANDA_ID=:COMANDA_ID";

		dm->QModifyComand->Close();
		dm->QModifyComand->SQL->Clear();
		dm->QModifyComand->SQL->Add(s);
		dm->QModifyComand->ParamByName("SERVICIU1_ID")->AsInteger = Label27->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL1_ID")->AsInteger = Label44->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL1_ID")->AsInteger = Label42->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU1")->AsString = Memo1->Lines->Text;
		dm->QModifyComand->ParamByName("PRET1")->AsFloat = Edit20->Text.ToDouble();

		dm->QModifyComand->ParamByName("SERVICIU2_ID")->AsInteger = Label29->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL2_ID")->AsInteger = Label45->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL2_ID")->AsInteger = Label49->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU2")->AsString = Memo2->Lines->Text;
		dm->QModifyComand->ParamByName("PRET2")->AsFloat = Edit21->Text.ToDouble();

		dm->QModifyComand->ParamByName("SERVICIU3_ID")->AsInteger = Label30->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL3_ID")->AsInteger = Label46->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL3_ID")->AsInteger = Label50->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU3")->AsString = Memo3->Lines->Text;
		dm->QModifyComand->ParamByName("PRET3")->AsFloat = Edit22->Text.ToDouble();

		dm->QModifyComand->ParamByName("SERVICIU4_ID")->AsInteger = Label31->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL4_ID")->AsInteger = Label47->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL4_ID")->AsInteger = Label51->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU4")->AsString = Memo4->Lines->Text;
		dm->QModifyComand->ParamByName("PRET4")->AsFloat = Edit23->Text.ToDouble();
	}
	else if(visible==5)
	{
        s+= "SERVICIU1_ID=:SERVICIU1_ID,ARTICOL1_ID=:ARTICOL1_ID,MATERIAL1_ID=:MATERIAL1_ID,COMENTARIU1=:COMENTARIU1,PRET1=:PRET1,";
		s+= "SERVICIU2_ID=:SERVICIU2_ID,ARTICOL2_ID=:ARTICOL2_ID,MATERIAL2_ID=:MATERIAL2_ID,COMENTARIU2=:COMENTARIU2,PRET2=:PRET2, ";
		s+= "SERVICIU3_ID=:SERVICIU3_ID,ARTICOL3_ID=:ARTICOL3_ID,MATERIAL3_ID=:MATERIAL3_ID,COMENTARIU3=:COMENTARIU3,PRET3=:PRET3, ";
		s+= "SERVICIU4_ID=:SERVICIU4_ID,ARTICOL4_ID=:ARTICOL4_ID,MATERIAL4_ID=:MATERIAL4_ID,COMENTARIU4=:COMENTARIU4,PRET4=:PRET4, ";
		s+= "SERVICIU5_ID=:SERVICIU5_ID,ARTICOL5_ID=:ARTICOL5_ID,MATERIAL5_ID=:MATERIAL5_ID,COMENTARIU5=:COMENTARIU5,PRET5=:PRET5 ";
		s+= "WHERE COMANDA_ID=:COMANDA_ID";

		dm->QModifyComand->Close();
		dm->QModifyComand->SQL->Clear();
		dm->QModifyComand->SQL->Add(s);
		dm->QModifyComand->ParamByName("SERVICIU1_ID")->AsInteger = Label27->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL1_ID")->AsInteger = Label44->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL1_ID")->AsInteger = Label42->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU1")->AsString = Memo1->Lines->Text;
		dm->QModifyComand->ParamByName("PRET1")->AsFloat = Edit20->Text.ToDouble();

		dm->QModifyComand->ParamByName("SERVICIU2_ID")->AsInteger = Label29->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL2_ID")->AsInteger = Label45->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL2_ID")->AsInteger = Label49->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU2")->AsString = Memo2->Lines->Text;
		dm->QModifyComand->ParamByName("PRET2")->AsFloat = Edit21->Text.ToDouble();

		dm->QModifyComand->ParamByName("SERVICIU3_ID")->AsInteger = Label30->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL3_ID")->AsInteger = Label46->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL3_ID")->AsInteger = Label50->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU3")->AsString = Memo3->Lines->Text;
		dm->QModifyComand->ParamByName("PRET3")->AsFloat = Edit22->Text.ToDouble();

		dm->QModifyComand->ParamByName("SERVICIU4_ID")->AsInteger = Label31->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL4_ID")->AsInteger = Label47->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL4_ID")->AsInteger = Label51->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU4")->AsString = Memo4->Lines->Text;
		dm->QModifyComand->ParamByName("PRET4")->AsFloat = Edit23->Text.ToDouble();

		dm->QModifyComand->ParamByName("SERVICIU5_ID")->AsInteger = Label32->Caption.ToInt();
		dm->QModifyComand->ParamByName("ARTICOL5_ID")->AsInteger = Label48->Caption.ToInt();
		dm->QModifyComand->ParamByName("MATERIAL5_ID")->AsInteger = Label52->Caption.ToInt();
		dm->QModifyComand->ParamByName("COMENTARIU5")->AsString = Memo5->Lines->Text;
		dm->QModifyComand->ParamByName("PRET5")->AsFloat = Edit24->Text.ToDouble();
	}
	dm->QModifyComand->ParamByName("COMANDA_ID")->AsInteger = Edit25->Text.ToInt();
	dm->QModifyComand->ParamByName("CLIENT_ID")->AsInteger = client_id;
	dm->QModifyComand->ParamByName("OPERATOR_ID")->AsInteger = 1; ///!!!!!!!
	dm->QModifyComand->ParamByName("ACTIV")->AsBoolean = activ;
	dm->QModifyComand->ParamByName("ACHITAT")->AsFloat = Edit14->Text.ToDouble();
	dm->QModifyComand->ParamByName("DATORIE")->AsFloat = Label14->Caption.ToDouble();
	dm->QModifyComand->ParamByName("SUMA_TOTAL")->AsFloat = Label8->Caption.ToDouble();
	dm->QModifyComand->ParamByName("DATA_LUCRU")->AsDate = DateTimePicker1->Date;
	dm->QModifyComand->ParamByName("DATA_RETURN")->AsDate = DateTimePicker2->Date;
	dm->QModifyComand->ExecSQL();
    ShowMessage("Comanda a fost editata cu succes!");
}
//---------------------------------------------------------------------------
void __fastcall TFEditComand::SpeedButton6Click(TObject *Sender)
{
	Label34->Caption = "2";
	FIntroducereServicii->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFEditComand::SpeedButton11Click(TObject *Sender)
{
	Label34->Caption = "2";
	FIntroducereArticole->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFEditComand::SpeedButton16Click(TObject *Sender)
{
	Label34->Caption = "2";
	FIntroducereMateriale->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFEditComand::SpeedButton7Click(TObject *Sender)
{
	Label34->Caption = "3";
	FIntroducereServicii->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFEditComand::SpeedButton12Click(TObject *Sender)
{
	Label34->Caption = "3";
	FIntroducereArticole->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFEditComand::SpeedButton17Click(TObject *Sender)
{
	Label34->Caption = "3";
	FIntroducereMateriale->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFEditComand::SpeedButton8Click(TObject *Sender)
{
	Label34->Caption = "4";
	FIntroducereServicii->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFEditComand::SpeedButton13Click(TObject *Sender)
{
	Label34->Caption = "4";
	FIntroducereArticole->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFEditComand::SpeedButton18Click(TObject *Sender)
{
	Label34->Caption = "4";
	FIntroducereMateriale->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFEditComand::SpeedButton9Click(TObject *Sender)
{
	Label34->Caption = "5";
	FIntroducereServicii->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFEditComand::SpeedButton14Click(TObject *Sender)
{
    Label34->Caption = "5";
	FIntroducereArticole->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFEditComand::SpeedButton19Click(TObject *Sender)
{
    Label34->Caption = "5";
	FIntroducereMateriale->ShowModal();
}
//---------------------------------------------------------------------------


