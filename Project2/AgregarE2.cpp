#include "AgregarE2.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void AgregarE2(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::AgregarE2 form;
	Application::Run(% form);
}



