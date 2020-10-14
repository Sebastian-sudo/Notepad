/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionNew;
    QAction *actionOpen;
    QAction *actionSave_2;
    QAction *actionSave_as;
    QAction *actionCut;
    QAction *actionCopy;
    QAction *actionPaste;
    QAction *action_6;
    QAction *action_7;
    QAction *actionAbout_App;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    QTextEdit *textEdit;
    QMenuBar *menubar;
    QMenu *menuFile;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QToolBar *toolBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1055, 730);
        MainWindow->setStyleSheet(QStringLiteral("background-color: rgb(85, 87, 83);"));
        actionNew = new QAction(MainWindow);
        actionNew->setObjectName(QStringLiteral("actionNew"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/Rec/plus.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew->setIcon(icon);
        actionOpen = new QAction(MainWindow);
        actionOpen->setObjectName(QStringLiteral("actionOpen"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/Rec/sheet.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionOpen->setIcon(icon1);
        actionSave_2 = new QAction(MainWindow);
        actionSave_2->setObjectName(QStringLiteral("actionSave_2"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/Rec/download.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_2->setIcon(icon2);
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName(QStringLiteral("actionSave_as"));
        actionSave_as->setIcon(icon2);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/Rec/scissors.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon3);
        actionCopy = new QAction(MainWindow);
        actionCopy->setObjectName(QStringLiteral("actionCopy"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/Rec/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCopy->setIcon(icon4);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/Rec/roller.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon5);
        action_6 = new QAction(MainWindow);
        action_6->setObjectName(QStringLiteral("action_6"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/Rec/next .png"), QSize(), QIcon::Normal, QIcon::Off);
        action_6->setIcon(icon6);
        action_7 = new QAction(MainWindow);
        action_7->setObjectName(QStringLiteral("action_7"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/Rec/return.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_7->setIcon(icon7);
        actionAbout_App = new QAction(MainWindow);
        actionAbout_App->setObjectName(QStringLiteral("actionAbout_App"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/Rec/info.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_App->setIcon(icon8);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        textEdit = new QTextEdit(centralwidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setStyleSheet(QLatin1String("background-color: rgb(46, 52, 54);\n"
"color: rgb(255, 255, 255);"));

        verticalLayout->addWidget(textEdit);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 1055, 29));
        menuFile = new QMenu(menubar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        menuEdit = new QMenu(menubar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuAbout = new QMenu(menubar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        MainWindow->setMenuBar(menubar);
        toolBar = new QToolBar(MainWindow);
        toolBar->setObjectName(QStringLiteral("toolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuFile->menuAction());
        menubar->addAction(menuEdit->menuAction());
        menubar->addAction(menuAbout->menuAction());
        menuFile->addAction(actionNew);
        menuFile->addAction(actionOpen);
        menuFile->addSeparator();
        menuFile->addAction(actionSave_2);
        menuFile->addAction(actionSave_as);
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionCopy);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addAction(action_6);
        menuEdit->addAction(action_7);
        menuAbout->addAction(actionAbout_App);
        toolBar->addAction(actionNew);
        toolBar->addAction(actionOpen);
        toolBar->addAction(actionSave_2);
        toolBar->addAction(actionSave_as);
        toolBar->addSeparator();
        toolBar->addAction(actionCut);
        toolBar->addAction(actionCopy);
        toolBar->addAction(actionPaste);
        toolBar->addAction(action_7);
        toolBar->addAction(action_6);
        toolBar->addSeparator();
        toolBar->addAction(actionAbout_App);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", Q_NULLPTR));
        actionNew->setText(QApplication::translate("MainWindow", "New", Q_NULLPTR));
        actionOpen->setText(QApplication::translate("MainWindow", "Open", Q_NULLPTR));
        actionSave_2->setText(QApplication::translate("MainWindow", "Save", Q_NULLPTR));
        actionSave_as->setText(QApplication::translate("MainWindow", "Save as", Q_NULLPTR));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", Q_NULLPTR));
        actionCopy->setText(QApplication::translate("MainWindow", "Copy", Q_NULLPTR));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", Q_NULLPTR));
        action_6->setText(QApplication::translate("MainWindow", "=>", Q_NULLPTR));
        action_7->setText(QApplication::translate("MainWindow", "<=", Q_NULLPTR));
        actionAbout_App->setText(QApplication::translate("MainWindow", "About App", Q_NULLPTR));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", Q_NULLPTR));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", Q_NULLPTR));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", Q_NULLPTR));
        toolBar->setWindowTitle(QApplication::translate("MainWindow", "toolBar", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
