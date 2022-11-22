//---------------------------------------------------------------------------

#ifndef GestionareAlegereH
#define GestionareAlegereH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.Buttons.hpp>
//---------------------------------------------------------------------------
class TFGestionareAlegere : public TForm
{
__published:	// IDE-managed Components
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TSpeedButton *SpeedButton3;
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFGestionareAlegere(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFGestionareAlegere *FGestionareAlegere;
//---------------------------------------------------------------------------
#endif
