/********************************************************************************
** Form generated from reading UI file 'objfoundform.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OBJFOUNDFORM_H
#define UI_OBJFOUNDFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ObjFoundForm
{
public:
    QAction *actionAcerca_de_VigiLost;
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGridLayout *gridLayout;
    QPushButton *buscarBtn;
    QFormLayout *formLayout;
    QLabel *labelClave;
    QLineEdit *dataBuscar;
    QTableWidget *tableWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *errorBtn;
    QPushButton *lostBtn;
    QPushButton *actualizarBtn;
    QHBoxLayout *horizontalLayout_3;
    QFrame *line_2;
    QLabel *label;
    QFrame *line_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *ObjFoundForm)
    {
        if (ObjFoundForm->objectName().isEmpty())
            ObjFoundForm->setObjectName(QStringLiteral("ObjFoundForm"));
        ObjFoundForm->resize(720, 480);
        actionAcerca_de_VigiLost = new QAction(ObjFoundForm);
        actionAcerca_de_VigiLost->setObjectName(QStringLiteral("actionAcerca_de_VigiLost"));
        centralwidget = new QWidget(ObjFoundForm);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        buscarBtn = new QPushButton(centralwidget);
        buscarBtn->setObjectName(QStringLiteral("buscarBtn"));
        buscarBtn->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buscarBtn->sizePolicy().hasHeightForWidth());
        buscarBtn->setSizePolicy(sizePolicy);
        buscarBtn->setMinimumSize(QSize(100, 0));
        buscarBtn->setMaximumSize(QSize(100, 16777215));

        gridLayout->addWidget(buscarBtn, 0, 1, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelClave = new QLabel(centralwidget);
        labelClave->setObjectName(QStringLiteral("labelClave"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(labelClave->sizePolicy().hasHeightForWidth());
        labelClave->setSizePolicy(sizePolicy1);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelClave);

        dataBuscar = new QLineEdit(centralwidget);
        dataBuscar->setObjectName(QStringLiteral("dataBuscar"));
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(dataBuscar->sizePolicy().hasHeightForWidth());
        dataBuscar->setSizePolicy(sizePolicy2);

        formLayout->setWidget(0, QFormLayout::FieldRole, dataBuscar);


        gridLayout->addLayout(formLayout, 0, 0, 1, 1);

        tableWidget = new QTableWidget(centralwidget);
        if (tableWidget->columnCount() < 7)
            tableWidget->setColumnCount(7);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(6, __qtablewidgetitem6);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy3);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::SolidLine);

        gridLayout->addWidget(tableWidget, 2, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        errorBtn = new QPushButton(centralwidget);
        errorBtn->setObjectName(QStringLiteral("errorBtn"));
        sizePolicy1.setHeightForWidth(errorBtn->sizePolicy().hasHeightForWidth());
        errorBtn->setSizePolicy(sizePolicy1);
        errorBtn->setMinimumSize(QSize(100, 0));
        errorBtn->setMaximumSize(QSize(100, 16777215));
        errorBtn->setMouseTracking(false);

        verticalLayout->addWidget(errorBtn);

        lostBtn = new QPushButton(centralwidget);
        lostBtn->setObjectName(QStringLiteral("lostBtn"));
        sizePolicy1.setHeightForWidth(lostBtn->sizePolicy().hasHeightForWidth());
        lostBtn->setSizePolicy(sizePolicy1);
        lostBtn->setMinimumSize(QSize(100, 0));
        lostBtn->setMaximumSize(QSize(100, 16777215));
        lostBtn->setMouseTracking(false);

        verticalLayout->addWidget(lostBtn);

        actualizarBtn = new QPushButton(centralwidget);
        actualizarBtn->setObjectName(QStringLiteral("actualizarBtn"));
        sizePolicy1.setHeightForWidth(actualizarBtn->sizePolicy().hasHeightForWidth());
        actualizarBtn->setSizePolicy(sizePolicy1);
        actualizarBtn->setMinimumSize(QSize(100, 0));
        actualizarBtn->setMaximumSize(QSize(100, 16777215));
        actualizarBtn->setMouseTracking(false);

        verticalLayout->addWidget(actualizarBtn, 0, Qt::AlignRight);

        verticalLayout->setStretch(2, 10);

        gridLayout->addLayout(verticalLayout, 2, 1, 1, 1);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2, 0, Qt::AlignVCenter);

        label = new QLabel(centralwidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy1.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy1);

        horizontalLayout_3->addWidget(label, 0, Qt::AlignVCenter);

        line_3 = new QFrame(centralwidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_3, 0, Qt::AlignVCenter);


        gridLayout->addLayout(horizontalLayout_3, 1, 0, 1, 2);


        horizontalLayout->addLayout(gridLayout);

        ObjFoundForm->setCentralWidget(centralwidget);
        statusBar = new QStatusBar(ObjFoundForm);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ObjFoundForm->setStatusBar(statusBar);
#ifndef QT_NO_SHORTCUT
        labelClave->setBuddy(dataBuscar);
#endif // QT_NO_SHORTCUT

        retranslateUi(ObjFoundForm);

        QMetaObject::connectSlotsByName(ObjFoundForm);
    } // setupUi

    void retranslateUi(QMainWindow *ObjFoundForm)
    {
        ObjFoundForm->setWindowTitle(QApplication::translate("ObjFoundForm", "VigiLost [SERVER] - Objetos Encontrados", 0));
        actionAcerca_de_VigiLost->setText(QApplication::translate("ObjFoundForm", "Acerca de VigiLost", 0));
        buscarBtn->setText(QApplication::translate("ObjFoundForm", "Buscar", 0));
        labelClave->setText(QApplication::translate("ObjFoundForm", "Buscar palabra clave:", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ObjFoundForm", "Objeto", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ObjFoundForm", "Propietario", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ObjFoundForm", "Color/Dibujo", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ObjFoundForm", "Encontrado(a) en", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ObjFoundForm", "Otros", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ObjFoundForm", "Encontrado por", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("ObjFoundForm", "ID", 0));
        errorBtn->setText(QApplication::translate("ObjFoundForm", "Error de Proceso", 0));
        lostBtn->setText(QApplication::translate("ObjFoundForm", "-Ver Perdidos-", 0));
        actualizarBtn->setText(QApplication::translate("ObjFoundForm", "Actualizar", 0));
        label->setText(QApplication::translate("ObjFoundForm", "Objetos Encontrados", 0));
    } // retranslateUi

};

namespace Ui {
    class ObjFoundForm: public Ui_ObjFoundForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OBJFOUNDFORM_H
