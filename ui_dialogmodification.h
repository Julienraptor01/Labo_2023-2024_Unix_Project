/********************************************************************************
** Form generated from reading UI file 'dialogmodification.ui'
**
** Created by: Qt User Interface Compiler version 5.12.5
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOGMODIFICATION_H
#define UI_DIALOGMODIFICATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_DialogModification
{
public:
    QLabel *label;
    QLineEdit *lineEditNom;
    QLabel *label_2;
    QLineEdit *lineEditMotDePasse;
    QLabel *label_3;
    QLineEdit *lineEditGsm;
    QLabel *label_4;
    QLineEdit *lineEditEmail;
    QPushButton *pushButtonOk;

    void setupUi(QDialog *DialogModification)
    {
        if (DialogModification->objectName().isEmpty())
            DialogModification->setObjectName(QString::fromUtf8("DialogModification"));
        DialogModification->resize(321, 215);
        label = new QLabel(DialogModification);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 20, 41, 21));
        lineEditNom = new QLineEdit(DialogModification);
        lineEditNom->setObjectName(QString::fromUtf8("lineEditNom"));
        lineEditNom->setGeometry(QRect(130, 20, 171, 25));
        lineEditNom->setReadOnly(true);
        label_2 = new QLabel(DialogModification);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 60, 111, 21));
        lineEditMotDePasse = new QLineEdit(DialogModification);
        lineEditMotDePasse->setObjectName(QString::fromUtf8("lineEditMotDePasse"));
        lineEditMotDePasse->setGeometry(QRect(130, 60, 171, 25));
        label_3 = new QLabel(DialogModification);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 100, 64, 21));
        lineEditGsm = new QLineEdit(DialogModification);
        lineEditGsm->setObjectName(QString::fromUtf8("lineEditGsm"));
        lineEditGsm->setGeometry(QRect(130, 100, 171, 25));
        label_4 = new QLabel(DialogModification);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 140, 64, 21));
        lineEditEmail = new QLineEdit(DialogModification);
        lineEditEmail->setObjectName(QString::fromUtf8("lineEditEmail"));
        lineEditEmail->setGeometry(QRect(130, 140, 171, 25));
        pushButtonOk = new QPushButton(DialogModification);
        pushButtonOk->setObjectName(QString::fromUtf8("pushButtonOk"));
        pushButtonOk->setGeometry(QRect(20, 180, 281, 25));

        retranslateUi(DialogModification);

        QMetaObject::connectSlotsByName(DialogModification);
    } // setupUi

    void retranslateUi(QDialog *DialogModification)
    {
        DialogModification->setWindowTitle(QApplication::translate("DialogModification", "Modification en cours...", nullptr));
        label->setText(QApplication::translate("DialogModification", "Nom :", nullptr));
        label_2->setText(QApplication::translate("DialogModification", "Mot de passe :", nullptr));
        label_3->setText(QApplication::translate("DialogModification", "GSM :", nullptr));
        label_4->setText(QApplication::translate("DialogModification", "E-mail :", nullptr));
        pushButtonOk->setText(QApplication::translate("DialogModification", "OK", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogModification: public Ui_DialogModification {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOGMODIFICATION_H
