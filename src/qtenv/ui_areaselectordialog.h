/********************************************************************************
** Form generated from reading UI file 'areaselectordialog.ui'
**
** Created by: Qt User Interface Compiler version 5.15.15
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AREASELECTORDIALOG_H
#define UI_AREASELECTORDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_AreaSelectorDialog
{
public:
    QVBoxLayout *verticalLayout_2;
    QGroupBox *areaGroup;
    QVBoxLayout *verticalLayout;
    QRadioButton *boundingBox;
    QRadioButton *moduleRectangle;
    QRadioButton *viewport;
    QHBoxLayout *marginLayout;
    QLabel *marginLabel;
    QSpinBox *margin;
    QSpacerItem *verticalSpacer;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *AreaSelectorDialog)
    {
        if (AreaSelectorDialog->objectName().isEmpty())
            AreaSelectorDialog->setObjectName(QString::fromUtf8("AreaSelectorDialog"));
        verticalLayout_2 = new QVBoxLayout(AreaSelectorDialog);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        areaGroup = new QGroupBox(AreaSelectorDialog);
        areaGroup->setObjectName(QString::fromUtf8("areaGroup"));
        verticalLayout = new QVBoxLayout(areaGroup);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        boundingBox = new QRadioButton(areaGroup);
        boundingBox->setObjectName(QString::fromUtf8("boundingBox"));
        boundingBox->setChecked(true);

        verticalLayout->addWidget(boundingBox);

        moduleRectangle = new QRadioButton(areaGroup);
        moduleRectangle->setObjectName(QString::fromUtf8("moduleRectangle"));

        verticalLayout->addWidget(moduleRectangle);

        viewport = new QRadioButton(areaGroup);
        viewport->setObjectName(QString::fromUtf8("viewport"));

        verticalLayout->addWidget(viewport);


        verticalLayout_2->addWidget(areaGroup);

        marginLayout = new QHBoxLayout();
        marginLayout->setObjectName(QString::fromUtf8("marginLayout"));
        marginLabel = new QLabel(AreaSelectorDialog);
        marginLabel->setObjectName(QString::fromUtf8("marginLabel"));

        marginLayout->addWidget(marginLabel);

        margin = new QSpinBox(AreaSelectorDialog);
        margin->setObjectName(QString::fromUtf8("margin"));
        margin->setMaximum(100);
        margin->setValue(20);

        marginLayout->addWidget(margin);

        marginLayout->setStretch(0, 3);
        marginLayout->setStretch(1, 1);

        verticalLayout_2->addLayout(marginLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer);

        buttonBox = new QDialogButtonBox(AreaSelectorDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout_2->addWidget(buttonBox);


        retranslateUi(AreaSelectorDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), AreaSelectorDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), AreaSelectorDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(AreaSelectorDialog);
    } // setupUi

    void retranslateUi(QDialog *AreaSelectorDialog)
    {
        AreaSelectorDialog->setWindowTitle(QCoreApplication::translate("AreaSelectorDialog", "Select Area", nullptr));
        areaGroup->setTitle(QCoreApplication::translate("AreaSelectorDialog", "Area:", nullptr));
        boundingBox->setText(QCoreApplication::translate("AreaSelectorDialog", "All graphical elements", nullptr));
        moduleRectangle->setText(QCoreApplication::translate("AreaSelectorDialog", "Module rectangle", nullptr));
        viewport->setText(QCoreApplication::translate("AreaSelectorDialog", "Viewport", nullptr));
        marginLabel->setText(QCoreApplication::translate("AreaSelectorDialog", "Margin (px):", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AreaSelectorDialog: public Ui_AreaSelectorDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AREASELECTORDIALOG_H
