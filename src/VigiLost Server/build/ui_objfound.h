/********************************************************************************
** Form generated from reading UI file 'objfound.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJFOUND_H
#define UI_OBJFOUND_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>

QT_BEGIN_NAMESPACE

class Ui_objFound
{
public:
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout;
    QLabel *labelID;
    QLabel *labelNombre;
    QHBoxLayout *horizontalLayout;
    QFrame *line;
    QLabel *label_4;
    QFrame *line_2;
    QLineEdit *foundNombre;
    QDialogButtonBox *buttonBox;
    QLineEdit *foundID;
    QLabel *label;

    void setupUi(QDialog *objFound)
    {
        if (objFound->objectName().isEmpty())
            objFound->setObjectName(QStringLiteral("objFound"));
        objFound->resize(400, 120);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(objFound->sizePolicy().hasHeightForWidth());
        objFound->setSizePolicy(sizePolicy);
        objFound->setMinimumSize(QSize(400, 120));
        objFound->setMaximumSize(QSize(400, 120));
        horizontalLayout_2 = new QHBoxLayout(objFound);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        labelID = new QLabel(objFound);
        labelID->setObjectName(QStringLiteral("labelID"));
        labelID->setLayoutDirection(Qt::LeftToRight);

        gridLayout->addWidget(labelID, 3, 0, 1, 1, Qt::AlignRight);

        labelNombre = new QLabel(objFound);
        labelNombre->setObjectName(QStringLiteral("labelNombre"));

        gridLayout->addWidget(labelNombre, 2, 0, 1, 1, Qt::AlignRight);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        line = new QFrame(objFound);
        line->setObjectName(QStringLiteral("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line);

        label_4 = new QLabel(objFound);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout->addWidget(label_4);

        line_2 = new QFrame(objFound);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout->addWidget(line_2);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 3);

        foundNombre = new QLineEdit(objFound);
        foundNombre->setObjectName(QStringLiteral("foundNombre"));

        gridLayout->addWidget(foundNombre, 2, 1, 1, 2);

        buttonBox = new QDialogButtonBox(objFound);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        sizePolicy.setHeightForWidth(buttonBox->sizePolicy().hasHeightForWidth());
        buttonBox->setSizePolicy(sizePolicy);
        buttonBox->setMinimumSize(QSize(160, 20));
        buttonBox->setSizeIncrement(QSize(160, 20));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        gridLayout->addWidget(buttonBox, 3, 2, 1, 1, Qt::AlignRight);

        foundID = new QLineEdit(objFound);
        foundID->setObjectName(QStringLiteral("foundID"));
        foundID->setInputMethodHints(Qt::ImhDigitsOnly);
        foundID->setMaxLength(6);
        foundID->setFrame(true);

        gridLayout->addWidget(foundID, 3, 1, 1, 1);

        label = new QLabel(objFound);
        label->setObjectName(QStringLiteral("label"));
        QFont font;
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label->setTextFormat(Qt::AutoText);
        label->setScaledContents(false);
        label->setAlignment(Qt::AlignCenter);
        label->setWordWrap(false);

        gridLayout->addWidget(label, 0, 0, 1, 3);


        horizontalLayout_2->addLayout(gridLayout);

        QWidget::setTabOrder(foundNombre, foundID);

        retranslateUi(objFound);
        QObject::connect(buttonBox, SIGNAL(accepted()), objFound, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), objFound, SLOT(reject()));

        QMetaObject::connectSlotsByName(objFound);
    } // setupUi

    void retranslateUi(QDialog *objFound)
    {
        objFound->setWindowTitle(QApplication::translate("objFound", "Objeto Encontrado", 0));
        labelID->setText(QApplication::translate("objFound", "ID:", 0));
        labelNombre->setText(QApplication::translate("objFound", "Nombre:", 0));
        label_4->setText(QApplication::translate("objFound", "\302\277Qui\303\251n recoge el objeto?", 0));
        foundID->setInputMask(QString());
        foundID->setText(QString());
        label->setText(QApplication::translate("objFound", "\302\241FELICIDADES!", 0));
    } // retranslateUi

};

namespace Ui {
    class objFound: public Ui_objFound {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJFOUND_H
