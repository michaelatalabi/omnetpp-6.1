/********************************************************************************
** Form generated from reading UI file 'comboselectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_COMBOSELECTIONDIALOG_H
#define UI_COMBOSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_ComboSelectionDialog
{
public:
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLabel *label_2;
    QComboBox *comboBox;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *ComboSelectionDialog)
    {
        if (ComboSelectionDialog->objectName().isEmpty())
            ComboSelectionDialog->setObjectName(QString::fromUtf8("ComboSelectionDialog"));
        ComboSelectionDialog->resize(500, 120);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(ComboSelectionDialog->sizePolicy().hasHeightForWidth());
        ComboSelectionDialog->setSizePolicy(sizePolicy);
        verticalLayout = new QVBoxLayout(ComboSelectionDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(ComboSelectionDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label_2 = new QLabel(ComboSelectionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout->addWidget(label_2);

        comboBox = new QComboBox(ComboSelectionDialog);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(comboBox->sizePolicy().hasHeightForWidth());
        comboBox->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(comboBox);


        verticalLayout->addLayout(horizontalLayout);

        buttonBox = new QDialogButtonBox(ComboSelectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(ComboSelectionDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), ComboSelectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ComboSelectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(ComboSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *ComboSelectionDialog)
    {
        ComboSelectionDialog->setWindowTitle(QCoreApplication::translate("ComboSelectionDialog", "Set Up Network", nullptr));
        label->setText(QCoreApplication::translate("ComboSelectionDialog", "Set up a network. The network will use parameter values defined in the \n"
"[General] section of the ini file.", nullptr));
        label_2->setText(QCoreApplication::translate("ComboSelectionDialog", "Select network:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ComboSelectionDialog: public Ui_ComboSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_COMBOSELECTIONDIALOG_H
