#include "MSTDrawsSyncTool.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MSTDrawsSyncTool w;
	w.show();
	return a.exec();
}
