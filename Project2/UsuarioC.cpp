#include "UsuarioC.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThread]

void UsuarioC(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::UsuarioC form;
	Application::Run(% form);
}

