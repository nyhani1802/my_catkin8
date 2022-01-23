/********************************************************************************
** Form generated from reading UI file 'dialogplay.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGPLAY_H
#define UI_DIALOGPLAY_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_DialogPlay
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QHBoxLayout *horizontalLayout;
    QTextEdit *textEditProgram;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButtonDownLoad;
    QPushButton *pushButtonExecute;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label;
    QLineEdit *lineEditPath;
    QPushButton *pushButtonSave;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *DialogPlay)
    {
        if (DialogPlay->objectName().isEmpty())
            DialogPlay->setObjectName(QString::fromUtf8("DialogPlay"));
        DialogPlay->resize(624, 687);
        verticalLayout = new QVBoxLayout(DialogPlay);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(DialogPlay);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        horizontalLayout = new QHBoxLayout(groupBox);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        textEditProgram = new QTextEdit(groupBox);
        textEditProgram->setObjectName(QString::fromUtf8("textEditProgram"));

        horizontalLayout->addWidget(textEditProgram);


        verticalLayout->addWidget(groupBox);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButtonDownLoad = new QPushButton(DialogPlay);
        pushButtonDownLoad->setObjectName(QString::fromUtf8("pushButtonDownLoad"));

        horizontalLayout_2->addWidget(pushButtonDownLoad);

        pushButtonExecute = new QPushButton(DialogPlay);
        pushButtonExecute->setObjectName(QString::fromUtf8("pushButtonExecute"));

        horizontalLayout_2->addWidget(pushButtonExecute);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label = new QLabel(DialogPlay);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_3->addWidget(label);

        lineEditPath = new QLineEdit(DialogPlay);
        lineEditPath->setObjectName(QString::fromUtf8("lineEditPath"));

        horizontalLayout_3->addWidget(lineEditPath);

        pushButtonSave = new QPushButton(DialogPlay);
        pushButtonSave->setObjectName(QString::fromUtf8("pushButtonSave"));

        horizontalLayout_3->addWidget(pushButtonSave);


        verticalLayout->addLayout(horizontalLayout_3);

        buttonBox = new QDialogButtonBox(DialogPlay);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(DialogPlay);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogPlay, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogPlay, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogPlay);
    } // setupUi

    void retranslateUi(QDialog *DialogPlay)
    {
        DialogPlay->setWindowTitle(QApplication::translate("DialogPlay", "Dialog", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("DialogPlay", "PROGRAM", 0, QApplication::UnicodeUTF8));
        pushButtonDownLoad->setText(QApplication::translate("DialogPlay", "DOWNLOAD TO CONTROLLER", 0, QApplication::UnicodeUTF8));
        pushButtonExecute->setText(QApplication::translate("DialogPlay", "EXECUTE", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("DialogPlay", "Path", 0, QApplication::UnicodeUTF8));
        pushButtonSave->setText(QApplication::translate("DialogPlay", "SAVE FROM CONTROLLER", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class DialogPlay: public Ui_DialogPlay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGPLAY_H
