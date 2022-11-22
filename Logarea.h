//---------------------------------------------------------------------------

#ifndef LogareaH
#define LogareaH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
#include <Vcl.ComCtrls.hpp>
//---------------------------------------------------------------------------
class TFLogare : public TForm
{
__published:	// IDE-managed Components
	TPanel *Panel1;
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TSpeedButton *SpeedButton1;
	TImage *Image1;
	TSpeedButton *SpeedButton2;
	TLabel *Label1;
	TLabel *Label2;
	TEdit *Edit1;
	TEdit *Edit2;
	TLabel *Label3;
	TLabel *Label4;
	TSpeedButton *SpeedButton3;
	TSpeedButton *SpeedButton4;
	TLabel *Label5;
	TLabel *Label6;
	TEdit *Edit3;
	TLabel *Label7;
	TEdit *Edit4;
	TSpeedButton *SpeedButton5;
	TSpeedButton *SpeedButton6;
	TLabel *Label8;
	TEdit *Edit5;
	TLabel *Label9;
	TEdit *Edit6;
	TLabel *Label10;
	TEdit *Edit7;
	TLabel *Label11;
	TLabel *Label12;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall SpeedButton6Click(TObject *Sender);
	void __fastcall SpeedButton3Click(TObject *Sender);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall FormClose(TObject *Sender, TCloseAction &Action);
private:	// User declarations
public:		// User declarations
	__fastcall TFLogare(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFLogare *FLogare;
//---------------------------------------------------------------------------
#endif
