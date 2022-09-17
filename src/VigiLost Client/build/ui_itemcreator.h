/********************************************************************************
** Form generated from reading UI file 'itemcreator.ui'
**
** Created by: Qt User Interface Compiler version 5.6.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ITEMCREATOR_H
#define UI_ITEMCREATOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ItemCreator
{
public:
    QAction *actionAcerca_de_VigiLost;
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *labelClave;
    QLineEdit *dataBuscar;
    QHBoxLayout *horizontalLayout;
    QHBoxLayout *horizontalLayout_2;
    QRadioButton *radioPerdidos;
    QRadioButton *radioEncontrados;
    QPushButton *actualizarBtn;
    QHBoxLayout *horizontalLayout_3;
    QFrame *line_2;
    QLabel *label;
    QFrame *line_3;
    QTableWidget *tableWidget;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuAcerca_del_Programa;

    void setupUi(QMainWindow *ItemCreator)
    {
        if (ItemCreator->objectName().isEmpty())
            ItemCreator->setObjectName(QStringLiteral("ItemCreator"));
        ItemCreator->resize(720, 480);
        QIcon icon;
        QString iconThemeName = QStringLiteral("VigiIcon");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("vigi.png"), QSize(), QIcon::Normal, QIcon::Off);
        }
        ItemCreator->setWindowIcon(icon);
        ItemCreator->setWindowOpacity(1);
        actionAcerca_de_VigiLost = new QAction(ItemCreator);
        actionAcerca_de_VigiLost->setObjectName(QStringLiteral("actionAcerca_de_VigiLost"));
        centralWidget = new QWidget(ItemCreator);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        verticalLayout = new QVBoxLayout(centralWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelClave = new QLabel(centralWidget);
        labelClave->setObjectName(QStringLiteral("labelClave"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(labelClave->sizePolicy().hasHeightForWidth());
        labelClave->setSizePolicy(sizePolicy);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelClave);

        dataBuscar = new QLineEdit(centralWidget);
        dataBuscar->setObjectName(QStringLiteral("dataBuscar"));

        formLayout->setWidget(0, QFormLayout::FieldRole, dataBuscar);


        verticalLayout->addLayout(formLayout);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setSizeConstraint(QLayout::SetFixedSize);
        radioPerdidos = new QRadioButton(centralWidget);
        radioPerdidos->setObjectName(QStringLiteral("radioPerdidos"));
        radioPerdidos->setMinimumSize(QSize(123, 17));
        radioPerdidos->setMaximumSize(QSize(124, 17));
        radioPerdidos->setChecked(true);

        horizontalLayout_2->addWidget(radioPerdidos);

        radioEncontrados = new QRadioButton(centralWidget);
        radioEncontrados->setObjectName(QStringLiteral("radioEncontrados"));
        radioEncontrados->setMinimumSize(QSize(124, 17));
        radioEncontrados->setMaximumSize(QSize(124, 17));
        radioEncontrados->setChecked(false);

        horizontalLayout_2->addWidget(radioEncontrados);


        horizontalLayout->addLayout(horizontalLayout_2);

        actualizarBtn = new QPushButton(centralWidget);
        actualizarBtn->setObjectName(QStringLiteral("actualizarBtn"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(actualizarBtn->sizePolicy().hasHeightForWidth());
        actualizarBtn->setSizePolicy(sizePolicy1);
        actualizarBtn->setMinimumSize(QSize(100, 0));
        actualizarBtn->setMaximumSize(QSize(100, 16777215));
        actualizarBtn->setMouseTracking(false);

        horizontalLayout->addWidget(actualizarBtn, 0, Qt::AlignRight);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_2, 0, Qt::AlignVCenter);

        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        horizontalLayout_3->addWidget(label);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_3, 0, Qt::AlignVCenter);


        verticalLayout->addLayout(horizontalLayout_3);

        tableWidget = new QTableWidget(centralWidget);
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
        QSizePolicy sizePolicy2(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy2);
        tableWidget->setEditTriggers(QAbstractItemView::NoEditTriggers);
        tableWidget->setTabKeyNavigation(false);
        tableWidget->setProperty("showDropIndicator", QVariant(false));
        tableWidget->setDragDropOverwriteMode(false);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::SolidLine);

        verticalLayout->addWidget(tableWidget);

        ItemCreator->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(ItemCreator);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        ItemCreator->setStatusBar(statusBar);
        menuBar = new QMenuBar(ItemCreator);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 720, 21));
        menuAcerca_del_Programa = new QMenu(menuBar);
        menuAcerca_del_Programa->setObjectName(QStringLiteral("menuAcerca_del_Programa"));
        ItemCreator->setMenuBar(menuBar);
#ifndef QT_NO_SHORTCUT
        labelClave->setBuddy(dataBuscar);
#endif // QT_NO_SHORTCUT

        menuBar->addAction(menuAcerca_del_Programa->menuAction());
        menuAcerca_del_Programa->addAction(actionAcerca_de_VigiLost);

        retranslateUi(ItemCreator);

        QMetaObject::connectSlotsByName(ItemCreator);
    } // setupUi

    void retranslateUi(QMainWindow *ItemCreator)
    {
        ItemCreator->setWindowTitle(QApplication::translate("ItemCreator", "VigiLost", 0));
        actionAcerca_de_VigiLost->setText(QApplication::translate("ItemCreator", "Acerca de VigiLost", 0));
        labelClave->setText(QApplication::translate("ItemCreator", "Buscar palabra clave:", 0));
        radioPerdidos->setText(QApplication::translate("ItemCreator", "Objetos Perdidos", 0));
        radioEncontrados->setText(QApplication::translate("ItemCreator", "Objetos Encontrados", 0));
        actualizarBtn->setText(QApplication::translate("ItemCreator", "Actualizar", 0));
        label->setText(QApplication::translate("ItemCreator", "label objetos", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("ItemCreator", "Objeto", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("ItemCreator", "Propietario", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("ItemCreator", "Color/Dibujo", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("ItemCreator", "Encontrado(a) en", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("ItemCreator", "Otros", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("ItemCreator", "Encontrado por", 0));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget->horizontalHeaderItem(6);
        ___qtablewidgetitem6->setText(QApplication::translate("ItemCreator", "ID", 0));
        menuAcerca_del_Programa->setTitle(QApplication::translate("ItemCreator", "Acerca de", 0));
    } // retranslateUi

};

namespace Ui {
    class ItemCreator: public Ui_ItemCreator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMCREATOR_H
