/********************************************************************************
** Form generated from reading UI file 'windowclient.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWCLIENT_H
#define UI_WINDOWCLIENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowClient
{
public:
    QWidget *centralwidget;
    QLineEdit *lineEditPublicite;
    QLabel *label;
    QLineEdit *lineEditNom;
    QLabel *label_2;
    QLineEdit *lineEditMotDePasse;
    QPushButton *pushButtonLogin;
    QPushButton *pushButtonLogout;
    QLCDNumber *lcdNumberTimeOut;
    QFrame *frame;
    QLabel *label_3;
    QTextEdit *textEditConversations;
    QLabel *label_4;
    QPushButton *pushButtonEnvoyer;
    QLineEdit *lineEditAEnvoyer;
    QFrame *frame_2;
    QLabel *label_5;
    QLineEdit *lineEditConnecte1;
    QCheckBox *checkBox1;
    QLineEdit *lineEditConnecte2;
    QLineEdit *lineEditConnecte3;
    QLineEdit *lineEditConnecte4;
    QLineEdit *lineEditConnecte5;
    QCheckBox *checkBox2;
    QCheckBox *checkBox3;
    QCheckBox *checkBox4;
    QCheckBox *checkBox5;
    QFrame *frame_3;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEditNomRenseignements;
    QLabel *label_8;
    QLineEdit *lineEditGsm;
    QLabel *label_9;
    QLineEdit *lineEditEmail;
    QPushButton *pushButtonConsulter;
    QPushButton *pushButtonModifier;
    QCheckBox *checkBoxNouveau;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowClient)
    {
        if (WindowClient->objectName().isEmpty())
            WindowClient->setObjectName(QString::fromUtf8("WindowClient"));
        WindowClient->resize(730, 553);
        centralwidget = new QWidget(WindowClient);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        lineEditPublicite = new QLineEdit(centralwidget);
        lineEditPublicite->setObjectName(QString::fromUtf8("lineEditPublicite"));
        lineEditPublicite->setGeometry(QRect(20, 20, 601, 25));
        lineEditPublicite->setStyleSheet(QString::fromUtf8("background-color:rgb(216, 250, 249)"));
        lineEditPublicite->setAlignment(Qt::AlignCenter);
        lineEditPublicite->setReadOnly(true);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 60, 64, 21));
        lineEditNom = new QLineEdit(centralwidget);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        lineEditNom->setGeometry(QRect(70, 60, 113, 25));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(200, 60, 111, 21));
        lineEditMotDePasse = new QLineEdit(centralwidget);
        lineEditMotDePasse->setObjectName(QString::fromUtf8("lineEditMotDePasse"));
        lineEditMotDePasse->setGeometry(QRect(310, 60, 113, 25));
        pushButtonLogin = new QPushButton(centralwidget);
        pushButtonLogin->setObjectName(QString::fromUtf8("pushButtonLogin"));
        pushButtonLogin->setGeometry(QRect(440, 60, 91, 25));
        pushButtonLogin->setStyleSheet(QString::fromUtf8("background-color:rgb(138, 226, 52)"));
        pushButtonLogout = new QPushButton(centralwidget);
        pushButtonLogout->setObjectName(QString::fromUtf8("pushButtonLogout"));
        pushButtonLogout->setEnabled(false);
        pushButtonLogout->setGeometry(QRect(540, 60, 91, 25));
        pushButtonLogout->setStyleSheet(QString::fromUtf8("background-color:rgb(252, 175, 62)"));
        pushButtonLogout->setCheckable(false);
        lcdNumberTimeOut = new QLCDNumber(centralwidget);
        lcdNumberTimeOut->setObjectName(QString::fromUtf8("lcdNumberTimeOut"));
        lcdNumberTimeOut->setGeometry(QRect(640, 10, 71, 41));
        lcdNumberTimeOut->setStyleSheet(QString::fromUtf8("background-color:rgb(241, 244, 84)"));
        lcdNumberTimeOut->setSegmentStyle(QLCDNumber::Flat);
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(20, 110, 451, 411));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 111, 17));
        textEditConversations = new QTextEdit(frame);
        textEditConversations->setObjectName(QString::fromUtf8("textEditConversations"));
        textEditConversations->setGeometry(QRect(10, 30, 431, 311));
        textEditConversations->setReadOnly(true);
        label_4 = new QLabel(frame);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 350, 121, 17));
        pushButtonEnvoyer = new QPushButton(frame);
        pushButtonEnvoyer->setObjectName(QString::fromUtf8("pushButtonEnvoyer"));
        pushButtonEnvoyer->setEnabled(false);
        pushButtonEnvoyer->setGeometry(QRect(360, 370, 83, 25));
        pushButtonEnvoyer->setStyleSheet(QString::fromUtf8("background-color:rgb(114, 159, 207)"));
        lineEditAEnvoyer = new QLineEdit(frame);
        lineEditAEnvoyer->setObjectName(QString::fromUtf8("lineEditAEnvoyer"));
        lineEditAEnvoyer->setEnabled(false);
        lineEditAEnvoyer->setGeometry(QRect(12, 370, 341, 25));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(480, 110, 231, 191));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 171, 17));
        lineEditConnecte1 = new QLineEdit(frame_2);
        lineEditConnecte1->setObjectName(QString::fromUtf8("lineEditConnecte1"));
        lineEditConnecte1->setGeometry(QRect(10, 30, 113, 25));
        lineEditConnecte1->setReadOnly(true);
        checkBox1 = new QCheckBox(frame_2);
        checkBox1->setObjectName(QString::fromUtf8("checkBox1"));
        checkBox1->setEnabled(false);
        checkBox1->setGeometry(QRect(140, 30, 90, 23));
        lineEditConnecte2 = new QLineEdit(frame_2);
        lineEditConnecte2->setObjectName(QString::fromUtf8("lineEditConnecte2"));
        lineEditConnecte2->setGeometry(QRect(10, 60, 113, 25));
        lineEditConnecte2->setReadOnly(true);
        lineEditConnecte3 = new QLineEdit(frame_2);
        lineEditConnecte3->setObjectName(QString::fromUtf8("lineEditConnecte3"));
        lineEditConnecte3->setGeometry(QRect(10, 90, 113, 25));
        lineEditConnecte3->setReadOnly(true);
        lineEditConnecte4 = new QLineEdit(frame_2);
        lineEditConnecte4->setObjectName(QString::fromUtf8("lineEditConnecte4"));
        lineEditConnecte4->setGeometry(QRect(10, 120, 113, 25));
        lineEditConnecte4->setReadOnly(true);
        lineEditConnecte5 = new QLineEdit(frame_2);
        lineEditConnecte5->setObjectName(QString::fromUtf8("lineEditConnecte5"));
        lineEditConnecte5->setGeometry(QRect(10, 150, 113, 25));
        lineEditConnecte5->setReadOnly(true);
        checkBox2 = new QCheckBox(frame_2);
        checkBox2->setObjectName(QString::fromUtf8("checkBox2"));
        checkBox2->setEnabled(false);
        checkBox2->setGeometry(QRect(140, 60, 90, 23));
        checkBox3 = new QCheckBox(frame_2);
        checkBox3->setObjectName(QString::fromUtf8("checkBox3"));
        checkBox3->setEnabled(false);
        checkBox3->setGeometry(QRect(140, 90, 90, 23));
        checkBox4 = new QCheckBox(frame_2);
        checkBox4->setObjectName(QString::fromUtf8("checkBox4"));
        checkBox4->setEnabled(false);
        checkBox4->setGeometry(QRect(140, 120, 90, 23));
        checkBox5 = new QCheckBox(frame_2);
        checkBox5->setObjectName(QString::fromUtf8("checkBox5"));
        checkBox5->setEnabled(false);
        checkBox5->setGeometry(QRect(140, 150, 90, 23));
        frame_3 = new QFrame(centralwidget);
        frame_3->setObjectName(QString::fromUtf8("frame_3"));
        frame_3->setGeometry(QRect(480, 310, 231, 211));
        frame_3->setFrameShape(QFrame::StyledPanel);
        frame_3->setFrameShadow(QFrame::Raised);
        label_6 = new QLabel(frame_3);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 131, 17));
        label_7 = new QLabel(frame_3);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(10, 40, 64, 21));
        lineEditNomRenseignements = new QLineEdit(frame_3);
        lineEditNomRenseignements->setObjectName(QString::fromUtf8("lineEditNomRenseignements"));
        lineEditNomRenseignements->setEnabled(false);
        lineEditNomRenseignements->setGeometry(QRect(70, 40, 151, 25));
        label_8 = new QLabel(frame_3);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(10, 80, 64, 21));
        lineEditGsm = new QLineEdit(frame_3);
        lineEditGsm->setObjectName(QString::fromUtf8("lineEditGsm"));
        lineEditGsm->setGeometry(QRect(70, 80, 151, 25));
        lineEditGsm->setReadOnly(true);
        label_9 = new QLabel(frame_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(10, 120, 64, 21));
        lineEditEmail = new QLineEdit(frame_3);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));
        lineEditEmail->setGeometry(QRect(70, 120, 151, 25));
        lineEditEmail->setReadOnly(true);
        pushButtonConsulter = new QPushButton(frame_3);
        pushButtonConsulter->setObjectName(QString::fromUtf8("pushButtonConsulter"));
        pushButtonConsulter->setEnabled(false);
        pushButtonConsulter->setGeometry(QRect(10, 170, 101, 25));
        pushButtonModifier = new QPushButton(frame_3);
        pushButtonModifier->setObjectName(QString::fromUtf8("pushButtonModifier"));
        pushButtonModifier->setEnabled(false);
        pushButtonModifier->setGeometry(QRect(122, 170, 101, 25));
        checkBoxNouveau = new QCheckBox(centralwidget);
        checkBoxNouveau->setObjectName(QString::fromUtf8("checkBoxNouveau"));
        checkBoxNouveau->setGeometry(QRect(640, 60, 90, 23));
        WindowClient->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowClient);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 730, 22));
        WindowClient->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowClient);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowClient->setStatusBar(statusbar);

        retranslateUi(WindowClient);

        QMetaObject::connectSlotsByName(WindowClient);
    } // setupUi

    void retranslateUi(QMainWindow *WindowClient)
    {
        WindowClient->setWindowTitle(QApplication::translate("WindowClient", "UNIX Projet final 2021", nullptr));
        label->setText(QApplication::translate("WindowClient", "Nom :", nullptr));
        label_2->setText(QApplication::translate("WindowClient", "Mot de passe :", nullptr));
        pushButtonLogin->setText(QApplication::translate("WindowClient", "Login", nullptr));
        pushButtonLogout->setText(QApplication::translate("WindowClient", "Logout", nullptr));
        label_3->setText(QApplication::translate("WindowClient", "<html><head/><body><p><span style=\" font-weight:600; color:#204a87;\">Conversations :</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("WindowClient", "<html><head/><body><p><span style=\" font-weight:600; color:#204a87;\">Votre message :</span></p></body></html>", nullptr));
        pushButtonEnvoyer->setText(QApplication::translate("WindowClient", "Envoyer", nullptr));
        label_5->setText(QApplication::translate("WindowClient", "<html><head/><body><p><span style=\" font-weight:600; color:#204a87;\">Personnes connect\303\251es :</span></p></body></html>", nullptr));
        checkBox1->setText(QApplication::translate("WindowClient", "Refus\303\251", nullptr));
        checkBox2->setText(QApplication::translate("WindowClient", "Refus\303\251", nullptr));
        checkBox3->setText(QApplication::translate("WindowClient", "Refus\303\251", nullptr));
        checkBox4->setText(QApplication::translate("WindowClient", "Refus\303\251", nullptr));
        checkBox5->setText(QApplication::translate("WindowClient", "Refus\303\251", nullptr));
        label_6->setText(QApplication::translate("WindowClient", "<html><head/><body><p><span style=\" font-weight:600; color:#204a87;\">Renseignements :</span></p></body></html>", nullptr));
        label_7->setText(QApplication::translate("WindowClient", "Nom :", nullptr));
        label_8->setText(QApplication::translate("WindowClient", "GSM :", nullptr));
        label_9->setText(QApplication::translate("WindowClient", "E-mail :", nullptr));
        pushButtonConsulter->setText(QApplication::translate("WindowClient", "Consulter", nullptr));
        pushButtonModifier->setText(QApplication::translate("WindowClient", "Modifier", nullptr));
        checkBoxNouveau->setText(QApplication::translate("WindowClient", "Nouveau", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowClient: public Ui_WindowClient {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWCLIENT_H
