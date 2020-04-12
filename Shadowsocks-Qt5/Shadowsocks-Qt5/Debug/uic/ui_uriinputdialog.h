/********************************************************************************
** Form generated from reading UI file 'uriinputdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_URIINPUTDIALOG_H
#define UI_URIINPUTDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_URIInputDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *uriLabel;
    QLineEdit *uriEdit;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *URIInputDialog)
    {
        if (URIInputDialog->objectName().isEmpty())
            URIInputDialog->setObjectName(QString::fromUtf8("URIInputDialog"));
        URIInputDialog->resize(400, 159);
        verticalLayout = new QVBoxLayout(URIInputDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        uriLabel = new QLabel(URIInputDialog);
        uriLabel->setObjectName(QString::fromUtf8("uriLabel"));

        verticalLayout->addWidget(uriLabel);

        uriEdit = new QLineEdit(URIInputDialog);
        uriEdit->setObjectName(QString::fromUtf8("uriEdit"));
        uriEdit->setMinimumSize(QSize(300, 0));

        verticalLayout->addWidget(uriEdit);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(URIInputDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(URIInputDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), URIInputDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(URIInputDialog);
    } // setupUi

    void retranslateUi(QDialog *URIInputDialog)
    {
        URIInputDialog->setWindowTitle(QCoreApplication::translate("URIInputDialog", "URI Input Dialog", nullptr));
        uriLabel->setText(QCoreApplication::translate("URIInputDialog", "Please input ss:// URI", nullptr));
    } // retranslateUi

};

namespace Ui {
    class URIInputDialog: public Ui_URIInputDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_URIINPUTDIALOG_H
