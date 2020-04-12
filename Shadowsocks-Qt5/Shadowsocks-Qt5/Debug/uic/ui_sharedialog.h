/********************************************************************************
** Form generated from reading UI file 'sharedialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHAREDIALOG_H
#define UI_SHAREDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include "qrwidget.h"

QT_BEGIN_NAMESPACE

class Ui_ShareDialog
{
public:
    QVBoxLayout *verticalLayout;
    QRWidget *qrWidget;
    QLineEdit *ssUrlEdit;
    QPushButton *saveButton;

    void setupUi(QDialog *ShareDialog)
    {
        if (ShareDialog->objectName().isEmpty())
            ShareDialog->setObjectName(QString::fromUtf8("ShareDialog"));
        ShareDialog->resize(300, 360);
        ShareDialog->setMinimumSize(QSize(300, 360));
        ShareDialog->setModal(true);
        verticalLayout = new QVBoxLayout(ShareDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        qrWidget = new QRWidget(ShareDialog);
        qrWidget->setObjectName(QString::fromUtf8("qrWidget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(10);
        sizePolicy.setHeightForWidth(qrWidget->sizePolicy().hasHeightForWidth());
        qrWidget->setSizePolicy(sizePolicy);
        qrWidget->setMinimumSize(QSize(256, 256));

        verticalLayout->addWidget(qrWidget);

        ssUrlEdit = new QLineEdit(ShareDialog);
        ssUrlEdit->setObjectName(QString::fromUtf8("ssUrlEdit"));
        ssUrlEdit->setStyleSheet(QString::fromUtf8("background-color: \"transparent\""));
        ssUrlEdit->setFrame(false);
        ssUrlEdit->setReadOnly(true);

        verticalLayout->addWidget(ssUrlEdit, 0, Qt::AlignBottom);

        saveButton = new QPushButton(ShareDialog);
        saveButton->setObjectName(QString::fromUtf8("saveButton"));

        verticalLayout->addWidget(saveButton);


        retranslateUi(ShareDialog);

        QMetaObject::connectSlotsByName(ShareDialog);
    } // setupUi

    void retranslateUi(QDialog *ShareDialog)
    {
        ShareDialog->setWindowTitle(QCoreApplication::translate("ShareDialog", "Share Profile", nullptr));
        saveButton->setText(QCoreApplication::translate("ShareDialog", "Save QR code as an Image file", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShareDialog: public Ui_ShareDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHAREDIALOG_H
