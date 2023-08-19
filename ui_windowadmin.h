/********************************************************************************
** Form generated from reading UI file 'windowadmin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWADMIN_H
#define UI_WINDOWADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowAdmin
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QFrame *frame;
    QLabel *label_2;
    QLineEdit *lineEditNom;
    QLabel *label_3;
    QLineEdit *lineEditMotDePasse;
    QPushButton *pushButtonAjouterUtilisateur;
    QPushButton *pushButtonSupprimerUtilisateur;
    QLabel *label_4;
    QFrame *frame_2;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEditTexte;
    QLineEdit *lineEditNbSecondes;
    QPushButton *pushButtonAjouterPublicite;
    QPushButton *pushButtonQuitter;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *WindowAdmin)
    {
        if (WindowAdmin->objectName().isEmpty())
            WindowAdmin->setObjectName(QString::fromUtf8("WindowAdmin"));
        WindowAdmin->resize(490, 308);
        centralwidget = new QWidget(WindowAdmin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 10, 111, 17));
        frame = new QFrame(centralwidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setGeometry(QRect(10, 30, 471, 91));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        label_2 = new QLabel(frame);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 64, 21));
        lineEditNom = new QLineEdit(frame);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        lineEditNom->setGeometry(QRect(60, 10, 121, 25));
        label_3 = new QLabel(frame);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(210, 10, 101, 21));
        lineEditMotDePasse = new QLineEdit(frame);
        lineEditMotDePasse->setObjectName(QString::fromUtf8("lineEditMotDePasse"));
        lineEditMotDePasse->setGeometry(QRect(320, 10, 131, 25));
        pushButtonAjouterUtilisateur = new QPushButton(frame);
        pushButtonAjouterUtilisateur->setObjectName(QString::fromUtf8("pushButtonAjouterUtilisateur"));
        pushButtonAjouterUtilisateur->setGeometry(QRect(10, 50, 201, 25));
        pushButtonAjouterUtilisateur->setStyleSheet(QString::fromUtf8("background-color:rgb(138, 226, 52)"));
        pushButtonSupprimerUtilisateur = new QPushButton(frame);
        pushButtonSupprimerUtilisateur->setObjectName(QString::fromUtf8("pushButtonSupprimerUtilisateur"));
        pushButtonSupprimerUtilisateur->setGeometry(QRect(260, 50, 191, 25));
        pushButtonSupprimerUtilisateur->setStyleSheet(QString::fromUtf8("background-color:rgb(252, 175, 62)"));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 140, 91, 17));
        frame_2 = new QFrame(centralwidget);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setGeometry(QRect(10, 160, 471, 91));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        label_5 = new QLabel(frame_2);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(10, 10, 51, 21));
        label_6 = new QLabel(frame_2);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 50, 161, 21));
        lineEditTexte = new QLineEdit(frame_2);
        lineEditTexte->setObjectName(QString::fromUtf8("lineEditTexte"));
        lineEditTexte->setGeometry(QRect(70, 10, 381, 25));
        lineEditNbSecondes = new QLineEdit(frame_2);
        lineEditNbSecondes->setObjectName(QString::fromUtf8("lineEditNbSecondes"));
        lineEditNbSecondes->setGeometry(QRect(162, 50, 71, 25));
        pushButtonAjouterPublicite = new QPushButton(frame_2);
        pushButtonAjouterPublicite->setObjectName(QString::fromUtf8("pushButtonAjouterPublicite"));
        pushButtonAjouterPublicite->setGeometry(QRect(252, 50, 201, 25));
        pushButtonAjouterPublicite->setStyleSheet(QString::fromUtf8("background-color:rgb(138, 226, 52)"));
        pushButtonQuitter = new QPushButton(centralwidget);
        pushButtonQuitter->setObjectName(QString::fromUtf8("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(10, 260, 471, 25));
        WindowAdmin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(WindowAdmin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 490, 22));
        WindowAdmin->setMenuBar(menubar);
        statusbar = new QStatusBar(WindowAdmin);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        WindowAdmin->setStatusBar(statusbar);

        retranslateUi(WindowAdmin);

        QMetaObject::connectSlotsByName(WindowAdmin);
    } // setupUi

    void retranslateUi(QMainWindow *WindowAdmin)
    {
        WindowAdmin->setWindowTitle(QApplication::translate("WindowAdmin", "Administrateur", nullptr));
        label->setText(QApplication::translate("WindowAdmin", "<html><head/><body><p><span style=\" font-weight:600; color:#204a87;\">Utilisateurs :</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("WindowAdmin", "Nom :", nullptr));
        label_3->setText(QApplication::translate("WindowAdmin", "Mot de passe :", nullptr));
        pushButtonAjouterUtilisateur->setText(QApplication::translate("WindowAdmin", "Ajouter", nullptr));
        pushButtonSupprimerUtilisateur->setText(QApplication::translate("WindowAdmin", "Supprimer", nullptr));
        label_4->setText(QApplication::translate("WindowAdmin", "<html><head/><body><p><span style=\" font-weight:600; color:#204a87;\">Publicit\303\251s :</span></p></body></html>", nullptr));
        label_5->setText(QApplication::translate("WindowAdmin", "Texte :", nullptr));
        label_6->setText(QApplication::translate("WindowAdmin", "Nombre de secondes :", nullptr));
        pushButtonAjouterPublicite->setText(QApplication::translate("WindowAdmin", "Ajouter", nullptr));
        pushButtonQuitter->setText(QApplication::translate("WindowAdmin", "Quitter", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowAdmin: public Ui_WindowAdmin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWADMIN_H
