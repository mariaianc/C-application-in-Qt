#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_qt_Clothes.h"

class qt_Clothes : public QMainWindow
{
    Q_OBJECT

public:
    qt_Clothes(QWidget *parent = Q_NULLPTR);

private:
    Ui::qt_ClothesClass ui;
};
