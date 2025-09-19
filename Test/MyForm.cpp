#include "MyForm.h"
#include <Windows.h>
//#include "Functions.h"
using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main(array<String^>^ args) {
	Application::SetCompatibleTextRenderingDefault(false); //для корректной обработки текста
	Application::EnableVisualStyles(); //подключаем визуальные стили
	Test::MyForm form;
	Application::Run(% form);
}