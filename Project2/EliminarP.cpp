#include "EliminarP.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void EliminarP(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::EliminarP form;
	Application::Run(% form);
}

