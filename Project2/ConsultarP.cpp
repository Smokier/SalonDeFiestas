#include "ConsultarP.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void ConsultarP(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::ConsultarP form;
	Application::Run(% form);
}


