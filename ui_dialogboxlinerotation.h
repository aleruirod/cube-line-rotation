/********************************************************************************
** Form generated from reading UI file 'dialogboxlinerotation.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGBOXLINEROTATION_H
#define UI_DIALOGBOXLINEROTATION_H

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

class Ui_DialogBoxLineRotation
{
public:
    QLabel *label;
    QLabel *label_3;
    QPushButton *pushButtonRotate;
    QDoubleSpinBox *doubleSpinBoxDX;
    QLabel *label_4;
    QDoubleSpinBox *doubleSpinBoxDZ;
    QDoubleSpinBox *doubleSpinBoxDY;
    QDoubleSpinBox *doubleSpinBoxBX;
    QLabel *label_6;
    QLabel *label_2;
    QDoubleSpinBox *doubleSpinBoxRotationAngle;
    QLabel *label_5;
    QDoubleSpinBox *doubleSpinBoxBY;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBoxBZ;

    void setupUi(QDialog *DialogBoxLineRotation)
    {
        if (DialogBoxLineRotation->objectName().isEmpty())
            DialogBoxLineRotation->setObjectName(QStringLiteral("DialogBoxLineRotation"));
        DialogBoxLineRotation->resize(443, 300);
        label = new QLabel(DialogBoxLineRotation);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(70, 50, 21, 17));
        label_3 = new QLabel(DialogBoxLineRotation);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 170, 21, 17));
        pushButtonRotate = new QPushButton(DialogBoxLineRotation);
        pushButtonRotate->setObjectName(QStringLiteral("pushButtonRotate"));
        pushButtonRotate->setGeometry(QRect(190, 240, 89, 25));
        doubleSpinBoxDX = new QDoubleSpinBox(DialogBoxLineRotation);
        doubleSpinBoxDX->setObjectName(QStringLiteral("doubleSpinBoxDX"));
        doubleSpinBoxDX->setGeometry(QRect(200, 70, 69, 26));
        doubleSpinBoxDX->setMinimum(-99.99);
        label_4 = new QLabel(DialogBoxLineRotation);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(220, 50, 21, 17));
        doubleSpinBoxDZ = new QDoubleSpinBox(DialogBoxLineRotation);
        doubleSpinBoxDZ->setObjectName(QStringLiteral("doubleSpinBoxDZ"));
        doubleSpinBoxDZ->setGeometry(QRect(200, 190, 69, 26));
        doubleSpinBoxDZ->setMinimum(-99.99);
        doubleSpinBoxDY = new QDoubleSpinBox(DialogBoxLineRotation);
        doubleSpinBoxDY->setObjectName(QStringLiteral("doubleSpinBoxDY"));
        doubleSpinBoxDY->setGeometry(QRect(200, 130, 69, 26));
        doubleSpinBoxDY->setMinimum(-99.99);
        doubleSpinBoxBX = new QDoubleSpinBox(DialogBoxLineRotation);
        doubleSpinBoxBX->setObjectName(QStringLiteral("doubleSpinBoxBX"));
        doubleSpinBoxBX->setGeometry(QRect(50, 70, 69, 26));
        doubleSpinBoxBX->setMinimumSize(QSize(69, 26));
        doubleSpinBoxBX->setMinimum(-99.99);
        label_6 = new QLabel(DialogBoxLineRotation);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(220, 170, 21, 17));
        label_2 = new QLabel(DialogBoxLineRotation);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 110, 21, 17));
        doubleSpinBoxRotationAngle = new QDoubleSpinBox(DialogBoxLineRotation);
        doubleSpinBoxRotationAngle->setObjectName(QStringLiteral("doubleSpinBoxRotationAngle"));
        doubleSpinBoxRotationAngle->setGeometry(QRect(330, 130, 69, 26));
        label_5 = new QLabel(DialogBoxLineRotation);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(220, 110, 21, 17));
        doubleSpinBoxBY = new QDoubleSpinBox(DialogBoxLineRotation);
        doubleSpinBoxBY->setObjectName(QStringLiteral("doubleSpinBoxBY"));
        doubleSpinBoxBY->setGeometry(QRect(50, 130, 69, 26));
        doubleSpinBoxBY->setMinimum(-99.99);
        label_7 = new QLabel(DialogBoxLineRotation);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(320, 90, 111, 41));
        doubleSpinBoxBZ = new QDoubleSpinBox(DialogBoxLineRotation);
        doubleSpinBoxBZ->setObjectName(QStringLiteral("doubleSpinBoxBZ"));
        doubleSpinBoxBZ->setGeometry(QRect(50, 190, 69, 26));
        doubleSpinBoxBZ->setMinimum(-99.99);

        retranslateUi(DialogBoxLineRotation);

        QMetaObject::connectSlotsByName(DialogBoxLineRotation);
    } // setupUi

    void retranslateUi(QDialog *DialogBoxLineRotation)
    {
        DialogBoxLineRotation->setWindowTitle(QApplication::translate("DialogBoxLineRotation", "Line Rotation", 0));
        label->setText(QApplication::translate("DialogBoxLineRotation", "bX", 0));
        label_3->setText(QApplication::translate("DialogBoxLineRotation", "bZ", 0));
        pushButtonRotate->setText(QApplication::translate("DialogBoxLineRotation", "OK", 0));
        label_4->setText(QApplication::translate("DialogBoxLineRotation", "dX", 0));
        label_6->setText(QApplication::translate("DialogBoxLineRotation", "dZ", 0));
        label_2->setText(QApplication::translate("DialogBoxLineRotation", "bY", 0));
        label_5->setText(QApplication::translate("DialogBoxLineRotation", "dY", 0));
        label_7->setText(QApplication::translate("DialogBoxLineRotation", "Rotation Angle", 0));
    } // retranslateUi

};

namespace Ui {
    class DialogBoxLineRotation: public Ui_DialogBoxLineRotation {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGBOXLINEROTATION_H
