/********************************************************************************
** Form generated from reading UI file 'dialogeditstep.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGEDITSTEP_H
#define UI_DIALOGEDITSTEP_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogEditStep
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_6;
    QSpinBox *spinBoxLineNo;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QComboBox *comboBoxType;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QComboBox *comboBoxInstruction;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QComboBox *comboBoxArg1;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lineEditArg2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_5;
    QLineEdit *lineEditArg3;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogEditStep)
    {
        if (DialogEditStep->objectName().isEmpty())
            DialogEditStep->setObjectName(QString::fromUtf8("DialogEditStep"));
        DialogEditStep->resize(323, 351);
        verticalLayout = new QVBoxLayout(DialogEditStep);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_6 = new QLabel(DialogEditStep);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_6->addWidget(label_6);

        spinBoxLineNo = new QSpinBox(DialogEditStep);
        spinBoxLineNo->setObjectName(QString::fromUtf8("spinBoxLineNo"));

        horizontalLayout_6->addWidget(spinBoxLineNo);


        verticalLayout->addLayout(horizontalLayout_6);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(DialogEditStep);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        comboBoxType = new QComboBox(DialogEditStep);
        comboBoxType->setObjectName(QString::fromUtf8("comboBoxType"));

        horizontalLayout->addWidget(comboBoxType);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_2 = new QLabel(DialogEditStep);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_2->addWidget(label_2);

        comboBoxInstruction = new QComboBox(DialogEditStep);
        comboBoxInstruction->setObjectName(QString::fromUtf8("comboBoxInstruction"));

        horizontalLayout_2->addWidget(comboBoxInstruction);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_3 = new QLabel(DialogEditStep);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_3->addWidget(label_3);

        comboBoxArg1 = new QComboBox(DialogEditStep);
        comboBoxArg1->setObjectName(QString::fromUtf8("comboBoxArg1"));

        horizontalLayout_3->addWidget(comboBoxArg1);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_4 = new QLabel(DialogEditStep);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lineEditArg2 = new QLineEdit(DialogEditStep);
        lineEditArg2->setObjectName(QString::fromUtf8("lineEditArg2"));

        horizontalLayout_4->addWidget(lineEditArg2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_5 = new QLabel(DialogEditStep);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_5->addWidget(label_5);

        lineEditArg3 = new QLineEdit(DialogEditStep);
        lineEditArg3->setObjectName(QString::fromUtf8("lineEditArg3"));

        horizontalLayout_5->addWidget(lineEditArg3);


        verticalLayout->addLayout(horizontalLayout_5);

        buttonBox = new QDialogButtonBox(DialogEditStep);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogEditStep);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogEditStep, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogEditStep, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogEditStep);
    } // setupUi

    void retranslateUi(QDialog *DialogEditStep)
    {
        DialogEditStep->setWindowTitle(QApplication::translate("DialogEditStep", "STEP TEACHING", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("DialogEditStep", "LINE NO", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogEditStep", "TYPE", 0, QApplication::UnicodeUTF8));
        comboBoxType->clear();
        comboBoxType->insertItems(0, QStringList()
         << QApplication::translate("DialogEditStep", "MOVE INSTRUCTION", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogEditStep", "I/O INSTRUCTION", 0, QApplication::UnicodeUTF8)
        );
        label_2->setText(QApplication::translate("DialogEditStep", "INSTRUCTION", 0, QApplication::UnicodeUTF8));
        comboBoxInstruction->clear();
        comboBoxInstruction->insertItems(0, QStringList()
         << QApplication::translate("DialogEditStep", "MOVJ", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogEditStep", "MOVL", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogEditStep", "MOVS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogEditStep", "MOVC", 0, QApplication::UnicodeUTF8)
        );
        label_3->setText(QApplication::translate("DialogEditStep", "POSTION", 0, QApplication::UnicodeUTF8));
        comboBoxArg1->clear();
        comboBoxArg1->insertItems(0, QStringList()
         << QApplication::translate("DialogEditStep", "C000", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogEditStep", "C001", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("DialogEditStep", "C002", 0, QApplication::UnicodeUTF8)
        );
        label_4->setText(QApplication::translate("DialogEditStep", "VELOCITY", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("DialogEditStep", "OPTION", 0, QApplication::UnicodeUTF8));
        lineEditArg3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class DialogEditStep: public Ui_DialogEditStep {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGEDITSTEP_H
