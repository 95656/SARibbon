﻿#ifndef SARIBBONLINEEDIT_H
#define SARIBBONLINEEDIT_H
#include "SARibbonGlobal.h"
#include <QLineEdit>



class SA_RIBBON_EXPORT SARibbonLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    SARibbonLineEdit(QWidget *parent = Q_NULLPTR);
};

#endif // SARIBBONLINEEDIT_H