#include "MyForm1.h"

using namespace System;
using namespace System::Windows::Forms;
using namespace MySql::Data::MySqlClient;


[STAThread]

void admin(array<String^>^ args) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Project2::MyForm1 form;
	Application::Run(% form);
}