//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Introducerea.h"
#include "DataModule1.h"
#include "NewComand.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFIntroducere *FIntroducere;
//---------------------------------------------------------------------------
__fastcall TFIntroducere::TFIntroducere(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFIntroducere::RadioButton6Click(TObject *Sender)
{
    Edit8->Clear();
	Edit8->TextHint = "Cod material";
}
//---------------------------------------------------------------------------





