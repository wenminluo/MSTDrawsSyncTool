#include "MSTDrawsSyncTool.h"

MSTDrawsSyncTool::MSTDrawsSyncTool(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	SetUI();
	SetLayout();
}


//private
void MSTDrawsSyncTool::createMenus()
{
	 QMenu* pFileMenu = menuBar()->addMenu(tr("&File"));

	//openAct = new QAction(tr("&Open..."), this);
	//fileMenu->addAction(openAct);
	//connect(openAct, &QAction::triggered, this, &MainWindow::openFile);
	////! [1a]

	//saveAct = new QAction(tr("&Save As..."), this);
	//fileMenu->addAction(saveAct);
	//connect(saveAct, &QAction::triggered, this, &MainWindow::saveFile);

	 pFileMenu->addSeparator();

	QAction* pExitAct = new QAction(tr("E&xit"), this);
	pFileMenu->addAction(pExitAct);
	connect(pExitAct, &QAction::triggered, this, &QWidget::close);

	menuBar()->addMenu(tr("&Tools"));
}

void MSTDrawsSyncTool::SetUI()
{
	//[1] ´´½¨²Ëµ¥À¸
	createMenus();
}

void MSTDrawsSyncTool::SetLayout()
{

}
//