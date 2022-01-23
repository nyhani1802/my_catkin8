/********************************************************************************
** Form generated from reading UI file 'dialogposition.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPOSITION_H
#define UI_DIALOGPOSITION_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogPosition
{
public:
    QVBoxLayout *verticalLayout_3;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_7;
    QLabel *labelName1;
    QDoubleSpinBox *doubleSpinBox1;
    QLabel *labelUnit1;
    QHBoxLayout *horizontalLayout_8;
    QLabel *labelName2;
    QDoubleSpinBox *doubleSpinBox2;
    QLabel *labelUnit2;
    QHBoxLayout *horizontalLayout_9;
    QLabel *labelName3;
    QDoubleSpinBox *doubleSpinBox3;
    QLabel *labelUnit3;
    QHBoxLayout *horizontalLayout_10;
    QLabel *labelName4;
    QDoubleSpinBox *doubleSpinBox4;
    QLabel *labelUnit4;
    QHBoxLayout *horizontalLayout_11;
    QLabel *labelName5;
    QDoubleSpinBox *doubleSpinBox5;
    QLabel *labelUint5;
    QHBoxLayout *horizontalLayout_12;
    QLabel *labelName6;
    QDoubleSpinBox *doubleSpinBox6;
    QLabel *labelUnit6;
    QComboBox *comboBoxCoordinate;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogPosition)
    {
        if (DialogPosition->objectName().isEmpty())
            DialogPosition->setObjectName(QString::fromUtf8("DialogPosition"));
        DialogPosition->resize(238, 390);
        verticalLayout_3 = new QVBoxLayout(DialogPosition);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        groupBox_2 = new QGroupBox(DialogPosition);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy);
        groupBox_2->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"    border: 1px solid gray;\n"
"    border-radius: 9px;\n"
"    margin-top: 0.5em;\n"
"}\n"
"\n"
"QGroupBox::title {\n"
"    subcontrol-origin: margin;\n"
"    left: 10px;\n"
"    padding: 0 3px 0 3px;\n"
"}"));
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        labelName1 = new QLabel(groupBox_2);
        labelName1->setObjectName(QString::fromUtf8("labelName1"));

        horizontalLayout_7->addWidget(labelName1);

        doubleSpinBox1 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox1->setObjectName(QString::fromUtf8("doubleSpinBox1"));
        doubleSpinBox1->setDecimals(5);

        horizontalLayout_7->addWidget(doubleSpinBox1);

        labelUnit1 = new QLabel(groupBox_2);
        labelUnit1->setObjectName(QString::fromUtf8("labelUnit1"));

        horizontalLayout_7->addWidget(labelUnit1);


        verticalLayout->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        labelName2 = new QLabel(groupBox_2);
        labelName2->setObjectName(QString::fromUtf8("labelName2"));

        horizontalLayout_8->addWidget(labelName2);

        doubleSpinBox2 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox2->setObjectName(QString::fromUtf8("doubleSpinBox2"));
        doubleSpinBox2->setDecimals(5);

        horizontalLayout_8->addWidget(doubleSpinBox2);

        labelUnit2 = new QLabel(groupBox_2);
        labelUnit2->setObjectName(QString::fromUtf8("labelUnit2"));

        horizontalLayout_8->addWidget(labelUnit2);


        verticalLayout->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        labelName3 = new QLabel(groupBox_2);
        labelName3->setObjectName(QString::fromUtf8("labelName3"));

        horizontalLayout_9->addWidget(labelName3);

        doubleSpinBox3 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox3->setObjectName(QString::fromUtf8("doubleSpinBox3"));
        doubleSpinBox3->setDecimals(5);

        horizontalLayout_9->addWidget(doubleSpinBox3);

        labelUnit3 = new QLabel(groupBox_2);
        labelUnit3->setObjectName(QString::fromUtf8("labelUnit3"));

        horizontalLayout_9->addWidget(labelUnit3);


        verticalLayout->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        labelName4 = new QLabel(groupBox_2);
        labelName4->setObjectName(QString::fromUtf8("labelName4"));

        horizontalLayout_10->addWidget(labelName4);

        doubleSpinBox4 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox4->setObjectName(QString::fromUtf8("doubleSpinBox4"));
        doubleSpinBox4->setDecimals(5);

        horizontalLayout_10->addWidget(doubleSpinBox4);

        labelUnit4 = new QLabel(groupBox_2);
        labelUnit4->setObjectName(QString::fromUtf8("labelUnit4"));

        horizontalLayout_10->addWidget(labelUnit4);


        verticalLayout->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        labelName5 = new QLabel(groupBox_2);
        labelName5->setObjectName(QString::fromUtf8("labelName5"));

        horizontalLayout_11->addWidget(labelName5);

        doubleSpinBox5 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox5->setObjectName(QString::fromUtf8("doubleSpinBox5"));
        doubleSpinBox5->setDecimals(5);

        horizontalLayout_11->addWidget(doubleSpinBox5);

        labelUint5 = new QLabel(groupBox_2);
        labelUint5->setObjectName(QString::fromUtf8("labelUint5"));

        horizontalLayout_11->addWidget(labelUint5);


        verticalLayout->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        labelName6 = new QLabel(groupBox_2);
        labelName6->setObjectName(QString::fromUtf8("labelName6"));

        horizontalLayout_12->addWidget(labelName6);

        doubleSpinBox6 = new QDoubleSpinBox(groupBox_2);
        doubleSpinBox6->setObjectName(QString::fromUtf8("doubleSpinBox6"));
        doubleSpinBox6->setDecimals(5);

        horizontalLayout_12->addWidget(doubleSpinBox6);

        labelUnit6 = new QLabel(groupBox_2);
        labelUnit6->setObjectName(QString::fromUtf8("labelUnit6"));

        horizontalLayout_12->addWidget(labelUnit6);


        verticalLayout->addLayout(horizontalLayout_12);

        comboBoxCoordinate = new QComboBox(groupBox_2);
        comboBoxCoordinate->setObjectName(QString::fromUtf8("comboBoxCoordinate"));

        verticalLayout->addWidget(comboBoxCoordinate);


        verticalLayout_3->addWidget(groupBox_2);

        buttonBox = new QDialogButtonBox(DialogPosition);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_3->addWidget(buttonBox);


        retranslateUi(DialogPosition);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogPosition, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogPosition, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogPosition);
    } // setupUi

    void retranslateUi(QDialog *DialogPosition)
    {
        DialogPosition->setWindowTitle(QApplication::translate("DialogPosition", "POSITION SETTING", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("DialogPosition", "TARGER POSITION", 0, QApplication::UnicodeUTF8));
        labelName1->setText(QApplication::translate("DialogPosition", "S", 0, QApplication::UnicodeUTF8));
        labelUnit1->setText(QApplication::translate("DialogPosition", "deg", 0, QApplication::UnicodeUTF8));
        labelName2->setText(QApplication::translate("DialogPosition", "L", 0, QApplication::UnicodeUTF8));
        labelUnit2->setText(QApplication::translate("DialogPosition", "deg", 0, QApplication::UnicodeUTF8));
        labelName3->setText(QApplication::translate("DialogPosition", "U", 0, QApplication::UnicodeUTF8));
        labelUnit3->setText(QApplication::translate("DialogPosition", "deg", 0, QApplication::UnicodeUTF8));
        labelName4->setText(QApplication::translate("DialogPosition", "R", 0, QApplication::UnicodeUTF8));
        labelUnit4->setText(QApplication::translate("DialogPosition", "deg", 0, QApplication::UnicodeUTF8));
        labelName5->setText(QApplication::translate("DialogPosition", "B", 0, QApplication::UnicodeUTF8));
        labelUint5->setText(QApplication::translate("DialogPosition", "deg", 0, QApplication::UnicodeUTF8));
        labelName6->setText(QApplication::translate("DialogPosition", "S", 0, QApplication::UnicodeUTF8));
        labelUnit6->setText(QApplication::translate("DialogPosition", "deg", 0, QApplication::UnicodeUTF8));
        comboBoxCoordinate->clear();
        comboBoxCoordinate->insertItems(0, QStringList()
         << QApplication::translate("DialogPosition", "JOINTS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogPosition", "CARTESIAN", 0, QApplication::UnicodeUTF8)
        );
    } // retranslateUi

};

namespace Ui {
    class DialogPosition: public Ui_DialogPosition {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPOSITION_H
