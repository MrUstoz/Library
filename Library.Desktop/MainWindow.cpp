#include "MainWindow.h"

using namespace LibraryDesktop;

void main() {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);
	Application::Run(gcnew MainWindow());
}

