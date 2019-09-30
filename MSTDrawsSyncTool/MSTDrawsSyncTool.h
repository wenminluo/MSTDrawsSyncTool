#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MSTDrawsSyncTool.h"

class MSTDrawsSyncTool : public QMainWindow
{
	Q_OBJECT

public:
	MSTDrawsSyncTool(QWidget *parent = Q_NULLPTR);

private:
	Ui::MSTDrawsSyncToolClass ui;

	// \brief 界面UI控件初始化
	void SetUI();

	// \brief 菜单项创建
	void createMenus();


	// \brief 界面UI控件布局设置
	void SetLayout();



};
