//---------------------------------------------------------------------------

#ifndef IntroducereServiciiH
#define IntroducereServiciiH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Data.DB.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFIntroducereServicii : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPanel *Panel2;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton8;
	TImage *Image5;
	TGroupBox *GroupBox1;
	TRadioButton *RB2;
	TRadioButton *RB1;
	TRadioButton *RB3;
	TEdit *Edit8;
	TPanel *Panel3;
	TDBGrid *DBGrid1;
	TLabel *Label1;
	TRadioButton *RB4;
	void __fastcall Image5Click(TObject *Sender);
	void __fastcall RB3Click(TObject *Sender);
	void __fastcall RB1Click(TObject *Sender);
	void __fastcall RB2Click(TObject *Sender);
	void __fastcall SpeedButton8Click(TObject *Sender);
	void __fastcall SpeedButton7Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
	void __fastcall RB4Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFIntroducereServicii(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFIntroducereServicii *FIntroducereServicii;
//---------------------------------------------------------------------------
#endif
