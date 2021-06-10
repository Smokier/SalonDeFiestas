#include "ConsultarE.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void ConsultarE(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::ConsultarE form;
	Application::Run(% form);
}


