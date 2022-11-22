//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop
#include <tchar.h>
//---------------------------------------------------------------------------
#include <Vcl.Styles.hpp>
#include <Vcl.Themes.hpp>
USEFORM("Main.cpp", FMain);
USEFORM("IntroducereServicii.cpp", FIntroducereServicii);
USEFORM("IntroducereMateriale.cpp", FIntroducereMateriale);
USEFORM("NewComand.cpp", FComand);
USEFORM("IntroducereArticole.cpp", FIntroducereArticole);
USEFORM("GestionareAlegere.cpp", FGestionareAlegere);
USEFORM("Gestionare.cpp", FGestionareArticole);
USEFORM("DataModule1.cpp", dm); /* TDataModule: File Type */
USEFORM("Introducerea.cpp", FIntroducere);
USEFORM("GestionareServicii.cpp", FGestionareServicii);
USEFORM("GestionareMaterial.cpp", FGestionareMaterial);
USEFORM("EditComand.cpp", FEditComand);
USEFORM("Logarea.cpp", FLogare);
//---------------------------------------------------------------------------
int WINAPI _tWinMain(HINSTANCE, HINSTANCE, LPTSTR, int)
{
	try
	{
		Application->Initialize();
		Application->MainFormOnTaskBar = true;
		TStyleManager::TrySetStyle("Charcoal Dark Slate");
		Application->CreateForm(__classid(TFMain), &FMain);
		Application->CreateForm(__classid(TFGestionareAlegere), &FGestionareAlegere);
		Application->CreateForm(__classid(TFGestionareArticole), &FGestionareArticole);
		Application->CreateForm(__classid(Tdm), &dm);
		Application->CreateForm(__classid(TFGestionareMaterial), &FGestionareMaterial);
		Application->CreateForm(__classid(TFGestionareServicii), &FGestionareServicii);
		Application->CreateForm(__classid(TFComand), &FComand);
		Application->CreateForm(__classid(TFIntroducere), &FIntroducere);
		Application->CreateForm(__classid(TFIntroducereServicii), &FIntroducereServicii);
		Application->CreateForm(__classid(TFIntroducereArticole), &FIntroducereArticole);
		Application->CreateForm(__classid(TFIntroducereMateriale), &FIntroducereMateriale);
		Application->CreateForm(__classid(TFEditComand), &FEditComand);
		Application->CreateForm(__classid(TFLogare), &FLogare);
		Application->Run();
	}
	catch (Exception &exception)
	{
		Application->ShowException(&exception);
	}
	catch (...)
	{
		try
		{
			throw Exception("");
		}
		catch (Exception &exception)
		{
			Application->ShowException(&exception);
		}
	}
	return 0;
}
//---------------------------------------------------------------------------
