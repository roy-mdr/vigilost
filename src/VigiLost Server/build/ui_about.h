/********************************************************************************
** Form generated from reading UI file 'about.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ABOUT_H
#define UI_ABOUT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_About
{
public:
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QLabel *label_4;
    QLabel *label_5;
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_6;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *About)
    {
        if (About->objectName().isEmpty())
            About->setObjectName(QStringLiteral("About"));
        About->resize(280, 190);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(About->sizePolicy().hasHeightForWidth());
        About->setSizePolicy(sizePolicy);
        About->setMinimumSize(QSize(280, 190));
        About->setMaximumSize(QSize(280, 190));
        QFont font;
        font.setStyleStrategy(QFont::PreferDefault);
        About->setFont(font);
        horizontalLayout = new QHBoxLayout(About);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_4 = new QLabel(About);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setMaximumSize(QSize(16777215, 20));
        QFont font1;
        font1.setPointSize(7);
        label_4->setFont(font1);

        gridLayout->addWidget(label_4, 2, 1, 1, 1, Qt::AlignRight);

        label_5 = new QLabel(About);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setMaximumSize(QSize(16777215, 14));
        QFont font2;
        font2.setPointSize(7);
        font2.setStyleStrategy(QFont::PreferDefault);
        label_5->setFont(font2);

        gridLayout->addWidget(label_5, 2, 0, 1, 1, Qt::AlignLeft);

        groupBox = new QGroupBox(About);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        QFont font3;
        font3.setBold(false);
        font3.setItalic(true);
        font3.setUnderline(false);
        font3.setWeight(50);
        font3.setStrikeOut(false);
        font3.setKerning(true);
        font3.setStyleStrategy(QFont::PreferDefault);
        groupBox->setFont(font3);
        label = new QLabel(groupBox);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 221, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 40, 221, 16));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(20, 60, 221, 16));

        gridLayout->addWidget(groupBox, 1, 0, 1, 2);

        label_6 = new QLabel(About);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 23));
        QFont font4;
        font4.setPointSize(12);
        font4.setBold(true);
        font4.setItalic(false);
        font4.setWeight(75);
        label_6->setFont(font4);

        gridLayout->addWidget(label_6, 0, 0, 1, 2, Qt::AlignHCenter);

        buttonBox = new QDialogButtonBox(About);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Ok);
        buttonBox->setCenterButtons(true);

        gridLayout->addWidget(buttonBox, 3, 0, 1, 2);


        horizontalLayout->addLayout(gridLayout);


        retranslateUi(About);
        QObject::connect(buttonBox, SIGNAL(accepted()), About, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), About, SLOT(reject()));

        QMetaObject::connectSlotsByName(About);
    } // setupUi

    void retranslateUi(QDialog *About)
    {
        About->setWindowTitle(QApplication::translate("About", "- Acerca de VigiLost -", 0));
        label_4->setText(QApplication::translate("About", "Copyright \302\251 2016", 0));
        label_5->setText(QApplication::translate("About", "* Usted est\303\241 utilizando este programa.", 0));
        groupBox->setTitle(QApplication::translate("About", "Cr\303\251ditos", 0));
        label->setText(QApplication::translate("About", "VigiLost [SERVER]*: Rodrigo Mart\303\255nez Del R\303\255o", 0));
        label_2->setText(QApplication::translate("About", "VigiLost [CLIENT]: Rodrigo Mart\303\255nez Del R\303\255o", 0));
        label_3->setText(QApplication::translate("About", "Imagen: Sebasti\303\241n \303\201vila Z\303\272\303\261iga", 0));
        label_6->setText(QApplication::translate("About", "- Acerca de VigiLost -", 0));
    } // retranslateUi

};

namespace Ui {
    class About: public Ui_About {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ABOUT_H
