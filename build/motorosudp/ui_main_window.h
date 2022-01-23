/********************************************************************************
** Form generated from reading UI file 'main_window.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAIN_WINDOW_H
#define UI_MAIN_WINDOW_H

#include <QtCore/QLocale>
#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QRadioButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QSplitter>
#include <QtGui/QTabWidget>
#include <QtGui/QTextEdit>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindowDesign
{
public:
    QAction *action_Quit;
    QAction *action_Preferences;
    QAction *actionAbout;
    QAction *actionAbout_Qt;
    QAction *actionEnable_Display_End_effecter_Position;
    QAction *actionEnable;
    QAction *actionDisable;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout_6;
    QGroupBox *groupBoxUDP;
    QHBoxLayout *horizontalLayout_4;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QLineEdit *lineEditrobotAddress;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_2;
    QLineEdit *lineEditPortNumber;
    QHBoxLayout *horizontalLayout_5;
    QPushButton *pushButtonConnect;
    QLabel *labelConnectStatus;
    QSpacerItem *horizontalSpacer;
    QTabWidget *tabWidget;
    QWidget *tab;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_19;
    QGroupBox *groupBoxJOG;
    QVBoxLayout *verticalLayout_3;
    QSplitter *splitter_2;
    QPushButton *pushButtonSubb_1;
    QPushButton *pushButtonAdd_1;
    QSplitter *splitter_3;
    QPushButton *pushButtonSubb_2;
    QPushButton *pushButtonAdd_2;
    QSplitter *splitter_4;
    QPushButton *pushButtonSubb_3;
    QPushButton *pushButtonAdd_3;
    QSplitter *splitter_5;
    QPushButton *pushButtonSubb_4;
    QPushButton *pushButtonAdd_4;
    QSplitter *splitter_6;
    QPushButton *pushButtonSubb_5;
    QPushButton *pushButtonAdd_5;
    QSplitter *splitter_7;
    QPushButton *pushButtonSubb_6;
    QPushButton *pushButtonAdd_6;
    QGroupBox *groupBoxRobotControl;
    QVBoxLayout *verticalLayout_2;
    QPushButton *pushButtonServo;
    QLabel *labelStatusServo;
    QPushButton *pushButtonHoming;
    QLabel *label_5;
    QLabel *label_14;
    QGroupBox *groupBox_5;
    QVBoxLayout *verticalLayout_12;
    QComboBox *comboBox;
    QComboBox *comboBoxCoordinate;
    QCheckBox *checkBoxTrajectory;
    QRadioButton *radioButtonInteractiveMarker;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label_4;
    QLineEdit *lineEditS;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_7;
    QLineEdit *lineEditL;
    QHBoxLayout *horizontalLayout_9;
    QLabel *label_10;
    QLineEdit *lineEditU;
    QHBoxLayout *horizontalLayout_10;
    QLabel *label_13;
    QLineEdit *lineEditR;
    QHBoxLayout *horizontalLayout_11;
    QLabel *label_16;
    QLineEdit *lineEditB;
    QHBoxLayout *horizontalLayout_12;
    QLabel *label_19;
    QLineEdit *lineEditT;
    QGroupBox *groupBox_3;
    QVBoxLayout *verticalLayout_7;
    QHBoxLayout *horizontalLayout_13;
    QLabel *label_22;
    QLineEdit *lineEditX;
    QHBoxLayout *horizontalLayout_14;
    QLabel *label_25;
    QLineEdit *lineEditY;
    QHBoxLayout *horizontalLayout_15;
    QLabel *label_28;
    QLineEdit *lineEditZ;
    QHBoxLayout *horizontalLayout_16;
    QLabel *label_31;
    QLineEdit *lineEditRX;
    QHBoxLayout *horizontalLayout_17;
    QLabel *label_34;
    QLineEdit *lineEditRY;
    QHBoxLayout *horizontalLayout_18;
    QLabel *label_37;
    QLineEdit *lineEditRZ;
    QPushButton *pushButtonCalculateFK;
    QHBoxLayout *horizontalLayout_32;
    QGroupBox *groupBoxTeachingPoint;
    QVBoxLayout *verticalLayout_10;
    QHBoxLayout *horizontalLayout_24;
    QListWidget *listWidgetPoints;
    QVBoxLayout *verticalLayout_9;
    QPushButton *pushButtonAddPoint;
    QPushButton *pushButtonRemovePoint;
    QPushButton *pushButtonCheck;
    QHBoxLayout *horizontalLayout_25;
    QPushButton *pushButtonGeneratePath;
    QSpacerItem *horizontalSpacer_2;
    QGroupBox *groupBoxTeachingStep;
    QVBoxLayout *verticalLayout_8;
    QTextEdit *textEditJOB;
    QHBoxLayout *horizontalLayout_27;
    QPushButton *pushButtonSendJOB;
    QSpacerItem *horizontalSpacer_4;
    QPushButton *pushButtonStartMasterJOB;
    QHBoxLayout *horizontalLayout_23;
    QHBoxLayout *horizontalLayout_21;
    QPushButton *pushButtonGetJobFile;
    QLabel *label_18;
    QLineEdit *lineEditName;
    QPushButton *pushButtonOpenJOB;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_6;
    QLineEdit *lineEditPath;
    QWidget *tab_3;
    QVBoxLayout *verticalLayout_22;
    QGroupBox *groupBox_7;
    QHBoxLayout *horizontalLayout;
    QPushButton *CameraOn_Button;
    QPushButton *CameraOff_Button;
    QComboBox *StreamOption_comboBox;
    QPushButton *Background_Button;
    QPushButton *Mask_Button;
    QPushButton *ChooseObject_Button;
    QPushButton *Size_Button;
    QHBoxLayout *horizontalLayout_22;
    QLabel *CameraFrame;
    QVBoxLayout *verticalLayout_11;
    QGroupBox *groupBox_6;
    QVBoxLayout *verticalLayout_4;
    QHBoxLayout *horizontalLayout_39;
    QLabel *label_17;
    QSpinBox *spinBoxStartY;
    QLabel *label_20;
    QHBoxLayout *horizontalLayout_40;
    QLabel *label_21;
    QSpinBox *spinBoxStopY;
    QLabel *label_24;
    QHBoxLayout *horizontalLayout_42;
    QLabel *label_27;
    QSpinBox *spinBoxDelayDy;
    QLabel *label_30;
    QHBoxLayout *horizontalLayout_43;
    QLabel *label_29;
    QSpinBox *spinBoxPickingDistance;
    QLabel *label_32;
    QHBoxLayout *horizontalLayout_38;
    QLabel *label_11;
    QSpinBox *spinBoxEncoderPickingHeight;
    QLabel *label_15;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_15;
    QPushButton *pushButtonConnectSerial;
    QLabel *labelSerialStatus;
    QHBoxLayout *horizontalLayout_36;
    QLabel *label_8;
    QSpinBox *spinBoxEncoderType;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_37;
    QLabel *label_12;
    QDoubleSpinBox *doubleSpinBoxRatio;
    QLabel *label_3;
    QHBoxLayout *horizontalLayout_44;
    QLabel *label_23;
    QLineEdit *lineEditSpeed;
    QLabel *label_26;
    QVBoxLayout *verticalLayout_21;
    QHBoxLayout *horizontalLayout_34;
    QGroupBox *groupBoxConveyer;
    QHBoxLayout *horizontalLayout_31;
    QPushButton *pushButtonStartConveyer;
    QLabel *labelStatusConveyer;
    QGroupBox *groupBoxServo;
    QHBoxLayout *horizontalLayout_29;
    QPushButton *pushButtonServoHoming;
    QPushButton *pushButtonStartProgram;
    QPushButton *pushButtonStopProgram;
    QGroupBox *groupBox_4;
    QVBoxLayout *verticalLayout_13;
    QHBoxLayout *horizontalLayout_20;
    QVBoxLayout *verticalLayout_14;
    QHBoxLayout *horizontalLayout_6;
    QHBoxLayout *horizontalLayout_35;
    QLabel *label_33;
    QLineEdit *lineEditX_3;
    QHBoxLayout *horizontalLayout_47;
    QLabel *label_36;
    QLineEdit *lineEditY_3;
    QHBoxLayout *horizontalLayout_49;
    QLabel *label_39;
    QLineEdit *lineEditZ_3;
    QSplitter *splitter_8;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout_51;
    QLabel *label_40;
    QLineEdit *lineEditRX_3;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_53;
    QLabel *label_42;
    QLineEdit *lineEditRZ_3;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_52;
    QLabel *label_41;
    QLineEdit *lineEditRY_3;
    QHBoxLayout *horizontalLayout_46;
    QLabel *label_44;
    QLineEdit *lineEditDistance;
    QLabel *label_45;
    QHBoxLayout *horizontalLayout_30;
    QSpacerItem *horizontalSpacer_3;
    QLabel *label_43;
    QSpinBox *spinBoxPVariableNO_2;
    QLabel *label_49;
    QSpinBox *spinBoxPVariableNO_4;
    QLabel *label_50;
    QSpinBox *spinBoxPVariableNO_5;
    QSpacerItem *horizontalSpacer_8;
    QMenuBar *menubar;
    QMenu *menu_File;
    QMenu *menuSetting;
    QMenu *menuDisplay_Option;

    void setupUi(QMainWindow *MainWindowDesign)
    {
        if (MainWindowDesign->objectName().isEmpty())
            MainWindowDesign->setObjectName(QString::fromUtf8("MainWindowDesign"));
        MainWindowDesign->resize(955, 893);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(MainWindowDesign->sizePolicy().hasHeightForWidth());
        MainWindowDesign->setSizePolicy(sizePolicy);
        MainWindowDesign->setMinimumSize(QSize(800, 600));
        QIcon icon;
        icon.addFile(QString::fromUtf8("../resources/images/motomini.png"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindowDesign->setWindowIcon(icon);
        MainWindowDesign->setStyleSheet(QString::fromUtf8(""));
        MainWindowDesign->setLocale(QLocale(QLocale::English, QLocale::Australia));
        action_Quit = new QAction(MainWindowDesign);
        action_Quit->setObjectName(QString::fromUtf8("action_Quit"));
        action_Quit->setShortcutContext(Qt::ApplicationShortcut);
        action_Preferences = new QAction(MainWindowDesign);
        action_Preferences->setObjectName(QString::fromUtf8("action_Preferences"));
        actionAbout = new QAction(MainWindowDesign);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        actionAbout_Qt = new QAction(MainWindowDesign);
        actionAbout_Qt->setObjectName(QString::fromUtf8("actionAbout_Qt"));
        actionEnable_Display_End_effecter_Position = new QAction(MainWindowDesign);
        actionEnable_Display_End_effecter_Position->setObjectName(QString::fromUtf8("actionEnable_Display_End_effecter_Position"));
        actionEnable = new QAction(MainWindowDesign);
        actionEnable->setObjectName(QString::fromUtf8("actionEnable"));
        actionEnable->setCheckable(true);
        actionDisable = new QAction(MainWindowDesign);
        actionDisable->setObjectName(QString::fromUtf8("actionDisable"));
        centralwidget = new QWidget(MainWindowDesign);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        centralwidget->setEnabled(true);
        verticalLayout_6 = new QVBoxLayout(centralwidget);
        verticalLayout_6->setObjectName(QString::fromUtf8("verticalLayout_6"));
        groupBoxUDP = new QGroupBox(centralwidget);
        groupBoxUDP->setObjectName(QString::fromUtf8("groupBoxUDP"));
        groupBoxUDP->setEnabled(true);
        groupBoxUDP->setCursor(QCursor(Qt::ArrowCursor));
        groupBoxUDP->setMouseTracking(false);
        groupBoxUDP->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        horizontalLayout_4 = new QHBoxLayout(groupBoxUDP);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(groupBoxUDP);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        lineEditrobotAddress = new QLineEdit(groupBoxUDP);
        lineEditrobotAddress->setObjectName(QString::fromUtf8("lineEditrobotAddress"));

        horizontalLayout_2->addWidget(lineEditrobotAddress);


        horizontalLayout_4->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));

        horizontalLayout_4->addLayout(horizontalLayout_3);

        label_2 = new QLabel(groupBoxUDP);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_4->addWidget(label_2);

        lineEditPortNumber = new QLineEdit(groupBoxUDP);
        lineEditPortNumber->setObjectName(QString::fromUtf8("lineEditPortNumber"));

        horizontalLayout_4->addWidget(lineEditPortNumber);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        pushButtonConnect = new QPushButton(groupBoxUDP);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));

        horizontalLayout_5->addWidget(pushButtonConnect);

        labelConnectStatus = new QLabel(groupBoxUDP);
        labelConnectStatus->setObjectName(QString::fromUtf8("labelConnectStatus"));
        labelConnectStatus->setEnabled(true);

        horizontalLayout_5->addWidget(labelConnectStatus);


        horizontalLayout_4->addLayout(horizontalLayout_5);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer);


        verticalLayout_6->addWidget(groupBoxUDP);

        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setAutoFillBackground(true);
        tabWidget->setStyleSheet(QString::fromUtf8(""));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        verticalLayout = new QVBoxLayout(tab);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout_19 = new QHBoxLayout();
        horizontalLayout_19->setObjectName(QString::fromUtf8("horizontalLayout_19"));
        groupBoxJOG = new QGroupBox(tab);
        groupBoxJOG->setObjectName(QString::fromUtf8("groupBoxJOG"));
        groupBoxJOG->setEnabled(true);
        groupBoxJOG->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        verticalLayout_3 = new QVBoxLayout(groupBoxJOG);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        splitter_2 = new QSplitter(groupBoxJOG);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        pushButtonSubb_1 = new QPushButton(splitter_2);
        pushButtonSubb_1->setObjectName(QString::fromUtf8("pushButtonSubb_1"));
        QFont font;
        font.setFamily(QString::fromUtf8("Ubuntu"));
        font.setItalic(false);
        pushButtonSubb_1->setFont(font);
        splitter_2->addWidget(pushButtonSubb_1);
        pushButtonAdd_1 = new QPushButton(splitter_2);
        pushButtonAdd_1->setObjectName(QString::fromUtf8("pushButtonAdd_1"));
        pushButtonAdd_1->setFont(font);
        splitter_2->addWidget(pushButtonAdd_1);

        verticalLayout_3->addWidget(splitter_2);

        splitter_3 = new QSplitter(groupBoxJOG);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        pushButtonSubb_2 = new QPushButton(splitter_3);
        pushButtonSubb_2->setObjectName(QString::fromUtf8("pushButtonSubb_2"));
        pushButtonSubb_2->setFont(font);
        splitter_3->addWidget(pushButtonSubb_2);
        pushButtonAdd_2 = new QPushButton(splitter_3);
        pushButtonAdd_2->setObjectName(QString::fromUtf8("pushButtonAdd_2"));
        pushButtonAdd_2->setFont(font);
        splitter_3->addWidget(pushButtonAdd_2);

        verticalLayout_3->addWidget(splitter_3);

        splitter_4 = new QSplitter(groupBoxJOG);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        pushButtonSubb_3 = new QPushButton(splitter_4);
        pushButtonSubb_3->setObjectName(QString::fromUtf8("pushButtonSubb_3"));
        pushButtonSubb_3->setFont(font);
        splitter_4->addWidget(pushButtonSubb_3);
        pushButtonAdd_3 = new QPushButton(splitter_4);
        pushButtonAdd_3->setObjectName(QString::fromUtf8("pushButtonAdd_3"));
        pushButtonAdd_3->setEnabled(true);
        pushButtonAdd_3->setFont(font);
        pushButtonAdd_3->setIconSize(QSize(16, 16));
        splitter_4->addWidget(pushButtonAdd_3);

        verticalLayout_3->addWidget(splitter_4);

        splitter_5 = new QSplitter(groupBoxJOG);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        pushButtonSubb_4 = new QPushButton(splitter_5);
        pushButtonSubb_4->setObjectName(QString::fromUtf8("pushButtonSubb_4"));
        pushButtonSubb_4->setFont(font);
        splitter_5->addWidget(pushButtonSubb_4);
        pushButtonAdd_4 = new QPushButton(splitter_5);
        pushButtonAdd_4->setObjectName(QString::fromUtf8("pushButtonAdd_4"));
        pushButtonAdd_4->setFont(font);
        splitter_5->addWidget(pushButtonAdd_4);

        verticalLayout_3->addWidget(splitter_5);

        splitter_6 = new QSplitter(groupBoxJOG);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setOrientation(Qt::Horizontal);
        pushButtonSubb_5 = new QPushButton(splitter_6);
        pushButtonSubb_5->setObjectName(QString::fromUtf8("pushButtonSubb_5"));
        pushButtonSubb_5->setFont(font);
        splitter_6->addWidget(pushButtonSubb_5);
        pushButtonAdd_5 = new QPushButton(splitter_6);
        pushButtonAdd_5->setObjectName(QString::fromUtf8("pushButtonAdd_5"));
        pushButtonAdd_5->setFont(font);
        splitter_6->addWidget(pushButtonAdd_5);

        verticalLayout_3->addWidget(splitter_6);

        splitter_7 = new QSplitter(groupBoxJOG);
        splitter_7->setObjectName(QString::fromUtf8("splitter_7"));
        splitter_7->setOrientation(Qt::Horizontal);
        pushButtonSubb_6 = new QPushButton(splitter_7);
        pushButtonSubb_6->setObjectName(QString::fromUtf8("pushButtonSubb_6"));
        pushButtonSubb_6->setFont(font);
        splitter_7->addWidget(pushButtonSubb_6);
        pushButtonAdd_6 = new QPushButton(splitter_7);
        pushButtonAdd_6->setObjectName(QString::fromUtf8("pushButtonAdd_6"));
        pushButtonAdd_6->setFont(font);
        splitter_7->addWidget(pushButtonAdd_6);

        verticalLayout_3->addWidget(splitter_7);


        horizontalLayout_19->addWidget(groupBoxJOG);

        groupBoxRobotControl = new QGroupBox(tab);
        groupBoxRobotControl->setObjectName(QString::fromUtf8("groupBoxRobotControl"));
        groupBoxRobotControl->setEnabled(true);
        groupBoxRobotControl->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        verticalLayout_2 = new QVBoxLayout(groupBoxRobotControl);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        pushButtonServo = new QPushButton(groupBoxRobotControl);
        pushButtonServo->setObjectName(QString::fromUtf8("pushButtonServo"));
        pushButtonServo->setEnabled(false);

        verticalLayout_2->addWidget(pushButtonServo);

        labelStatusServo = new QLabel(groupBoxRobotControl);
        labelStatusServo->setObjectName(QString::fromUtf8("labelStatusServo"));
        labelStatusServo->setEnabled(false);
        labelStatusServo->setStyleSheet(QString::fromUtf8(""));
        labelStatusServo->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(labelStatusServo);

        pushButtonHoming = new QPushButton(groupBoxRobotControl);
        pushButtonHoming->setObjectName(QString::fromUtf8("pushButtonHoming"));

        verticalLayout_2->addWidget(pushButtonHoming);

        label_5 = new QLabel(groupBoxRobotControl);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_14 = new QLabel(groupBoxRobotControl);
        label_14->setObjectName(QString::fromUtf8("label_14"));

        verticalLayout_2->addWidget(label_14);

        groupBox_5 = new QGroupBox(groupBoxRobotControl);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        verticalLayout_12 = new QVBoxLayout(groupBox_5);
        verticalLayout_12->setObjectName(QString::fromUtf8("verticalLayout_12"));
        comboBox = new QComboBox(groupBox_5);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout_12->addWidget(comboBox);

        comboBoxCoordinate = new QComboBox(groupBox_5);
        comboBoxCoordinate->setObjectName(QString::fromUtf8("comboBoxCoordinate"));

        verticalLayout_12->addWidget(comboBoxCoordinate);

        checkBoxTrajectory = new QCheckBox(groupBox_5);
        checkBoxTrajectory->setObjectName(QString::fromUtf8("checkBoxTrajectory"));

        verticalLayout_12->addWidget(checkBoxTrajectory);

        radioButtonInteractiveMarker = new QRadioButton(groupBox_5);
        radioButtonInteractiveMarker->setObjectName(QString::fromUtf8("radioButtonInteractiveMarker"));

        verticalLayout_12->addWidget(radioButtonInteractiveMarker);


        verticalLayout_2->addWidget(groupBox_5);


        horizontalLayout_19->addWidget(groupBoxRobotControl);

        groupBox_2 = new QGroupBox(tab);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(1);
        sizePolicy1.setHeightForWidth(groupBox_2->sizePolicy().hasHeightForWidth());
        groupBox_2->setSizePolicy(sizePolicy1);
        groupBox_2->setMinimumSize(QSize(0, 0));
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
        verticalLayout_5 = new QVBoxLayout(groupBox_2);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label_4 = new QLabel(groupBox_2);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_7->addWidget(label_4);

        lineEditS = new QLineEdit(groupBox_2);
        lineEditS->setObjectName(QString::fromUtf8("lineEditS"));
        QSizePolicy sizePolicy2(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(lineEditS->sizePolicy().hasHeightForWidth());
        lineEditS->setSizePolicy(sizePolicy2);
        lineEditS->setAlignment(Qt::AlignCenter);
        lineEditS->setReadOnly(true);

        horizontalLayout_7->addWidget(lineEditS);


        verticalLayout_5->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_8->addWidget(label_7);

        lineEditL = new QLineEdit(groupBox_2);
        lineEditL->setObjectName(QString::fromUtf8("lineEditL"));
        sizePolicy2.setHeightForWidth(lineEditL->sizePolicy().hasHeightForWidth());
        lineEditL->setSizePolicy(sizePolicy2);
        lineEditL->setAlignment(Qt::AlignCenter);
        lineEditL->setReadOnly(true);

        horizontalLayout_8->addWidget(lineEditL);


        verticalLayout_5->addLayout(horizontalLayout_8);

        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setObjectName(QString::fromUtf8("horizontalLayout_9"));
        label_10 = new QLabel(groupBox_2);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        horizontalLayout_9->addWidget(label_10);

        lineEditU = new QLineEdit(groupBox_2);
        lineEditU->setObjectName(QString::fromUtf8("lineEditU"));
        sizePolicy2.setHeightForWidth(lineEditU->sizePolicy().hasHeightForWidth());
        lineEditU->setSizePolicy(sizePolicy2);
        lineEditU->setAlignment(Qt::AlignCenter);
        lineEditU->setReadOnly(true);

        horizontalLayout_9->addWidget(lineEditU);


        verticalLayout_5->addLayout(horizontalLayout_9);

        horizontalLayout_10 = new QHBoxLayout();
        horizontalLayout_10->setObjectName(QString::fromUtf8("horizontalLayout_10"));
        label_13 = new QLabel(groupBox_2);
        label_13->setObjectName(QString::fromUtf8("label_13"));

        horizontalLayout_10->addWidget(label_13);

        lineEditR = new QLineEdit(groupBox_2);
        lineEditR->setObjectName(QString::fromUtf8("lineEditR"));
        sizePolicy2.setHeightForWidth(lineEditR->sizePolicy().hasHeightForWidth());
        lineEditR->setSizePolicy(sizePolicy2);
        lineEditR->setAlignment(Qt::AlignCenter);
        lineEditR->setReadOnly(true);

        horizontalLayout_10->addWidget(lineEditR);


        verticalLayout_5->addLayout(horizontalLayout_10);

        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setObjectName(QString::fromUtf8("horizontalLayout_11"));
        label_16 = new QLabel(groupBox_2);
        label_16->setObjectName(QString::fromUtf8("label_16"));

        horizontalLayout_11->addWidget(label_16);

        lineEditB = new QLineEdit(groupBox_2);
        lineEditB->setObjectName(QString::fromUtf8("lineEditB"));
        sizePolicy2.setHeightForWidth(lineEditB->sizePolicy().hasHeightForWidth());
        lineEditB->setSizePolicy(sizePolicy2);
        lineEditB->setAlignment(Qt::AlignCenter);
        lineEditB->setReadOnly(true);

        horizontalLayout_11->addWidget(lineEditB);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setObjectName(QString::fromUtf8("horizontalLayout_12"));
        label_19 = new QLabel(groupBox_2);
        label_19->setObjectName(QString::fromUtf8("label_19"));

        horizontalLayout_12->addWidget(label_19);

        lineEditT = new QLineEdit(groupBox_2);
        lineEditT->setObjectName(QString::fromUtf8("lineEditT"));
        sizePolicy2.setHeightForWidth(lineEditT->sizePolicy().hasHeightForWidth());
        lineEditT->setSizePolicy(sizePolicy2);
        lineEditT->setAlignment(Qt::AlignCenter);
        lineEditT->setReadOnly(true);

        horizontalLayout_12->addWidget(lineEditT);


        verticalLayout_5->addLayout(horizontalLayout_12);


        horizontalLayout_19->addWidget(groupBox_2);

        groupBox_3 = new QGroupBox(tab);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy3(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy3);
        groupBox_3->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        verticalLayout_7 = new QVBoxLayout(groupBox_3);
        verticalLayout_7->setObjectName(QString::fromUtf8("verticalLayout_7"));
        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setObjectName(QString::fromUtf8("horizontalLayout_13"));
        label_22 = new QLabel(groupBox_3);
        label_22->setObjectName(QString::fromUtf8("label_22"));

        horizontalLayout_13->addWidget(label_22);

        lineEditX = new QLineEdit(groupBox_3);
        lineEditX->setObjectName(QString::fromUtf8("lineEditX"));
        sizePolicy2.setHeightForWidth(lineEditX->sizePolicy().hasHeightForWidth());
        lineEditX->setSizePolicy(sizePolicy2);
        lineEditX->setAlignment(Qt::AlignCenter);
        lineEditX->setReadOnly(true);

        horizontalLayout_13->addWidget(lineEditX);


        verticalLayout_7->addLayout(horizontalLayout_13);

        horizontalLayout_14 = new QHBoxLayout();
        horizontalLayout_14->setObjectName(QString::fromUtf8("horizontalLayout_14"));
        label_25 = new QLabel(groupBox_3);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        horizontalLayout_14->addWidget(label_25);

        lineEditY = new QLineEdit(groupBox_3);
        lineEditY->setObjectName(QString::fromUtf8("lineEditY"));
        sizePolicy.setHeightForWidth(lineEditY->sizePolicy().hasHeightForWidth());
        lineEditY->setSizePolicy(sizePolicy);
        lineEditY->setAlignment(Qt::AlignCenter);
        lineEditY->setReadOnly(true);

        horizontalLayout_14->addWidget(lineEditY);


        verticalLayout_7->addLayout(horizontalLayout_14);

        horizontalLayout_15 = new QHBoxLayout();
        horizontalLayout_15->setObjectName(QString::fromUtf8("horizontalLayout_15"));
        label_28 = new QLabel(groupBox_3);
        label_28->setObjectName(QString::fromUtf8("label_28"));

        horizontalLayout_15->addWidget(label_28);

        lineEditZ = new QLineEdit(groupBox_3);
        lineEditZ->setObjectName(QString::fromUtf8("lineEditZ"));
        sizePolicy.setHeightForWidth(lineEditZ->sizePolicy().hasHeightForWidth());
        lineEditZ->setSizePolicy(sizePolicy);
        lineEditZ->setAlignment(Qt::AlignCenter);
        lineEditZ->setReadOnly(true);

        horizontalLayout_15->addWidget(lineEditZ);


        verticalLayout_7->addLayout(horizontalLayout_15);

        horizontalLayout_16 = new QHBoxLayout();
        horizontalLayout_16->setObjectName(QString::fromUtf8("horizontalLayout_16"));
        label_31 = new QLabel(groupBox_3);
        label_31->setObjectName(QString::fromUtf8("label_31"));

        horizontalLayout_16->addWidget(label_31);

        lineEditRX = new QLineEdit(groupBox_3);
        lineEditRX->setObjectName(QString::fromUtf8("lineEditRX"));
        sizePolicy.setHeightForWidth(lineEditRX->sizePolicy().hasHeightForWidth());
        lineEditRX->setSizePolicy(sizePolicy);
        lineEditRX->setAlignment(Qt::AlignCenter);
        lineEditRX->setReadOnly(true);

        horizontalLayout_16->addWidget(lineEditRX);


        verticalLayout_7->addLayout(horizontalLayout_16);

        horizontalLayout_17 = new QHBoxLayout();
        horizontalLayout_17->setObjectName(QString::fromUtf8("horizontalLayout_17"));
        label_34 = new QLabel(groupBox_3);
        label_34->setObjectName(QString::fromUtf8("label_34"));

        horizontalLayout_17->addWidget(label_34);

        lineEditRY = new QLineEdit(groupBox_3);
        lineEditRY->setObjectName(QString::fromUtf8("lineEditRY"));
        sizePolicy.setHeightForWidth(lineEditRY->sizePolicy().hasHeightForWidth());
        lineEditRY->setSizePolicy(sizePolicy);
        lineEditRY->setAlignment(Qt::AlignCenter);
        lineEditRY->setReadOnly(true);

        horizontalLayout_17->addWidget(lineEditRY);


        verticalLayout_7->addLayout(horizontalLayout_17);

        horizontalLayout_18 = new QHBoxLayout();
        horizontalLayout_18->setObjectName(QString::fromUtf8("horizontalLayout_18"));
        label_37 = new QLabel(groupBox_3);
        label_37->setObjectName(QString::fromUtf8("label_37"));

        horizontalLayout_18->addWidget(label_37);

        lineEditRZ = new QLineEdit(groupBox_3);
        lineEditRZ->setObjectName(QString::fromUtf8("lineEditRZ"));
        sizePolicy.setHeightForWidth(lineEditRZ->sizePolicy().hasHeightForWidth());
        lineEditRZ->setSizePolicy(sizePolicy);
        lineEditRZ->setAlignment(Qt::AlignCenter);
        lineEditRZ->setReadOnly(true);

        horizontalLayout_18->addWidget(lineEditRZ);


        verticalLayout_7->addLayout(horizontalLayout_18);

        pushButtonCalculateFK = new QPushButton(groupBox_3);
        pushButtonCalculateFK->setObjectName(QString::fromUtf8("pushButtonCalculateFK"));

        verticalLayout_7->addWidget(pushButtonCalculateFK);


        horizontalLayout_19->addWidget(groupBox_3);


        verticalLayout->addLayout(horizontalLayout_19);

        horizontalLayout_32 = new QHBoxLayout();
        horizontalLayout_32->setObjectName(QString::fromUtf8("horizontalLayout_32"));
        groupBoxTeachingPoint = new QGroupBox(tab);
        groupBoxTeachingPoint->setObjectName(QString::fromUtf8("groupBoxTeachingPoint"));
        groupBoxTeachingPoint->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        verticalLayout_10 = new QVBoxLayout(groupBoxTeachingPoint);
        verticalLayout_10->setObjectName(QString::fromUtf8("verticalLayout_10"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setObjectName(QString::fromUtf8("horizontalLayout_24"));
        listWidgetPoints = new QListWidget(groupBoxTeachingPoint);
        listWidgetPoints->setObjectName(QString::fromUtf8("listWidgetPoints"));

        horizontalLayout_24->addWidget(listWidgetPoints);

        verticalLayout_9 = new QVBoxLayout();
        verticalLayout_9->setObjectName(QString::fromUtf8("verticalLayout_9"));
        pushButtonAddPoint = new QPushButton(groupBoxTeachingPoint);
        pushButtonAddPoint->setObjectName(QString::fromUtf8("pushButtonAddPoint"));

        verticalLayout_9->addWidget(pushButtonAddPoint);

        pushButtonRemovePoint = new QPushButton(groupBoxTeachingPoint);
        pushButtonRemovePoint->setObjectName(QString::fromUtf8("pushButtonRemovePoint"));

        verticalLayout_9->addWidget(pushButtonRemovePoint);

        pushButtonCheck = new QPushButton(groupBoxTeachingPoint);
        pushButtonCheck->setObjectName(QString::fromUtf8("pushButtonCheck"));

        verticalLayout_9->addWidget(pushButtonCheck);


        horizontalLayout_24->addLayout(verticalLayout_9);


        verticalLayout_10->addLayout(horizontalLayout_24);

        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setObjectName(QString::fromUtf8("horizontalLayout_25"));
        pushButtonGeneratePath = new QPushButton(groupBoxTeachingPoint);
        pushButtonGeneratePath->setObjectName(QString::fromUtf8("pushButtonGeneratePath"));

        horizontalLayout_25->addWidget(pushButtonGeneratePath);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_2);


        verticalLayout_10->addLayout(horizontalLayout_25);


        horizontalLayout_32->addWidget(groupBoxTeachingPoint);

        groupBoxTeachingStep = new QGroupBox(tab);
        groupBoxTeachingStep->setObjectName(QString::fromUtf8("groupBoxTeachingStep"));
        groupBoxTeachingStep->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        verticalLayout_8 = new QVBoxLayout(groupBoxTeachingStep);
        verticalLayout_8->setObjectName(QString::fromUtf8("verticalLayout_8"));
        textEditJOB = new QTextEdit(groupBoxTeachingStep);
        textEditJOB->setObjectName(QString::fromUtf8("textEditJOB"));

        verticalLayout_8->addWidget(textEditJOB);

        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setObjectName(QString::fromUtf8("horizontalLayout_27"));
        pushButtonSendJOB = new QPushButton(groupBoxTeachingStep);
        pushButtonSendJOB->setObjectName(QString::fromUtf8("pushButtonSendJOB"));
        pushButtonSendJOB->setEnabled(false);

        horizontalLayout_27->addWidget(pushButtonSendJOB);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_4);

        pushButtonStartMasterJOB = new QPushButton(groupBoxTeachingStep);
        pushButtonStartMasterJOB->setObjectName(QString::fromUtf8("pushButtonStartMasterJOB"));
        pushButtonStartMasterJOB->setEnabled(false);

        horizontalLayout_27->addWidget(pushButtonStartMasterJOB);


        verticalLayout_8->addLayout(horizontalLayout_27);

        horizontalLayout_23 = new QHBoxLayout();
        horizontalLayout_23->setObjectName(QString::fromUtf8("horizontalLayout_23"));
        horizontalLayout_21 = new QHBoxLayout();
        horizontalLayout_21->setObjectName(QString::fromUtf8("horizontalLayout_21"));
        pushButtonGetJobFile = new QPushButton(groupBoxTeachingStep);
        pushButtonGetJobFile->setObjectName(QString::fromUtf8("pushButtonGetJobFile"));
        pushButtonGetJobFile->setEnabled(false);

        horizontalLayout_21->addWidget(pushButtonGetJobFile);

        label_18 = new QLabel(groupBoxTeachingStep);
        label_18->setObjectName(QString::fromUtf8("label_18"));

        horizontalLayout_21->addWidget(label_18);

        lineEditName = new QLineEdit(groupBoxTeachingStep);
        lineEditName->setObjectName(QString::fromUtf8("lineEditName"));

        horizontalLayout_21->addWidget(lineEditName);


        horizontalLayout_23->addLayout(horizontalLayout_21);

        pushButtonOpenJOB = new QPushButton(groupBoxTeachingStep);
        pushButtonOpenJOB->setObjectName(QString::fromUtf8("pushButtonOpenJOB"));

        horizontalLayout_23->addWidget(pushButtonOpenJOB);


        verticalLayout_8->addLayout(horizontalLayout_23);

        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setObjectName(QString::fromUtf8("horizontalLayout_26"));
        label_6 = new QLabel(groupBoxTeachingStep);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_26->addWidget(label_6);

        lineEditPath = new QLineEdit(groupBoxTeachingStep);
        lineEditPath->setObjectName(QString::fromUtf8("lineEditPath"));

        horizontalLayout_26->addWidget(lineEditPath);


        verticalLayout_8->addLayout(horizontalLayout_26);


        horizontalLayout_32->addWidget(groupBoxTeachingStep);


        verticalLayout->addLayout(horizontalLayout_32);

        tabWidget->addTab(tab, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        verticalLayout_22 = new QVBoxLayout(tab_3);
        verticalLayout_22->setObjectName(QString::fromUtf8("verticalLayout_22"));
        groupBox_7 = new QGroupBox(tab_3);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        groupBox_7->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        horizontalLayout = new QHBoxLayout(groupBox_7);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        CameraOn_Button = new QPushButton(groupBox_7);
        CameraOn_Button->setObjectName(QString::fromUtf8("CameraOn_Button"));

        horizontalLayout->addWidget(CameraOn_Button);

        CameraOff_Button = new QPushButton(groupBox_7);
        CameraOff_Button->setObjectName(QString::fromUtf8("CameraOff_Button"));

        horizontalLayout->addWidget(CameraOff_Button);

        StreamOption_comboBox = new QComboBox(groupBox_7);
        StreamOption_comboBox->setObjectName(QString::fromUtf8("StreamOption_comboBox"));

        horizontalLayout->addWidget(StreamOption_comboBox);

        Background_Button = new QPushButton(groupBox_7);
        Background_Button->setObjectName(QString::fromUtf8("Background_Button"));

        horizontalLayout->addWidget(Background_Button);

        Mask_Button = new QPushButton(groupBox_7);
        Mask_Button->setObjectName(QString::fromUtf8("Mask_Button"));

        horizontalLayout->addWidget(Mask_Button);

        ChooseObject_Button = new QPushButton(groupBox_7);
        ChooseObject_Button->setObjectName(QString::fromUtf8("ChooseObject_Button"));

        horizontalLayout->addWidget(ChooseObject_Button);

        Size_Button = new QPushButton(groupBox_7);
        Size_Button->setObjectName(QString::fromUtf8("Size_Button"));

        horizontalLayout->addWidget(Size_Button);


        verticalLayout_22->addWidget(groupBox_7);

        horizontalLayout_22 = new QHBoxLayout();
        horizontalLayout_22->setObjectName(QString::fromUtf8("horizontalLayout_22"));
        CameraFrame = new QLabel(tab_3);
        CameraFrame->setObjectName(QString::fromUtf8("CameraFrame"));
        CameraFrame->setMinimumSize(QSize(640, 480));
        CameraFrame->setStyleSheet(QString::fromUtf8(""));
        CameraFrame->setFrameShape(QFrame::Box);
        CameraFrame->setLineWidth(1);
        CameraFrame->setMidLineWidth(0);

        horizontalLayout_22->addWidget(CameraFrame);

        verticalLayout_11 = new QVBoxLayout();
        verticalLayout_11->setObjectName(QString::fromUtf8("verticalLayout_11"));
        groupBox_6 = new QGroupBox(tab_3);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        groupBox_6->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        verticalLayout_4 = new QVBoxLayout(groupBox_6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        horizontalLayout_39 = new QHBoxLayout();
        horizontalLayout_39->setObjectName(QString::fromUtf8("horizontalLayout_39"));
        label_17 = new QLabel(groupBox_6);
        label_17->setObjectName(QString::fromUtf8("label_17"));

        horizontalLayout_39->addWidget(label_17);

        spinBoxStartY = new QSpinBox(groupBox_6);
        spinBoxStartY->setObjectName(QString::fromUtf8("spinBoxStartY"));
        spinBoxStartY->setMinimum(-200000);
        spinBoxStartY->setMaximum(200000);
        spinBoxStartY->setValue(-140000);

        horizontalLayout_39->addWidget(spinBoxStartY);

        label_20 = new QLabel(groupBox_6);
        label_20->setObjectName(QString::fromUtf8("label_20"));

        horizontalLayout_39->addWidget(label_20);


        verticalLayout_4->addLayout(horizontalLayout_39);

        horizontalLayout_40 = new QHBoxLayout();
        horizontalLayout_40->setObjectName(QString::fromUtf8("horizontalLayout_40"));
        label_21 = new QLabel(groupBox_6);
        label_21->setObjectName(QString::fromUtf8("label_21"));

        horizontalLayout_40->addWidget(label_21);

        spinBoxStopY = new QSpinBox(groupBox_6);
        spinBoxStopY->setObjectName(QString::fromUtf8("spinBoxStopY"));
        spinBoxStopY->setMinimum(-200000);
        spinBoxStopY->setMaximum(200000);
        spinBoxStopY->setValue(80000);

        horizontalLayout_40->addWidget(spinBoxStopY);

        label_24 = new QLabel(groupBox_6);
        label_24->setObjectName(QString::fromUtf8("label_24"));

        horizontalLayout_40->addWidget(label_24);


        verticalLayout_4->addLayout(horizontalLayout_40);

        horizontalLayout_42 = new QHBoxLayout();
        horizontalLayout_42->setObjectName(QString::fromUtf8("horizontalLayout_42"));
        label_27 = new QLabel(groupBox_6);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        horizontalLayout_42->addWidget(label_27);

        spinBoxDelayDy = new QSpinBox(groupBox_6);
        spinBoxDelayDy->setObjectName(QString::fromUtf8("spinBoxDelayDy"));
        spinBoxDelayDy->setMinimum(1000);
        spinBoxDelayDy->setMaximum(100000);
        spinBoxDelayDy->setValue(25000);

        horizontalLayout_42->addWidget(spinBoxDelayDy);

        label_30 = new QLabel(groupBox_6);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        horizontalLayout_42->addWidget(label_30);


        verticalLayout_4->addLayout(horizontalLayout_42);

        horizontalLayout_43 = new QHBoxLayout();
        horizontalLayout_43->setObjectName(QString::fromUtf8("horizontalLayout_43"));
        label_29 = new QLabel(groupBox_6);
        label_29->setObjectName(QString::fromUtf8("label_29"));

        horizontalLayout_43->addWidget(label_29);

        spinBoxPickingDistance = new QSpinBox(groupBox_6);
        spinBoxPickingDistance->setObjectName(QString::fromUtf8("spinBoxPickingDistance"));
        spinBoxPickingDistance->setMinimum(0);
        spinBoxPickingDistance->setMaximum(30000);
        spinBoxPickingDistance->setValue(8000);

        horizontalLayout_43->addWidget(spinBoxPickingDistance);

        label_32 = new QLabel(groupBox_6);
        label_32->setObjectName(QString::fromUtf8("label_32"));

        horizontalLayout_43->addWidget(label_32);


        verticalLayout_4->addLayout(horizontalLayout_43);

        horizontalLayout_38 = new QHBoxLayout();
        horizontalLayout_38->setObjectName(QString::fromUtf8("horizontalLayout_38"));
        label_11 = new QLabel(groupBox_6);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_38->addWidget(label_11);

        spinBoxEncoderPickingHeight = new QSpinBox(groupBox_6);
        spinBoxEncoderPickingHeight->setObjectName(QString::fromUtf8("spinBoxEncoderPickingHeight"));
        spinBoxEncoderPickingHeight->setMinimum(0);
        spinBoxEncoderPickingHeight->setMaximum(100000);
        spinBoxEncoderPickingHeight->setValue(7500);

        horizontalLayout_38->addWidget(spinBoxEncoderPickingHeight);

        label_15 = new QLabel(groupBox_6);
        label_15->setObjectName(QString::fromUtf8("label_15"));

        horizontalLayout_38->addWidget(label_15);


        verticalLayout_4->addLayout(horizontalLayout_38);


        verticalLayout_11->addWidget(groupBox_6);

        groupBox = new QGroupBox(tab_3);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        verticalLayout_15 = new QVBoxLayout(groupBox);
        verticalLayout_15->setObjectName(QString::fromUtf8("verticalLayout_15"));
        pushButtonConnectSerial = new QPushButton(groupBox);
        pushButtonConnectSerial->setObjectName(QString::fromUtf8("pushButtonConnectSerial"));

        verticalLayout_15->addWidget(pushButtonConnectSerial);

        labelSerialStatus = new QLabel(groupBox);
        labelSerialStatus->setObjectName(QString::fromUtf8("labelSerialStatus"));
        labelSerialStatus->setStyleSheet(QString::fromUtf8(""));
        labelSerialStatus->setAlignment(Qt::AlignCenter);

        verticalLayout_15->addWidget(labelSerialStatus);

        horizontalLayout_36 = new QHBoxLayout();
        horizontalLayout_36->setObjectName(QString::fromUtf8("horizontalLayout_36"));
        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_36->addWidget(label_8);

        spinBoxEncoderType = new QSpinBox(groupBox);
        spinBoxEncoderType->setObjectName(QString::fromUtf8("spinBoxEncoderType"));
        spinBoxEncoderType->setMinimum(100);
        spinBoxEncoderType->setMaximum(2000);
        spinBoxEncoderType->setValue(400);

        horizontalLayout_36->addWidget(spinBoxEncoderType);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_36->addWidget(label_9);


        verticalLayout_15->addLayout(horizontalLayout_36);

        horizontalLayout_37 = new QHBoxLayout();
        horizontalLayout_37->setObjectName(QString::fromUtf8("horizontalLayout_37"));
        label_12 = new QLabel(groupBox);
        label_12->setObjectName(QString::fromUtf8("label_12"));

        horizontalLayout_37->addWidget(label_12);

        doubleSpinBoxRatio = new QDoubleSpinBox(groupBox);
        doubleSpinBoxRatio->setObjectName(QString::fromUtf8("doubleSpinBoxRatio"));
        doubleSpinBoxRatio->setDecimals(1);
        doubleSpinBoxRatio->setMinimum(10);
        doubleSpinBoxRatio->setMaximum(100000);
        doubleSpinBoxRatio->setSingleStep(0.01);
        doubleSpinBoxRatio->setValue(100);

        horizontalLayout_37->addWidget(doubleSpinBoxRatio);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_37->addWidget(label_3);


        verticalLayout_15->addLayout(horizontalLayout_37);

        horizontalLayout_44 = new QHBoxLayout();
        horizontalLayout_44->setObjectName(QString::fromUtf8("horizontalLayout_44"));
        label_23 = new QLabel(groupBox);
        label_23->setObjectName(QString::fromUtf8("label_23"));

        horizontalLayout_44->addWidget(label_23);

        lineEditSpeed = new QLineEdit(groupBox);
        lineEditSpeed->setObjectName(QString::fromUtf8("lineEditSpeed"));

        horizontalLayout_44->addWidget(lineEditSpeed);

        label_26 = new QLabel(groupBox);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        horizontalLayout_44->addWidget(label_26);


        verticalLayout_15->addLayout(horizontalLayout_44);


        verticalLayout_11->addWidget(groupBox);


        horizontalLayout_22->addLayout(verticalLayout_11);


        verticalLayout_22->addLayout(horizontalLayout_22);

        verticalLayout_21 = new QVBoxLayout();
        verticalLayout_21->setObjectName(QString::fromUtf8("verticalLayout_21"));
        horizontalLayout_34 = new QHBoxLayout();
        horizontalLayout_34->setObjectName(QString::fromUtf8("horizontalLayout_34"));
        groupBoxConveyer = new QGroupBox(tab_3);
        groupBoxConveyer->setObjectName(QString::fromUtf8("groupBoxConveyer"));
        groupBoxConveyer->setEnabled(false);
        groupBoxConveyer->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        horizontalLayout_31 = new QHBoxLayout(groupBoxConveyer);
        horizontalLayout_31->setObjectName(QString::fromUtf8("horizontalLayout_31"));
        pushButtonStartConveyer = new QPushButton(groupBoxConveyer);
        pushButtonStartConveyer->setObjectName(QString::fromUtf8("pushButtonStartConveyer"));

        horizontalLayout_31->addWidget(pushButtonStartConveyer);

        labelStatusConveyer = new QLabel(groupBoxConveyer);
        labelStatusConveyer->setObjectName(QString::fromUtf8("labelStatusConveyer"));
        labelStatusConveyer->setAlignment(Qt::AlignCenter);

        horizontalLayout_31->addWidget(labelStatusConveyer);


        horizontalLayout_34->addWidget(groupBoxConveyer);

        groupBoxServo = new QGroupBox(tab_3);
        groupBoxServo->setObjectName(QString::fromUtf8("groupBoxServo"));
        groupBoxServo->setEnabled(false);
        groupBoxServo->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        horizontalLayout_29 = new QHBoxLayout(groupBoxServo);
        horizontalLayout_29->setObjectName(QString::fromUtf8("horizontalLayout_29"));
        pushButtonServoHoming = new QPushButton(groupBoxServo);
        pushButtonServoHoming->setObjectName(QString::fromUtf8("pushButtonServoHoming"));

        horizontalLayout_29->addWidget(pushButtonServoHoming);

        pushButtonStartProgram = new QPushButton(groupBoxServo);
        pushButtonStartProgram->setObjectName(QString::fromUtf8("pushButtonStartProgram"));

        horizontalLayout_29->addWidget(pushButtonStartProgram);

        pushButtonStopProgram = new QPushButton(groupBoxServo);
        pushButtonStopProgram->setObjectName(QString::fromUtf8("pushButtonStopProgram"));

        horizontalLayout_29->addWidget(pushButtonStopProgram);


        horizontalLayout_34->addWidget(groupBoxServo);


        verticalLayout_21->addLayout(horizontalLayout_34);

        groupBox_4 = new QGroupBox(tab_3);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        sizePolicy3.setHeightForWidth(groupBox_4->sizePolicy().hasHeightForWidth());
        groupBox_4->setSizePolicy(sizePolicy3);
        groupBox_4->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
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
        verticalLayout_13 = new QVBoxLayout(groupBox_4);
        verticalLayout_13->setObjectName(QString::fromUtf8("verticalLayout_13"));
        horizontalLayout_20 = new QHBoxLayout();
        horizontalLayout_20->setObjectName(QString::fromUtf8("horizontalLayout_20"));
        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setObjectName(QString::fromUtf8("verticalLayout_14"));
        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        horizontalLayout_35 = new QHBoxLayout();
        horizontalLayout_35->setObjectName(QString::fromUtf8("horizontalLayout_35"));
        label_33 = new QLabel(groupBox_4);
        label_33->setObjectName(QString::fromUtf8("label_33"));

        horizontalLayout_35->addWidget(label_33);

        lineEditX_3 = new QLineEdit(groupBox_4);
        lineEditX_3->setObjectName(QString::fromUtf8("lineEditX_3"));
        lineEditX_3->setAlignment(Qt::AlignCenter);
        lineEditX_3->setReadOnly(true);

        horizontalLayout_35->addWidget(lineEditX_3);


        horizontalLayout_6->addLayout(horizontalLayout_35);

        horizontalLayout_47 = new QHBoxLayout();
        horizontalLayout_47->setObjectName(QString::fromUtf8("horizontalLayout_47"));
        label_36 = new QLabel(groupBox_4);
        label_36->setObjectName(QString::fromUtf8("label_36"));

        horizontalLayout_47->addWidget(label_36);

        lineEditY_3 = new QLineEdit(groupBox_4);
        lineEditY_3->setObjectName(QString::fromUtf8("lineEditY_3"));
        lineEditY_3->setAlignment(Qt::AlignCenter);
        lineEditY_3->setReadOnly(true);

        horizontalLayout_47->addWidget(lineEditY_3);


        horizontalLayout_6->addLayout(horizontalLayout_47);

        horizontalLayout_49 = new QHBoxLayout();
        horizontalLayout_49->setObjectName(QString::fromUtf8("horizontalLayout_49"));
        label_39 = new QLabel(groupBox_4);
        label_39->setObjectName(QString::fromUtf8("label_39"));

        horizontalLayout_49->addWidget(label_39);

        lineEditZ_3 = new QLineEdit(groupBox_4);
        lineEditZ_3->setObjectName(QString::fromUtf8("lineEditZ_3"));
        lineEditZ_3->setAlignment(Qt::AlignCenter);
        lineEditZ_3->setReadOnly(true);

        horizontalLayout_49->addWidget(lineEditZ_3);


        horizontalLayout_6->addLayout(horizontalLayout_49);


        verticalLayout_14->addLayout(horizontalLayout_6);

        splitter_8 = new QSplitter(groupBox_4);
        splitter_8->setObjectName(QString::fromUtf8("splitter_8"));
        splitter_8->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter_8);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        horizontalLayout_51 = new QHBoxLayout(layoutWidget);
        horizontalLayout_51->setObjectName(QString::fromUtf8("horizontalLayout_51"));
        horizontalLayout_51->setContentsMargins(0, 0, 0, 0);
        label_40 = new QLabel(layoutWidget);
        label_40->setObjectName(QString::fromUtf8("label_40"));

        horizontalLayout_51->addWidget(label_40);

        lineEditRX_3 = new QLineEdit(layoutWidget);
        lineEditRX_3->setObjectName(QString::fromUtf8("lineEditRX_3"));
        lineEditRX_3->setAlignment(Qt::AlignCenter);
        lineEditRX_3->setReadOnly(true);

        horizontalLayout_51->addWidget(lineEditRX_3);

        splitter_8->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter_8);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        horizontalLayout_53 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_53->setObjectName(QString::fromUtf8("horizontalLayout_53"));
        horizontalLayout_53->setContentsMargins(0, 0, 0, 0);
        label_42 = new QLabel(layoutWidget1);
        label_42->setObjectName(QString::fromUtf8("label_42"));

        horizontalLayout_53->addWidget(label_42);

        lineEditRZ_3 = new QLineEdit(layoutWidget1);
        lineEditRZ_3->setObjectName(QString::fromUtf8("lineEditRZ_3"));
        lineEditRZ_3->setAlignment(Qt::AlignCenter);
        lineEditRZ_3->setReadOnly(true);

        horizontalLayout_53->addWidget(lineEditRZ_3);

        splitter_8->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(splitter_8);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        horizontalLayout_52 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_52->setObjectName(QString::fromUtf8("horizontalLayout_52"));
        horizontalLayout_52->setContentsMargins(0, 0, 0, 0);
        label_41 = new QLabel(layoutWidget2);
        label_41->setObjectName(QString::fromUtf8("label_41"));

        horizontalLayout_52->addWidget(label_41);

        lineEditRY_3 = new QLineEdit(layoutWidget2);
        lineEditRY_3->setObjectName(QString::fromUtf8("lineEditRY_3"));
        lineEditRY_3->setAlignment(Qt::AlignCenter);
        lineEditRY_3->setReadOnly(true);

        horizontalLayout_52->addWidget(lineEditRY_3);

        splitter_8->addWidget(layoutWidget2);

        verticalLayout_14->addWidget(splitter_8);


        horizontalLayout_20->addLayout(verticalLayout_14);

        horizontalLayout_46 = new QHBoxLayout();
        horizontalLayout_46->setObjectName(QString::fromUtf8("horizontalLayout_46"));
        label_44 = new QLabel(groupBox_4);
        label_44->setObjectName(QString::fromUtf8("label_44"));

        horizontalLayout_46->addWidget(label_44);

        lineEditDistance = new QLineEdit(groupBox_4);
        lineEditDistance->setObjectName(QString::fromUtf8("lineEditDistance"));

        horizontalLayout_46->addWidget(lineEditDistance);

        label_45 = new QLabel(groupBox_4);
        label_45->setObjectName(QString::fromUtf8("label_45"));

        horizontalLayout_46->addWidget(label_45);


        horizontalLayout_20->addLayout(horizontalLayout_46);


        verticalLayout_13->addLayout(horizontalLayout_20);

        horizontalLayout_30 = new QHBoxLayout();
        horizontalLayout_30->setObjectName(QString::fromUtf8("horizontalLayout_30"));
        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_30->addItem(horizontalSpacer_3);

        label_43 = new QLabel(groupBox_4);
        label_43->setObjectName(QString::fromUtf8("label_43"));

        horizontalLayout_30->addWidget(label_43);

        spinBoxPVariableNO_2 = new QSpinBox(groupBox_4);
        spinBoxPVariableNO_2->setObjectName(QString::fromUtf8("spinBoxPVariableNO_2"));
        spinBoxPVariableNO_2->setMinimum(32);
        spinBoxPVariableNO_2->setMaximum(32);
        spinBoxPVariableNO_2->setValue(32);

        horizontalLayout_30->addWidget(spinBoxPVariableNO_2);

        label_49 = new QLabel(groupBox_4);
        label_49->setObjectName(QString::fromUtf8("label_49"));

        horizontalLayout_30->addWidget(label_49);

        spinBoxPVariableNO_4 = new QSpinBox(groupBox_4);
        spinBoxPVariableNO_4->setObjectName(QString::fromUtf8("spinBoxPVariableNO_4"));
        spinBoxPVariableNO_4->setMinimum(32);
        spinBoxPVariableNO_4->setMaximum(32);
        spinBoxPVariableNO_4->setValue(32);

        horizontalLayout_30->addWidget(spinBoxPVariableNO_4);

        label_50 = new QLabel(groupBox_4);
        label_50->setObjectName(QString::fromUtf8("label_50"));

        horizontalLayout_30->addWidget(label_50);

        spinBoxPVariableNO_5 = new QSpinBox(groupBox_4);
        spinBoxPVariableNO_5->setObjectName(QString::fromUtf8("spinBoxPVariableNO_5"));
        spinBoxPVariableNO_5->setMinimum(33);
        spinBoxPVariableNO_5->setMaximum(33);
        spinBoxPVariableNO_5->setValue(33);

        horizontalLayout_30->addWidget(spinBoxPVariableNO_5);

        horizontalSpacer_8 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_30->addItem(horizontalSpacer_8);


        verticalLayout_13->addLayout(horizontalLayout_30);


        verticalLayout_21->addWidget(groupBox_4);


        verticalLayout_22->addLayout(verticalLayout_21);

        tabWidget->addTab(tab_3, QString());

        verticalLayout_6->addWidget(tabWidget);

        MainWindowDesign->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindowDesign);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 955, 22));
        menu_File = new QMenu(menubar);
        menu_File->setObjectName(QString::fromUtf8("menu_File"));
        menuSetting = new QMenu(menubar);
        menuSetting->setObjectName(QString::fromUtf8("menuSetting"));
        menuDisplay_Option = new QMenu(menuSetting);
        menuDisplay_Option->setObjectName(QString::fromUtf8("menuDisplay_Option"));
        MainWindowDesign->setMenuBar(menubar);

        menubar->addAction(menu_File->menuAction());
        menubar->addAction(menuSetting->menuAction());
        menu_File->addAction(action_Preferences);
        menu_File->addSeparator();
        menu_File->addAction(actionAbout);
        menu_File->addAction(actionAbout_Qt);
        menu_File->addSeparator();
        menu_File->addAction(action_Quit);
        menuSetting->addAction(menuDisplay_Option->menuAction());
        menuDisplay_Option->addAction(actionEnable);
        menuDisplay_Option->addAction(actionDisable);

        retranslateUi(MainWindowDesign);
        QObject::connect(action_Quit, SIGNAL(triggered()), MainWindowDesign, SLOT(close()));

        tabWidget->setCurrentIndex(0);
        comboBox->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindowDesign);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindowDesign)
    {
        MainWindowDesign->setWindowTitle(QApplication::translate("MainWindowDesign", "MOTOROS UDP", 0, QApplication::UnicodeUTF8));
        action_Quit->setText(QApplication::translate("MainWindowDesign", "&Quit", 0, QApplication::UnicodeUTF8));
        action_Quit->setShortcut(QApplication::translate("MainWindowDesign", "Ctrl+Q", 0, QApplication::UnicodeUTF8));
        action_Preferences->setText(QApplication::translate("MainWindowDesign", "&Preferences", 0, QApplication::UnicodeUTF8));
        actionAbout->setText(QApplication::translate("MainWindowDesign", "&About", 0, QApplication::UnicodeUTF8));
        actionAbout_Qt->setText(QApplication::translate("MainWindowDesign", "About &Qt", 0, QApplication::UnicodeUTF8));
        actionEnable_Display_End_effecter_Position->setText(QApplication::translate("MainWindowDesign", "Enable Display End-effecter Position", 0, QApplication::UnicodeUTF8));
        actionEnable->setText(QApplication::translate("MainWindowDesign", "Enable", 0, QApplication::UnicodeUTF8));
        actionDisable->setText(QApplication::translate("MainWindowDesign", "Disable", 0, QApplication::UnicodeUTF8));
        groupBoxUDP->setTitle(QApplication::translate("MainWindowDesign", "CONNECTION", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("MainWindowDesign", "ROBOT IP:", 0, QApplication::UnicodeUTF8));
        lineEditrobotAddress->setText(QApplication::translate("MainWindowDesign", "192.168.1.15", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("MainWindowDesign", "PORT:", 0, QApplication::UnicodeUTF8));
        lineEditPortNumber->setText(QApplication::translate("MainWindowDesign", "10040", 0, QApplication::UnicodeUTF8));
        pushButtonConnect->setText(QApplication::translate("MainWindowDesign", "CONNECT", 0, QApplication::UnicodeUTF8));
        labelConnectStatus->setText(QApplication::translate("MainWindowDesign", "NOT CONNECTED YET!", 0, QApplication::UnicodeUTF8));
        groupBoxJOG->setTitle(QApplication::translate("MainWindowDesign", "ADJUST MANUAL", 0, QApplication::UnicodeUTF8));
        pushButtonSubb_1->setText(QApplication::translate("MainWindowDesign", "S-", 0, QApplication::UnicodeUTF8));
        pushButtonAdd_1->setText(QApplication::translate("MainWindowDesign", "S+", 0, QApplication::UnicodeUTF8));
        pushButtonSubb_2->setText(QApplication::translate("MainWindowDesign", "L-", 0, QApplication::UnicodeUTF8));
        pushButtonAdd_2->setText(QApplication::translate("MainWindowDesign", "L+", 0, QApplication::UnicodeUTF8));
        pushButtonSubb_3->setText(QApplication::translate("MainWindowDesign", "U-", 0, QApplication::UnicodeUTF8));
        pushButtonAdd_3->setText(QApplication::translate("MainWindowDesign", "U+", 0, QApplication::UnicodeUTF8));
        pushButtonSubb_4->setText(QApplication::translate("MainWindowDesign", "R-", 0, QApplication::UnicodeUTF8));
        pushButtonAdd_4->setText(QApplication::translate("MainWindowDesign", "R+", 0, QApplication::UnicodeUTF8));
        pushButtonSubb_5->setText(QApplication::translate("MainWindowDesign", "B-", 0, QApplication::UnicodeUTF8));
        pushButtonAdd_5->setText(QApplication::translate("MainWindowDesign", "B+", 0, QApplication::UnicodeUTF8));
        pushButtonSubb_6->setText(QApplication::translate("MainWindowDesign", "S-", 0, QApplication::UnicodeUTF8));
        pushButtonAdd_6->setText(QApplication::translate("MainWindowDesign", "S+", 0, QApplication::UnicodeUTF8));
        groupBoxRobotControl->setTitle(QApplication::translate("MainWindowDesign", "CONFIG", 0, QApplication::UnicodeUTF8));
        pushButtonServo->setText(QApplication::translate("MainWindowDesign", "SERVO ON", 0, QApplication::UnicodeUTF8));
        labelStatusServo->setText(QApplication::translate("MainWindowDesign", "Status: OFF", 0, QApplication::UnicodeUTF8));
        pushButtonHoming->setText(QApplication::translate("MainWindowDesign", "HOMING", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("MainWindowDesign", "ROBOT Status:", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("MainWindowDesign", "STOP", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindowDesign", "SETTING", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowDesign", "Small", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowDesign", "Medium", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowDesign", "Fast", 0, QApplication::UnicodeUTF8)
        );
        comboBoxCoordinate->clear();
        comboBoxCoordinate->insertItems(0, QStringList()
         << QApplication::translate("MainWindowDesign", "JOINTS", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowDesign", "CARTESIAN", 0, QApplication::UnicodeUTF8)
        );
        checkBoxTrajectory->setText(QApplication::translate("MainWindowDesign", "Trajectory", 0, QApplication::UnicodeUTF8));
        radioButtonInteractiveMarker->setText(QApplication::translate("MainWindowDesign", "Interaction", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindowDesign", "CURRENT JOINTS", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindowDesign", "S", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("MainWindowDesign", "L", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("MainWindowDesign", "U", 0, QApplication::UnicodeUTF8));
        label_13->setText(QApplication::translate("MainWindowDesign", "R", 0, QApplication::UnicodeUTF8));
        label_16->setText(QApplication::translate("MainWindowDesign", "B", 0, QApplication::UnicodeUTF8));
        label_19->setText(QApplication::translate("MainWindowDesign", "T", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindowDesign", "CURRENT POSITIONS", 0, QApplication::UnicodeUTF8));
        label_22->setText(QApplication::translate("MainWindowDesign", "X", 0, QApplication::UnicodeUTF8));
        label_25->setText(QApplication::translate("MainWindowDesign", "Y", 0, QApplication::UnicodeUTF8));
        label_28->setText(QApplication::translate("MainWindowDesign", "Z", 0, QApplication::UnicodeUTF8));
        label_31->setText(QApplication::translate("MainWindowDesign", "RX", 0, QApplication::UnicodeUTF8));
        label_34->setText(QApplication::translate("MainWindowDesign", "RY", 0, QApplication::UnicodeUTF8));
        label_37->setText(QApplication::translate("MainWindowDesign", "RZ", 0, QApplication::UnicodeUTF8));
        pushButtonCalculateFK->setText(QApplication::translate("MainWindowDesign", "Calculate FK", 0, QApplication::UnicodeUTF8));
        groupBoxTeachingPoint->setTitle(QApplication::translate("MainWindowDesign", "Teaching Points", 0, QApplication::UnicodeUTF8));
        pushButtonAddPoint->setText(QApplication::translate("MainWindowDesign", "ADD", 0, QApplication::UnicodeUTF8));
        pushButtonRemovePoint->setText(QApplication::translate("MainWindowDesign", "REMOVE", 0, QApplication::UnicodeUTF8));
        pushButtonCheck->setText(QApplication::translate("MainWindowDesign", "CHECK", 0, QApplication::UnicodeUTF8));
        pushButtonGeneratePath->setText(QApplication::translate("MainWindowDesign", "GERNERATE PATH", 0, QApplication::UnicodeUTF8));
        groupBoxTeachingStep->setTitle(QApplication::translate("MainWindowDesign", "JOB", 0, QApplication::UnicodeUTF8));
        pushButtonSendJOB->setText(QApplication::translate("MainWindowDesign", "SEND THIS JOB", 0, QApplication::UnicodeUTF8));
        pushButtonStartMasterJOB->setText(QApplication::translate("MainWindowDesign", "START JOB", 0, QApplication::UnicodeUTF8));
        pushButtonGetJobFile->setText(QApplication::translate("MainWindowDesign", "READ JOB FILE", 0, QApplication::UnicodeUTF8));
        label_18->setText(QApplication::translate("MainWindowDesign", "Name:", 0, QApplication::UnicodeUTF8));
        lineEditName->setText(QApplication::translate("MainWindowDesign", "NINH_DEMO4.JBI", 0, QApplication::UnicodeUTF8));
        pushButtonOpenJOB->setText(QApplication::translate("MainWindowDesign", "OPEN", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("MainWindowDesign", "Browse:", 0, QApplication::UnicodeUTF8));
        lineEditPath->setText(QApplication::translate("MainWindowDesign", "/home/haininh/my_catkin8/src/motorosudp/", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindowDesign", "Teaching - Monitoring", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("MainWindowDesign", "CAMERA", 0, QApplication::UnicodeUTF8));
        CameraOn_Button->setText(QApplication::translate("MainWindowDesign", "Camera On", 0, QApplication::UnicodeUTF8));
        CameraOff_Button->setText(QApplication::translate("MainWindowDesign", "Camera Off", 0, QApplication::UnicodeUTF8));
        StreamOption_comboBox->clear();
        StreamOption_comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindowDesign", "Color Stream", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindowDesign", "Depth Stream", 0, QApplication::UnicodeUTF8)
        );
        Background_Button->setText(QApplication::translate("MainWindowDesign", "Background", 0, QApplication::UnicodeUTF8));
        Mask_Button->setText(QApplication::translate("MainWindowDesign", "Select Mask", 0, QApplication::UnicodeUTF8));
        ChooseObject_Button->setText(QApplication::translate("MainWindowDesign", "ChooseObject", 0, QApplication::UnicodeUTF8));
        Size_Button->setText(QApplication::translate("MainWindowDesign", "Mearsure", 0, QApplication::UnicodeUTF8));
        CameraFrame->setText(QString());
        groupBox_6->setTitle(QApplication::translate("MainWindowDesign", "SET-UP PARAMTERS", 0, QApplication::UnicodeUTF8));
        label_17->setText(QApplication::translate("MainWindowDesign", "Start Tracking P:", 0, QApplication::UnicodeUTF8));
        label_20->setText(QApplication::translate("MainWindowDesign", "um", 0, QApplication::UnicodeUTF8));
        label_21->setText(QApplication::translate("MainWindowDesign", "Stop Tracking P:", 0, QApplication::UnicodeUTF8));
        label_24->setText(QApplication::translate("MainWindowDesign", "um", 0, QApplication::UnicodeUTF8));
        label_27->setText(QApplication::translate("MainWindowDesign", "Delay Distance:", 0, QApplication::UnicodeUTF8));
        label_30->setText(QApplication::translate("MainWindowDesign", "um", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("MainWindowDesign", "Picking Distance:", 0, QApplication::UnicodeUTF8));
        label_32->setText(QApplication::translate("MainWindowDesign", "um", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("MainWindowDesign", "Picking Height:", 0, QApplication::UnicodeUTF8));
        label_15->setText(QApplication::translate("MainWindowDesign", "um", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("MainWindowDesign", "MEASUREMENT", 0, QApplication::UnicodeUTF8));
        pushButtonConnectSerial->setText(QApplication::translate("MainWindowDesign", "CONNECT TO SERIAL", 0, QApplication::UnicodeUTF8));
        labelSerialStatus->setText(QApplication::translate("MainWindowDesign", "Not connected yet", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("MainWindowDesign", "Encoder:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("MainWindowDesign", "pulse/ round", 0, QApplication::UnicodeUTF8));
        label_12->setText(QApplication::translate("MainWindowDesign", "Ratio:", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindowDesign", "mm/ round", 0, QApplication::UnicodeUTF8));
        label_23->setText(QApplication::translate("MainWindowDesign", "Speed:", 0, QApplication::UnicodeUTF8));
        label_26->setText(QApplication::translate("MainWindowDesign", "mm/ s", 0, QApplication::UnicodeUTF8));
        groupBoxConveyer->setTitle(QApplication::translate("MainWindowDesign", "CONVEYER", 0, QApplication::UnicodeUTF8));
        pushButtonStartConveyer->setText(QApplication::translate("MainWindowDesign", "START", 0, QApplication::UnicodeUTF8));
        labelStatusConveyer->setText(QApplication::translate("MainWindowDesign", "Status: OFF", 0, QApplication::UnicodeUTF8));
        groupBoxServo->setTitle(QApplication::translate("MainWindowDesign", "SERVO", 0, QApplication::UnicodeUTF8));
        pushButtonServoHoming->setText(QApplication::translate("MainWindowDesign", "HOMING", 0, QApplication::UnicodeUTF8));
        pushButtonStartProgram->setText(QApplication::translate("MainWindowDesign", "START PROGRAM", 0, QApplication::UnicodeUTF8));
        pushButtonStopProgram->setText(QApplication::translate("MainWindowDesign", "STOP PROGRAM", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindowDesign", "OBJECT POSITIONS", 0, QApplication::UnicodeUTF8));
        label_33->setText(QApplication::translate("MainWindowDesign", "X", 0, QApplication::UnicodeUTF8));
        label_36->setText(QApplication::translate("MainWindowDesign", "Y", 0, QApplication::UnicodeUTF8));
        label_39->setText(QApplication::translate("MainWindowDesign", "Z", 0, QApplication::UnicodeUTF8));
        label_40->setText(QApplication::translate("MainWindowDesign", "RX", 0, QApplication::UnicodeUTF8));
        label_42->setText(QApplication::translate("MainWindowDesign", "RZ", 0, QApplication::UnicodeUTF8));
        label_41->setText(QApplication::translate("MainWindowDesign", "RY", 0, QApplication::UnicodeUTF8));
        label_44->setText(QApplication::translate("MainWindowDesign", "Distance:", 0, QApplication::UnicodeUTF8));
        label_45->setText(QApplication::translate("MainWindowDesign", "um", 0, QApplication::UnicodeUTF8));
        label_43->setText(QApplication::translate("MainWindowDesign", "Position Variable NO", 0, QApplication::UnicodeUTF8));
        label_49->setText(QApplication::translate("MainWindowDesign", "Start tracking Signal NO", 0, QApplication::UnicodeUTF8));
        label_50->setText(QApplication::translate("MainWindowDesign", "Stop tracking Signal NO", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindowDesign", "Get Image", 0, QApplication::UnicodeUTF8));
        menu_File->setTitle(QApplication::translate("MainWindowDesign", "&App", 0, QApplication::UnicodeUTF8));
        menuSetting->setTitle(QApplication::translate("MainWindowDesign", "Display", 0, QApplication::UnicodeUTF8));
        menuDisplay_Option->setTitle(QApplication::translate("MainWindowDesign", "End-effecter Position", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindowDesign: public Ui_MainWindowDesign {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAIN_WINDOW_H
