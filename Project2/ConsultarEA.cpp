#include "ConsultarEA.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void ConsultarEA(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::ConsultarEA form;
	Application::Run(% form);
}



