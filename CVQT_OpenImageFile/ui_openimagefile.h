/********************************************************************************
** Form generated from reading UI file 'openimagefile.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPENIMAGEFILE_H
#define UI_OPENIMAGEFILE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_OpenImageFile
{
public:
    QAction *action_3;
    QAction *action;
    QAction *actionExit;
    QAction *actionExit_2;
    QWidget *centralWidget;
    QPushButton *pushButton;
    QLabel *label;
    QMenuBar *menuBar;
    QMenu *menuOpen;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *OpenImageFile)
    {
        if (OpenImageFile->objectName().isEmpty())
            OpenImageFile->setObjectName(QStringLiteral("OpenImageFile"));
        OpenImageFile->resize(846, 577);
        action_3 = new QAction(OpenImageFile);
        action_3->setObjectName(QStringLiteral("action_3"));
        action = new QAction(OpenImageFile);
        action->setObjectName(QStringLiteral("action"));
        actionExit = new QAction(OpenImageFile);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionExit_2 = new QAction(OpenImageFile);
        actionExit_2->setObjectName(QStringLiteral("actionExit_2"));
        centralWidget = new QWidget(OpenImageFile);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 420, 131, 81));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 20, 640, 480));
        label->setStyleSheet(QLatin1String("background-color: rgb(215, 215, 215);\n"
"border-color: rgb(8, 8, 8);"));
        OpenImageFile->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(OpenImageFile);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 846, 29));
        menuOpen = new QMenu(menuBar);
        menuOpen->setObjectName(QStringLiteral("menuOpen"));
        OpenImageFile->setMenuBar(menuBar);
        mainToolBar = new QToolBar(OpenImageFile);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        OpenImageFile->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(OpenImageFile);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        OpenImageFile->setStatusBar(statusBar);

        menuBar->addAction(menuOpen->menuAction());
        menuOpen->addAction(action_3);
        menuOpen->addSeparator();
        menuOpen->addAction(actionExit_2);

        retranslateUi(OpenImageFile);

        QMetaObject::connectSlotsByName(OpenImageFile);
    } // setupUi

    void retranslateUi(QMainWindow *OpenImageFile)
    {
        OpenImageFile->setWindowTitle(QApplication::translate("OpenImageFile", "Open Image File", 0));
        action_3->setText(QApplication::translate("OpenImageFile", "Open", 0));
        action->setText(QApplication::translate("OpenImageFile", "-", 0));
        actionExit->setText(QApplication::translate("OpenImageFile", "Exit", 0));
        actionExit_2->setText(QApplication::translate("OpenImageFile", "Exit", 0));
        pushButton->setText(QApplication::translate("OpenImageFile", "Open Image File", 0));
        label->setText(QString());
        menuOpen->setTitle(QApplication::translate("OpenImageFile", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class OpenImageFile: public Ui_OpenImageFile {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPENIMAGEFILE_H
