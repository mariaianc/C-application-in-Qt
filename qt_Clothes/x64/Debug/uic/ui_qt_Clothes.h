/********************************************************************************
** Form generated from reading UI file 'qt_Clothes.ui'
**
** Created by: Qt User Interface Compiler version 6.2.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QT_CLOTHES_H
#define UI_QT_CLOTHES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_qt_ClothesClass
{
public:
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QWidget *centralWidget;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *qt_ClothesClass)
    {
        if (qt_ClothesClass->objectName().isEmpty())
            qt_ClothesClass->setObjectName(QString::fromUtf8("qt_ClothesClass"));
        qt_ClothesClass->resize(600, 400);
        menuBar = new QMenuBar(qt_ClothesClass);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        qt_ClothesClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(qt_ClothesClass);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        qt_ClothesClass->addToolBar(mainToolBar);
        centralWidget = new QWidget(qt_ClothesClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        qt_ClothesClass->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(qt_ClothesClass);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        qt_ClothesClass->setStatusBar(statusBar);

        retranslateUi(qt_ClothesClass);

        QMetaObject::connectSlotsByName(qt_ClothesClass);
    } // setupUi

    void retranslateUi(QMainWindow *qt_ClothesClass)
    {
        qt_ClothesClass->setWindowTitle(QCoreApplication::translate("qt_ClothesClass", "qt_Clothes", nullptr));
    } // retranslateUi

};

namespace Ui {
    class qt_ClothesClass: public Ui_qt_ClothesClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QT_CLOTHES_H
