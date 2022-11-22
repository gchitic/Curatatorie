//---------------------------------------------------------------------------

#ifndef GestionareMaterialH
#define GestionareMaterialH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ComCtrls.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
#include <Vcl.Buttons.hpp>
#include <Data.DB.hpp>
#include <Vcl.DBGrids.hpp>
#include <Vcl.Grids.hpp>
//---------------------------------------------------------------------------
class TFGestionareMaterial : public TForm
{
__published:	// IDE-managed Components
	TPageControl *PageControl1;
	TTabSheet *TabSheet1;
	TTabSheet *TabSheet2;
	TTabSheet *TabSheet3;
	TTabSheet *TabSheet4;
	TImage *Image2;
	TLabel *Label2;
	TImage *Image1;
	TLabel *Label1;
	TImage *Image3;
	TLabel *Label3;
	TPanel *Panel1;
	TLabel *Label5;
	TEdit *Edit1;
	TLabel *Label4;
	TLabel *Label6;
	TEdit *Edit2;
	TSpeedButton *SpeedButton2;
	TPanel *Panel4;
	TLabel *Label7;
	TLabel *Label11;
	TButton *Button1;
	TButton *Button2;
	TPanel *Panel2;
	TLabel *Label8;
	TImage *Image5;
	TEdit *Edit7;
	TPanel *Panel5;
	TLabel *Label9;
	TLabel *Label10;
	TSpeedButton *SpeedButton4;
	TSpeedButton *SpeedButton5;
	TEdit *Edit4;
	TEdit *Edit3;
	TPanel *Panel6;
	TLabel *Label12;
	TLabel *Label13;
	TButton *Button3;
	TButton *Button4;
	TPanel *Panel7;
	TImage *Image4;
	TSpeedButton *SpeedButton7;
	TSpeedButton *SpeedButton8;
	TEdit *Edit8;
	TGroupBox *GroupBox1;
	TRadioButton *RB2;
	TRadioButton *RB1;
	TPanel *Panel3;
	TDBGrid *DBGrid1;
	TPanel *Panel8;
	TLabel *Label14;
	TLabel *Label15;
	TButton *Button5;
	TButton *Button6;
	TRadioButton *RB3;
	TSpeedButton *SpeedButton1;
	void __fastcall FormShow(TObject *Sender);
	void __fastcall Image2Click(TObject *Sender);
	void __fastcall Image1Click(TObject *Sender);
	void __fastcall Image3Click(TObject *Sender);
	void __fastcall SpeedButton2Click(TObject *Sender);
	void __fastcall SpeedButton5Click(TObject *Sender);
	void __fastcall SpeedButton8Click(TObject *Sender);
	void __fastcall SpeedButton1Click(TObject *Sender);
	void __fastcall Button2Click(TObject *Sender);
	void __fastcall Button1Click(TObject *Sender);
	void __fastcall Image5Click(TObject *Sender);
	void __fastcall SpeedButton4Click(TObject *Sender);
	void __fastcall Button4Click(TObject *Sender);
	void __fastcall Button3Click(TObject *Sender);
	void __fastcall Image4Click(TObject *Sender);
	void __fastcall SpeedButton7Click(TObject *Sender);
	void __fastcall RB1Click(TObject *Sender);
	void __fastcall RB2Click(TObject *Sender);
	void __fastcall Button6Click(TObject *Sender);
	void __fastcall Button5Click(TObject *Sender);
	void __fastcall RB3Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFGestionareMaterial(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFGestionareMaterial *FGestionareMaterial;
//---------------------------------------------------------------------------
#endif
