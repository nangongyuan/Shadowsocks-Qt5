/********************************************************************************
** Form generated from reading UI file 'settingsdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTINGSDIALOG_H
#define UI_SETTINGSDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_SettingsDialog
{
public:
    QFormLayout *formLayout;
    QDialogButtonBox *buttonBox;
    QLabel *toolbarStyleLabel;
    QComboBox *toolbarStyleComboBox;
    QCheckBox *oneInstanceCheckBox;
    QCheckBox *hideCheckBox;
    QCheckBox *nativeMenuBarCheckBox;
    QCheckBox *startAtLoginCheckbox;

    void setupUi(QDialog *SettingsDialog)
    {
        if (SettingsDialog->objectName().isEmpty())
            SettingsDialog->setObjectName(QString::fromUtf8("SettingsDialog"));
        SettingsDialog->resize(340, 217);
        formLayout = new QFormLayout(SettingsDialog);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        buttonBox = new QDialogButtonBox(SettingsDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        formLayout->setWidget(8, QFormLayout::SpanningRole, buttonBox);

        toolbarStyleLabel = new QLabel(SettingsDialog);
        toolbarStyleLabel->setObjectName(QString::fromUtf8("toolbarStyleLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, toolbarStyleLabel);

        toolbarStyleComboBox = new QComboBox(SettingsDialog);
        toolbarStyleComboBox->addItem(QString());
        toolbarStyleComboBox->addItem(QString());
        toolbarStyleComboBox->addItem(QString());
        toolbarStyleComboBox->addItem(QString());
        toolbarStyleComboBox->addItem(QString());
        toolbarStyleComboBox->setObjectName(QString::fromUtf8("toolbarStyleComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(toolbarStyleComboBox->sizePolicy().hasHeightForWidth());
        toolbarStyleComboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(2, QFormLayout::FieldRole, toolbarStyleComboBox);

        oneInstanceCheckBox = new QCheckBox(SettingsDialog);
        oneInstanceCheckBox->setObjectName(QString::fromUtf8("oneInstanceCheckBox"));

        formLayout->setWidget(3, QFormLayout::SpanningRole, oneInstanceCheckBox);

        hideCheckBox = new QCheckBox(SettingsDialog);
        hideCheckBox->setObjectName(QString::fromUtf8("hideCheckBox"));

        formLayout->setWidget(5, QFormLayout::SpanningRole, hideCheckBox);

        nativeMenuBarCheckBox = new QCheckBox(SettingsDialog);
        nativeMenuBarCheckBox->setObjectName(QString::fromUtf8("nativeMenuBarCheckBox"));

        formLayout->setWidget(6, QFormLayout::SpanningRole, nativeMenuBarCheckBox);

        startAtLoginCheckbox = new QCheckBox(SettingsDialog);
        startAtLoginCheckbox->setObjectName(QString::fromUtf8("startAtLoginCheckbox"));

        formLayout->setWidget(4, QFormLayout::LabelRole, startAtLoginCheckbox);


        retranslateUi(SettingsDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), SettingsDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(SettingsDialog);
    } // setupUi

    void retranslateUi(QDialog *SettingsDialog)
    {
        SettingsDialog->setWindowTitle(QCoreApplication::translate("SettingsDialog", "General Settings", nullptr));
        toolbarStyleLabel->setText(QCoreApplication::translate("SettingsDialog", "Toolbar Style", nullptr));
        toolbarStyleComboBox->setItemText(0, QCoreApplication::translate("SettingsDialog", "Icons Only", nullptr));
        toolbarStyleComboBox->setItemText(1, QCoreApplication::translate("SettingsDialog", "Text Only", nullptr));
        toolbarStyleComboBox->setItemText(2, QCoreApplication::translate("SettingsDialog", "Text Alongside Icons", nullptr));
        toolbarStyleComboBox->setItemText(3, QCoreApplication::translate("SettingsDialog", "Text Under Icons", nullptr));
        toolbarStyleComboBox->setItemText(4, QCoreApplication::translate("SettingsDialog", "System Style", nullptr));

        oneInstanceCheckBox->setText(QCoreApplication::translate("SettingsDialog", "Allow only one instance running", nullptr));
        hideCheckBox->setText(QCoreApplication::translate("SettingsDialog", "Hide window on startup", nullptr));
#if QT_CONFIG(tooltip)
        nativeMenuBarCheckBox->setToolTip(QCoreApplication::translate("SettingsDialog", "Need to restart the application for this change to take effect", nullptr));
#endif // QT_CONFIG(tooltip)
        nativeMenuBarCheckBox->setText(QCoreApplication::translate("SettingsDialog", "Use native menu bar", nullptr));
        startAtLoginCheckbox->setText(QCoreApplication::translate("SettingsDialog", "Start at login", nullptr));
    } // retranslateUi

};

namespace Ui {
    class SettingsDialog: public Ui_SettingsDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTINGSDIALOG_H
