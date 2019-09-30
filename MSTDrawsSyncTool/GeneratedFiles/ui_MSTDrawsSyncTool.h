/********************************************************************************
** Form generated from reading UI file 'MSTDrawsSyncTool.ui'
**
** Created by: Qt User Interface Compiler version 5.12.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MSTDRAWSSYNCTOOL_H
#define UI_MSTDRAWSSYNCTOOL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MSTDrawsSyncToolClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MSTDrawsSyncToolClass)
    {
        if (MSTDrawsSyncToolClass->objectName().isEmpty())
            MSTDrawsSyncToolClass->setObjectName(QString::fromUtf8("MSTDrawsSyncToolClass"));
        MSTDrawsSyncToolClass->resize(600, 400);
        menuBar = new QMenuBar(MSTDrawsSyncToolClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        MSTDrawsSyncToolClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MSTDrawsSyncToolClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MSTDrawsSyncToolClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(MSTDrawsSyncToolClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        MSTDrawsSyncToolClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MSTDrawsSyncToolClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MSTDrawsSyncToolClass->setStatusBar(statusBar);

        retranslateUi(MSTDrawsSyncToolClass);

        QMetaObject::connectSlotsByName(MSTDrawsSyncToolClass);
    } // setupUi

    void retranslateUi(QMainWindow *MSTDrawsSyncToolClass)
    {
        MSTDrawsSyncToolClass->setWindowTitle(QApplication::translate("MSTDrawsSyncToolClass", "MSTDrawsSyncTool", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MSTDrawsSyncToolClass: public Ui_MSTDrawsSyncToolClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MSTDRAWSSYNCTOOL_H
