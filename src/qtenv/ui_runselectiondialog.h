/********************************************************************************
** Form generated from reading UI file 'runselectiondialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RUNSELECTIONDIALOG_H
#define UI_RUNSELECTIONDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_RunSelectionDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QComboBox *configName;
    QLabel *label_3;
    QComboBox *runNumber;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *RunSelectionDialog)
    {
        if (RunSelectionDialog->objectName().isEmpty())
            RunSelectionDialog->setObjectName(QString::fromUtf8("RunSelectionDialog"));
        RunSelectionDialog->setWindowModality(Qt::NonModal);
        QSizePolicy sizePolicy(QSizePolicy::Minimum, QSizePolicy::Minimum);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(RunSelectionDialog->sizePolicy().hasHeightForWidth());
        RunSelectionDialog->setSizePolicy(sizePolicy);
        RunSelectionDialog->setModal(false);
        verticalLayout_2 = new QVBoxLayout(RunSelectionDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        label = new QLabel(RunSelectionDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout->addWidget(label);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        label_2 = new QLabel(RunSelectionDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout->addWidget(label_2, 0, 0, 1, 1);

        configName = new QComboBox(RunSelectionDialog);
        configName->setObjectName(QString::fromUtf8("configName"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(configName->sizePolicy().hasHeightForWidth());
        configName->setSizePolicy(sizePolicy1);
        configName->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(configName, 0, 1, 1, 1);

        label_3 = new QLabel(RunSelectionDialog);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout->addWidget(label_3, 1, 0, 1, 1);

        runNumber = new QComboBox(RunSelectionDialog);
        runNumber->setObjectName(QString::fromUtf8("runNumber"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(runNumber->sizePolicy().hasHeightForWidth());
        runNumber->setSizePolicy(sizePolicy2);
        runNumber->setSizeAdjustPolicy(QComboBox::AdjustToContents);

        gridLayout->addWidget(runNumber, 1, 1, 1, 1);

        gridLayout->setColumnStretch(1, 1);

        verticalLayout->addLayout(gridLayout);


        verticalLayout_2->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(1, 1, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(RunSelectionDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy3);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(false);

        verticalLayout_2->addWidget(buttonBox);

#if QT_CONFIG(shortcut)
        label_2->setBuddy(configName);
#endif // QT_CONFIG(shortcut)
        QWidget::setTabOrder(configName, runNumber);
        QWidget::setTabOrder(runNumber, buttonBox);

        retranslateUi(RunSelectionDialog);
        QObject::connect(buttonBox, SIGNAL(clicked(QAbstractButton*)), RunSelectionDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), RunSelectionDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(RunSelectionDialog);
    } // setupUi

    void retranslateUi(QDialog *RunSelectionDialog)
    {
        RunSelectionDialog->setWindowTitle(QCoreApplication::translate("RunSelectionDialog", "Set Up Inifile Configuration", nullptr));
        label->setText(QCoreApplication::translate("RunSelectionDialog", "Set up one of the configurations defined in ...", nullptr));
        label_2->setText(QCoreApplication::translate("RunSelectionDialog", "Config name:", nullptr));
        label_3->setText(QCoreApplication::translate("RunSelectionDialog", "Run number:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RunSelectionDialog: public Ui_RunSelectionDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RUNSELECTIONDIALOG_H
