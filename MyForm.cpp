#include "MyForm.h"
#include <cmath>
using namespace System;
using namespace System::Windows::Forms;
[STAThreadAttribute]
int main(array<String^>^ args)
{
	Application::SetCompatibleTextRenderingDefault(false);
	Application::EnableVisualStyles();
	Test::MyForm form;
	Application::Run(% form);
}
