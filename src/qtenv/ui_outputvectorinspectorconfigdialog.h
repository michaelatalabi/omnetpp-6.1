/********************************************************************************
** Form generated from reading UI file 'outputvectorinspectorconfigdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OUTPUTVECTORINSPECTORCONFIGDIALOG_H
#define UI_OUTPUTVECTORINSPECTORCONFIGDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_OutputVectorInspectorConfigDialog
{
public:
    QVBoxLayout *verticalLayout;
    QGroupBox *manualAxisSettingsGroupBox;
    QFormLayout *formLayout_2;
    QLabel *timeScaleLabel;
    QLabel *yMinLabel;
    QLabel *yMaxLabel;
    QLineEdit *timeScaleLineEdit;
    QLineEdit *yMinLineEdit;
    QLineEdit *yMaxLineEdit;
    QHBoxLayout *styleLayout;
    QLabel *styleLabel;
    QComboBox *styleComboBox;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *okCancelButtonBox;

    void setupUi(QDialog *OutputVectorInspectorConfigDialog)
    {
        if (OutputVectorInspectorConfigDialog->objectName().isEmpty())
            OutputVectorInspectorConfigDialog->setObjectName(QString::fromUtf8("OutputVectorInspectorConfigDialog"));
        OutputVectorInspectorConfigDialog->resize(313, 219);
        verticalLayout = new QVBoxLayout(OutputVectorInspectorConfigDialog);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        manualAxisSettingsGroupBox = new QGroupBox(OutputVectorInspectorConfigDialog);
        manualAxisSettingsGroupBox->setObjectName(QString::fromUtf8("manualAxisSettingsGroupBox"));
        formLayout_2 = new QFormLayout(manualAxisSettingsGroupBox);
        formLayout_2->setObjectName(QString::fromUtf8("formLayout_2"));
        timeScaleLabel = new QLabel(manualAxisSettingsGroupBox);
        timeScaleLabel->setObjectName(QString::fromUtf8("timeScaleLabel"));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, timeScaleLabel);

        yMinLabel = new QLabel(manualAxisSettingsGroupBox);
        yMinLabel->setObjectName(QString::fromUtf8("yMinLabel"));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, yMinLabel);

        yMaxLabel = new QLabel(manualAxisSettingsGroupBox);
        yMaxLabel->setObjectName(QString::fromUtf8("yMaxLabel"));

        formLayout_2->setWidget(2, QFormLayout::LabelRole, yMaxLabel);

        timeScaleLineEdit = new QLineEdit(manualAxisSettingsGroupBox);
        timeScaleLineEdit->setObjectName(QString::fromUtf8("timeScaleLineEdit"));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, timeScaleLineEdit);

        yMinLineEdit = new QLineEdit(manualAxisSettingsGroupBox);
        yMinLineEdit->setObjectName(QString::fromUtf8("yMinLineEdit"));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, yMinLineEdit);

        yMaxLineEdit = new QLineEdit(manualAxisSettingsGroupBox);
        yMaxLineEdit->setObjectName(QString::fromUtf8("yMaxLineEdit"));

        formLayout_2->setWidget(2, QFormLayout::FieldRole, yMaxLineEdit);


        verticalLayout->addWidget(manualAxisSettingsGroupBox);

        styleLayout = new QHBoxLayout();
        styleLayout->setObjectName(QString::fromUtf8("styleLayout"));
        styleLabel = new QLabel(OutputVectorInspectorConfigDialog);
        styleLabel->setObjectName(QString::fromUtf8("styleLabel"));

        styleLayout->addWidget(styleLabel);

        styleComboBox = new QComboBox(OutputVectorInspectorConfigDialog);
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->addItem(QString());
        styleComboBox->setObjectName(QString::fromUtf8("styleComboBox"));

        styleLayout->addWidget(styleComboBox);


        verticalLayout->addLayout(styleLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        okCancelButtonBox = new QDialogButtonBox(OutputVectorInspectorConfigDialog);
        okCancelButtonBox->setObjectName(QString::fromUtf8("okCancelButtonBox"));
        okCancelButtonBox->setOrientation(Qt::Horizontal);
        okCancelButtonBox->setStandardButtons(QDialogButtonBox::Apply|QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(okCancelButtonBox);


        retranslateUi(OutputVectorInspectorConfigDialog);
        QObject::connect(okCancelButtonBox, SIGNAL(accepted()), OutputVectorInspectorConfigDialog, SLOT(accept()));
        QObject::connect(okCancelButtonBox, SIGNAL(rejected()), OutputVectorInspectorConfigDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(OutputVectorInspectorConfigDialog);
    } // setupUi

    void retranslateUi(QDialog *OutputVectorInspectorConfigDialog)
    {
        OutputVectorInspectorConfigDialog->setWindowTitle(QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Plotting Options", nullptr));
        manualAxisSettingsGroupBox->setTitle(QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Axis settings:", nullptr));
        timeScaleLabel->setText(QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Time span (sec):", nullptr));
        yMinLabel->setText(QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Y min:", nullptr));
        yMaxLabel->setText(QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Y max:", nullptr));
#if QT_CONFIG(tooltip)
        timeScaleLineEdit->setToolTip(QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Leave empty for default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        yMinLineEdit->setToolTip(QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Leave empty for default", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        yMaxLineEdit->setToolTip(QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Leave empty for default", nullptr));
#endif // QT_CONFIG(tooltip)
        styleLabel->setText(QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Plotting mode:", nullptr));
        styleComboBox->setItemText(0, QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Dots", nullptr));
        styleComboBox->setItemText(1, QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Points", nullptr));
        styleComboBox->setItemText(2, QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Pins", nullptr));
        styleComboBox->setItemText(3, QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Bars", nullptr));
        styleComboBox->setItemText(4, QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Sample-hold", nullptr));
        styleComboBox->setItemText(5, QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Backward Sample-hold", nullptr));
        styleComboBox->setItemText(6, QCoreApplication::translate("OutputVectorInspectorConfigDialog", "Linear", nullptr));

    } // retranslateUi

};

namespace Ui {
    class OutputVectorInspectorConfigDialog: public Ui_OutputVectorInspectorConfigDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OUTPUTVECTORINSPECTORCONFIGDIALOG_H
