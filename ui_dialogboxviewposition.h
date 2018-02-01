/********************************************************************************
** Form generated from reading UI file 'dialogboxviewposition.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBOXVIEWPOSITION_H
#define UI_DIALOGBOXVIEWPOSITION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogBoxViewPosition
{
public:
    QLabel *label;
    QDoubleSpinBox *doubleSpinBoxDirectionX;
    QDoubleSpinBox *doubleSpinBoxDirectionY;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBoxEyeY;
    QDoubleSpinBox *doubleSpinBoxDirectionZ;
    QDoubleSpinBox *doubleSpinBoxEyeZ;
    QPushButton *pushButtonViewFrom;
    QLabel *label_3;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxEyeX;

    void setupUi(QDialog *DialogBoxViewPosition)
    {
        if (DialogBoxViewPosition->objectName().isEmpty())
            DialogBoxViewPosition->setObjectName(QStringLiteral("DialogBoxViewPosition"));
        DialogBoxViewPosition->resize(400, 300);
        label = new QLabel(DialogBoxViewPosition);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 40, 51, 20));
        doubleSpinBoxDirectionX = new QDoubleSpinBox(DialogBoxViewPosition);
        doubleSpinBoxDirectionX->setObjectName(QStringLiteral("doubleSpinBoxDirectionX"));
        doubleSpinBoxDirectionX->setGeometry(QRect(240, 60, 69, 26));
        doubleSpinBoxDirectionX->setMinimum(-99.99);
        doubleSpinBoxDirectionY = new QDoubleSpinBox(DialogBoxViewPosition);
        doubleSpinBoxDirectionY->setObjectName(QStringLiteral("doubleSpinBoxDirectionY"));
        doubleSpinBoxDirectionY->setGeometry(QRect(240, 120, 69, 26));
        doubleSpinBoxDirectionY->setMinimum(-99.99);
        label_4 = new QLabel(DialogBoxViewPosition);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(240, 40, 81, 20));
        doubleSpinBoxEyeY = new QDoubleSpinBox(DialogBoxViewPosition);
        doubleSpinBoxEyeY->setObjectName(QStringLiteral("doubleSpinBoxEyeY"));
        doubleSpinBoxEyeY->setGeometry(QRect(90, 120, 69, 26));
        doubleSpinBoxEyeY->setMinimum(-99.99);
        doubleSpinBoxDirectionZ = new QDoubleSpinBox(DialogBoxViewPosition);
        doubleSpinBoxDirectionZ->setObjectName(QStringLiteral("doubleSpinBoxDirectionZ"));
        doubleSpinBoxDirectionZ->setGeometry(QRect(240, 180, 69, 26));
        doubleSpinBoxDirectionZ->setMinimum(-99.99);
        doubleSpinBoxEyeZ = new QDoubleSpinBox(DialogBoxViewPosition);
        doubleSpinBoxEyeZ->setObjectName(QStringLiteral("doubleSpinBoxEyeZ"));
        doubleSpinBoxEyeZ->setGeometry(QRect(90, 180, 69, 26));
        doubleSpinBoxEyeZ->setMinimum(-99.99);
        pushButtonViewFrom = new QPushButton(DialogBoxViewPosition);
        pushButtonViewFrom->setObjectName(QStringLiteral("pushButtonViewFrom"));
        pushButtonViewFrom->setGeometry(QRect(160, 230, 89, 25));
        label_3 = new QLabel(DialogBoxViewPosition);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 160, 51, 17));
        label_5 = new QLabel(DialogBoxViewPosition);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(240, 100, 81, 20));
        label_6 = new QLabel(DialogBoxViewPosition);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(230, 160, 81, 17));
        label_2 = new QLabel(DialogBoxViewPosition);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 100, 41, 17));
        doubleSpinBoxEyeX = new QDoubleSpinBox(DialogBoxViewPosition);
        doubleSpinBoxEyeX->setObjectName(QStringLiteral("doubleSpinBoxEyeX"));
        doubleSpinBoxEyeX->setGeometry(QRect(90, 60, 69, 26));
        doubleSpinBoxEyeX->setMinimumSize(QSize(69, 26));
        doubleSpinBoxEyeX->setMinimum(-99.99);

        retranslateUi(DialogBoxViewPosition);

        QMetaObject::connectSlotsByName(DialogBoxViewPosition);
    } // setupUi

    void retranslateUi(QDialog *DialogBoxViewPosition)
    {
        DialogBoxViewPosition->setWindowTitle(QApplication::translate("DialogBoxViewPosition", "View Position", 0));
        label->setText(QApplication::translate("DialogBoxViewPosition", "eye X", 0));
        label_4->setText(QApplication::translate("DialogBoxViewPosition", "direction  X", 0));
        pushButtonViewFrom->setText(QApplication::translate("DialogBoxViewPosition", "OK", 0));
        label_3->setText(QApplication::translate("DialogBoxViewPosition", "eye Z", 0));
        label_5->setText(QApplication::translate("DialogBoxViewPosition", "direction Y", 0));
        label_6->setText(QApplication::translate("DialogBoxViewPosition", "direction Z", 0));
        label_2->setText(QApplication::translate("DialogBoxViewPosition", "eye Y", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogBoxViewPosition: public Ui_DialogBoxViewPosition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBOXVIEWPOSITION_H
