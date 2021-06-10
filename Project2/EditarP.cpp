#include "EditarP.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void EditarP(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::EditarP form;
	Application::Run(% form);
}

