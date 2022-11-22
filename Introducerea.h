//---------------------------------------------------------------------------

#ifndef IntroducereaH
#define IntroducereaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFIntroducere : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TPanel *Panel2;
	TPanel *Panel3;
	TDBGrid *DBGrid1;
	TGroupBox *GroupBox1;
	TRadioButton *RB2;
	TRadioButton *RB1;
	TEdit *Edit8;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton8;
	TImage *Image5;
	TRadioButton *RB3;
	TPanel *Panel4;
	TGroupBox *GroupBox2;
	TRadioButton *RadioButton2;
	TRadioButton *RadioButton3;
	TRadioButton *RadioButton4;
	TEdit *Edit1;
	TImage *Image1;
	TSpeedButton *SpeedButton1;
	TSpeedButton *SpeedButton2;
	TPanel *Panel5;
	TDBGrid *DBGrid2;
	TPanel *Panel6;
	TPanel *Panel7;
	TDBGrid *DBGrid3;
	TGroupBox *GroupBox3;
	TRadioButton *RadioButton5;
	TRadioButton *RadioButton6;
	TRadioButton *RadioButton7;
	TEdit *Edit2;
	TImage *Image2;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	void __fastcall RadioButton6Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFIntroducere(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFIntroducere *FIntroducere;
//---------------------------------------------------------------------------
#endif
