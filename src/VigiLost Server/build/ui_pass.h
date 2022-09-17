/********************************************************************************
** Form generated from reading UI file 'pass.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PASS_H
#define UI_PASS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_pass
{
public:
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QFrame *line;
    QLabel *label_2;
    QFrame *line_2;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *passInput;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *pass)
    {
        if (pass->objectName().isEmpty())
            pass->setObjectName(QStringLiteral("pass"));
        pass->resize(380, 100);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(pass->sizePolicy().hasHeightForWidth());
        pass->setSizePolicy(sizePolicy);
        pass->setMinimumSize(QSize(380, 100));
        pass->setMaximumSize(QSize(380, 100));
        horizontalLayout_2 = new QHBoxLayout(pass);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        line = new QFrame(pass);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line, 0, Qt::AlignVCenter);

        label_2 = new QLabel(pass);
        label_2->setObjectName(QStringLiteral("label_2"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(label_2, 0, Qt::AlignVCenter);

        line_2 = new QFrame(pass);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2, 0, Qt::AlignVCenter);


        verticalLayout->addLayout(horizontalLayout);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        label = new QLabel(pass);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);
        label->setLayoutDirection(Qt::LeftToRight);
        label->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        passInput = new QLineEdit(pass);
        passInput->setObjectName(QStringLiteral("passInput"));
        passInput->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(0, QFormLayout::FieldRole, passInput);


        verticalLayout->addLayout(formLayout);

        buttonBox = new QDialogButtonBox(pass);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setAutoFillBackground(false);
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        verticalLayout->addWidget(buttonBox);


        horizontalLayout_2->addLayout(verticalLayout);


        retranslateUi(pass);
        QObject::connect(buttonBox, SIGNAL(accepted()), pass, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), pass, SLOT(reject()));

        QMetaObject::connectSlotsByName(pass);
    } // setupUi

    void retranslateUi(QDialog *pass)
    {
        pass->setWindowTitle(QApplication::translate("pass", "Ingresar Contrase\303\261a", 0));
        label_2->setText(QApplication::translate("pass", "Ingrese la contrase\303\261a para continuar:", 0));
        label->setText(QApplication::translate("pass", "Contrase\303\261a:", 0));
    } // retranslateUi

};

namespace Ui {
    class pass: public Ui_pass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PASS_H
