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

	// \brief ����UI�ؼ���ʼ��
	void SetUI();

	// \brief �˵����
	void createMenus();


	// \brief ����UI�ؼ���������
	void SetLayout();



};
