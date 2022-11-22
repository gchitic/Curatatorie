//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "GestionareAlegere.h"
#include "Gestionare.h"
#include "GestionareMaterial.h"
#include "GestionareServicii.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFGestionareAlegere *FGestionareAlegere;
//---------------------------------------------------------------------------
__fastcall TFGestionareAlegere::TFGestionareAlegere(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFGestionareAlegere::SpeedButton2Click(TObject *Sender)
{
    FGestionareArticole->ShowModal();
}
//---------------------------------------------------------------------------
void __fastcall TFGestionareAlegere::SpeedButton3Click(TObject *Sender)
{
    FGestionareMaterial->ShowModal();
}
//---------------------------------------------------------------------------

void __fastcall TFGestionareAlegere::SpeedButton1Click(TObject *Sender)
{
    FGestionareServicii->Show();
}
//---------------------------------------------------------------------------

