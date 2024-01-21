#include "MyControlPanel.h"
#include <QtWidgets/QApplication>

int main(int argc, char* argv[])
{
	QApplication   a(argc, argv);
	MyControlPanel w;
	w.show();
	return a.exec();
}
