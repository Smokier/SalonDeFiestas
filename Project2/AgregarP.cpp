#include "AgregarP.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void AgregarP(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::AgregarP form;
	Application::Run(% form);
}

