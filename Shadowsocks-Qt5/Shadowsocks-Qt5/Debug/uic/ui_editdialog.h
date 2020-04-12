/********************************************************************************
** Form generated from reading UI file 'editdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EDITDIALOG_H
#define UI_EDITDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EditDialog
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *editFrame;
    QFormLayout *formLayout;
    QLabel *nameLabel;
    QLineEdit *nameEdit;
    QLabel *serverAddrLabel;
    QLineEdit *serverAddrEdit;
    QLabel *serverPortLabel;
    QLineEdit *serverPortEdit;
    QLabel *pwdLabel;
    QLineEdit *pwdEdit;
    QLabel *localAddrLabel;
    QLineEdit *localAddrEdit;
    QLabel *localPortLabel;
    QLineEdit *localPortEdit;
    QLabel *localServerTypeLabel;
    QHBoxLayout *localTypeHorizontalLayout;
    QRadioButton *socks5RadioButton;
    QRadioButton *httpRadioButton;
    QLabel *encryptLabel;
    QComboBox *encryptComboBox;
    QLabel *timeoutLabel;
    QSpinBox *timeoutSpinBox;
    QLabel *resetDateLabel;
    QDateEdit *resetDateEdit;
    QLabel *autoStartLabel;
    QCheckBox *autoStartCheckBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;
    QButtonGroup *buttonGroup;

    void setupUi(QDialog *EditDialog)
    {
        if (EditDialog->objectName().isEmpty())
            EditDialog->setObjectName(QString::fromUtf8("EditDialog"));
        EditDialog->resize(462, 524);
        verticalLayout = new QVBoxLayout(EditDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        editFrame = new QFrame(EditDialog);
        editFrame->setObjectName(QString::fromUtf8("editFrame"));
        editFrame->setFrameShape(QFrame::StyledPanel);
        editFrame->setFrameShadow(QFrame::Raised);
        formLayout = new QFormLayout(editFrame);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setLabelAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);
        nameLabel = new QLabel(editFrame);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));

        formLayout->setWidget(0, QFormLayout::LabelRole, nameLabel);

        nameEdit = new QLineEdit(editFrame);
        nameEdit->setObjectName(QString::fromUtf8("nameEdit"));

        formLayout->setWidget(0, QFormLayout::FieldRole, nameEdit);

        serverAddrLabel = new QLabel(editFrame);
        serverAddrLabel->setObjectName(QString::fromUtf8("serverAddrLabel"));

        formLayout->setWidget(1, QFormLayout::LabelRole, serverAddrLabel);

        serverAddrEdit = new QLineEdit(editFrame);
        serverAddrEdit->setObjectName(QString::fromUtf8("serverAddrEdit"));

        formLayout->setWidget(1, QFormLayout::FieldRole, serverAddrEdit);

        serverPortLabel = new QLabel(editFrame);
        serverPortLabel->setObjectName(QString::fromUtf8("serverPortLabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, serverPortLabel);

        serverPortEdit = new QLineEdit(editFrame);
        serverPortEdit->setObjectName(QString::fromUtf8("serverPortEdit"));
        serverPortEdit->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhPreferNumbers);

        formLayout->setWidget(2, QFormLayout::FieldRole, serverPortEdit);

        pwdLabel = new QLabel(editFrame);
        pwdLabel->setObjectName(QString::fromUtf8("pwdLabel"));

        formLayout->setWidget(3, QFormLayout::LabelRole, pwdLabel);

        pwdEdit = new QLineEdit(editFrame);
        pwdEdit->setObjectName(QString::fromUtf8("pwdEdit"));
        pwdEdit->setInputMethodHints(Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        pwdEdit->setEchoMode(QLineEdit::PasswordEchoOnEdit);

        formLayout->setWidget(3, QFormLayout::FieldRole, pwdEdit);

        localAddrLabel = new QLabel(editFrame);
        localAddrLabel->setObjectName(QString::fromUtf8("localAddrLabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, localAddrLabel);

        localAddrEdit = new QLineEdit(editFrame);
        localAddrEdit->setObjectName(QString::fromUtf8("localAddrEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, localAddrEdit);

        localPortLabel = new QLabel(editFrame);
        localPortLabel->setObjectName(QString::fromUtf8("localPortLabel"));

        formLayout->setWidget(5, QFormLayout::LabelRole, localPortLabel);

        localPortEdit = new QLineEdit(editFrame);
        localPortEdit->setObjectName(QString::fromUtf8("localPortEdit"));
        localPortEdit->setInputMethodHints(Qt::ImhDigitsOnly|Qt::ImhPreferNumbers);

        formLayout->setWidget(5, QFormLayout::FieldRole, localPortEdit);

        localServerTypeLabel = new QLabel(editFrame);
        localServerTypeLabel->setObjectName(QString::fromUtf8("localServerTypeLabel"));

        formLayout->setWidget(6, QFormLayout::LabelRole, localServerTypeLabel);

        localTypeHorizontalLayout = new QHBoxLayout();
        localTypeHorizontalLayout->setObjectName(QString::fromUtf8("localTypeHorizontalLayout"));
        socks5RadioButton = new QRadioButton(editFrame);
        buttonGroup = new QButtonGroup(EditDialog);
        buttonGroup->setObjectName(QString::fromUtf8("buttonGroup"));
        buttonGroup->addButton(socks5RadioButton);
        socks5RadioButton->setObjectName(QString::fromUtf8("socks5RadioButton"));
        socks5RadioButton->setText(QString::fromUtf8("SOCKS&5"));
        socks5RadioButton->setChecked(true);

        localTypeHorizontalLayout->addWidget(socks5RadioButton);

        httpRadioButton = new QRadioButton(editFrame);
        buttonGroup->addButton(httpRadioButton);
        httpRadioButton->setObjectName(QString::fromUtf8("httpRadioButton"));
        httpRadioButton->setText(QString::fromUtf8("HTTP(S)"));

        localTypeHorizontalLayout->addWidget(httpRadioButton);

        localTypeHorizontalLayout->setStretch(0, 1);
        localTypeHorizontalLayout->setStretch(1, 1);

        formLayout->setLayout(6, QFormLayout::FieldRole, localTypeHorizontalLayout);

        encryptLabel = new QLabel(editFrame);
        encryptLabel->setObjectName(QString::fromUtf8("encryptLabel"));

        formLayout->setWidget(7, QFormLayout::LabelRole, encryptLabel);

        encryptComboBox = new QComboBox(editFrame);
        encryptComboBox->setObjectName(QString::fromUtf8("encryptComboBox"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(encryptComboBox->sizePolicy().hasHeightForWidth());
        encryptComboBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(7, QFormLayout::FieldRole, encryptComboBox);

        timeoutLabel = new QLabel(editFrame);
        timeoutLabel->setObjectName(QString::fromUtf8("timeoutLabel"));

        formLayout->setWidget(8, QFormLayout::LabelRole, timeoutLabel);

        timeoutSpinBox = new QSpinBox(editFrame);
        timeoutSpinBox->setObjectName(QString::fromUtf8("timeoutSpinBox"));
        sizePolicy.setHeightForWidth(timeoutSpinBox->sizePolicy().hasHeightForWidth());
        timeoutSpinBox->setSizePolicy(sizePolicy);
        timeoutSpinBox->setMinimum(10);
        timeoutSpinBox->setMaximum(3600);
        timeoutSpinBox->setSingleStep(10);
        timeoutSpinBox->setValue(60);

        formLayout->setWidget(8, QFormLayout::FieldRole, timeoutSpinBox);

        resetDateLabel = new QLabel(editFrame);
        resetDateLabel->setObjectName(QString::fromUtf8("resetDateLabel"));

        formLayout->setWidget(9, QFormLayout::LabelRole, resetDateLabel);

        resetDateEdit = new QDateEdit(editFrame);
        resetDateEdit->setObjectName(QString::fromUtf8("resetDateEdit"));
        sizePolicy.setHeightForWidth(resetDateEdit->sizePolicy().hasHeightForWidth());
        resetDateEdit->setSizePolicy(sizePolicy);
        resetDateEdit->setCalendarPopup(true);

        formLayout->setWidget(9, QFormLayout::FieldRole, resetDateEdit);

        autoStartLabel = new QLabel(editFrame);
        autoStartLabel->setObjectName(QString::fromUtf8("autoStartLabel"));

        formLayout->setWidget(10, QFormLayout::LabelRole, autoStartLabel);

        autoStartCheckBox = new QCheckBox(editFrame);
        autoStartCheckBox->setObjectName(QString::fromUtf8("autoStartCheckBox"));
        sizePolicy.setHeightForWidth(autoStartCheckBox->sizePolicy().hasHeightForWidth());
        autoStartCheckBox->setSizePolicy(sizePolicy);

        formLayout->setWidget(10, QFormLayout::FieldRole, autoStartCheckBox);


        verticalLayout->addWidget(editFrame);

        verticalSpacer = new QSpacerItem(20, 0, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(EditDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);

        QWidget::setTabOrder(nameEdit, serverAddrEdit);
        QWidget::setTabOrder(serverAddrEdit, serverPortEdit);
        QWidget::setTabOrder(serverPortEdit, pwdEdit);
        QWidget::setTabOrder(pwdEdit, localAddrEdit);
        QWidget::setTabOrder(localAddrEdit, localPortEdit);
        QWidget::setTabOrder(localPortEdit, socks5RadioButton);
        QWidget::setTabOrder(socks5RadioButton, httpRadioButton);
        QWidget::setTabOrder(httpRadioButton, encryptComboBox);
        QWidget::setTabOrder(encryptComboBox, timeoutSpinBox);
        QWidget::setTabOrder(timeoutSpinBox, resetDateEdit);
        QWidget::setTabOrder(resetDateEdit, autoStartCheckBox);

        retranslateUi(EditDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), EditDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(EditDialog);
    } // setupUi

    void retranslateUi(QDialog *EditDialog)
    {
        EditDialog->setWindowTitle(QCoreApplication::translate("EditDialog", "Profile Editor", nullptr));
        nameLabel->setText(QCoreApplication::translate("EditDialog", "Profile Name", nullptr));
        serverAddrLabel->setText(QCoreApplication::translate("EditDialog", "Server Address", nullptr));
        serverPortLabel->setText(QCoreApplication::translate("EditDialog", "Server Port", nullptr));
        pwdLabel->setText(QCoreApplication::translate("EditDialog", "Password", nullptr));
        localAddrLabel->setText(QCoreApplication::translate("EditDialog", "Local Address", nullptr));
        localPortLabel->setText(QCoreApplication::translate("EditDialog", "Local Port", nullptr));
        localServerTypeLabel->setText(QCoreApplication::translate("EditDialog", "Local Server Type", nullptr));
        encryptLabel->setText(QCoreApplication::translate("EditDialog", "Encryption Method", nullptr));
        timeoutLabel->setText(QCoreApplication::translate("EditDialog", "Timeout", nullptr));
        resetDateLabel->setText(QCoreApplication::translate("EditDialog", "Reset Data Usage after", nullptr));
        autoStartLabel->setText(QCoreApplication::translate("EditDialog", "Automation", nullptr));
        autoStartCheckBox->setText(QCoreApplication::translate("EditDialog", "Auto connect on application start", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EditDialog: public Ui_EditDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EDITDIALOG_H
