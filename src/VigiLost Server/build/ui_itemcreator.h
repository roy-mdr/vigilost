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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
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
    QHBoxLayout *horizontalLayout_4;
    QGridLayout *gridLayout_2;
    QPushButton *buscarBtn;
    QTableWidget *tableWidget;
    QFormLayout *formLayout;
    QLabel *labelClave;
    QLineEdit *dataBuscar;
    QGridLayout *gridLayout;
    QLineEdit *dataPropietario;
    QLabel *labelOtro;
    QLabel *labelEncontrado;
    QLineEdit *dataObjeto;
    QLineEdit *dataOtro;
    QLabel *labelColor;
    QLineEdit *dataEncontrado;
    QLabel *labelObjeto;
    QPushButton *addObjetoBtn;
    QLineEdit *dataColor;
    QHBoxLayout *horizontalLayout_2;
    QFrame *line;
    QLabel *labelCrear;
    QFrame *line_4;
    QHBoxLayout *horizontalLayout;
    QLabel *labelPropietario;
    QSpacerItem *horizontalSpacer;
    QRadioButton *radioSin;
    QRadioButton *radioCon;
    QSpacerItem *horizontalSpacer_2;
    QVBoxLayout *verticalLayout;
    QPushButton *delBtn;
    QPushButton *foundBtn;
    QPushButton *doneBtn;
    QPushButton *actualizarBtn;
    QPushButton *saveBtn;
    QHBoxLayout *horizontalLayout_3;
    QFrame *line_2;
    QLabel *label;
    QFrame *line_3;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuAcerca_del_Programa;

    void setupUi(QMainWindow *ItemCreator)
    {
        if (ItemCreator->objectName().isEmpty())
            ItemCreator->setObjectName(QStringLiteral("ItemCreator"));
        ItemCreator->resize(720, 550);
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
        horizontalLayout_4 = new QHBoxLayout(centralWidget);
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        gridLayout_2 = new QGridLayout();
        gridLayout_2->setSpacing(6);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        buscarBtn = new QPushButton(centralWidget);
        buscarBtn->setObjectName(QStringLiteral("buscarBtn"));
        buscarBtn->setEnabled(true);
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(buscarBtn->sizePolicy().hasHeightForWidth());
        buscarBtn->setSizePolicy(sizePolicy);
        buscarBtn->setMinimumSize(QSize(100, 0));
        buscarBtn->setMaximumSize(QSize(100, 16777215));

        gridLayout_2->addWidget(buscarBtn, 0, 1, 1, 1);

        tableWidget = new QTableWidget(centralWidget);
        if (tableWidget->columnCount() < 5)
            tableWidget->setColumnCount(5);
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
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tableWidget->sizePolicy().hasHeightForWidth());
        tableWidget->setSizePolicy(sizePolicy1);
        tableWidget->setAlternatingRowColors(true);
        tableWidget->setShowGrid(true);
        tableWidget->setGridStyle(Qt::SolidLine);

        gridLayout_2->addWidget(tableWidget, 2, 0, 1, 1);

        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        labelClave = new QLabel(centralWidget);
        labelClave->setObjectName(QStringLiteral("labelClave"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(labelClave->sizePolicy().hasHeightForWidth());
        labelClave->setSizePolicy(sizePolicy2);

        formLayout->setWidget(0, QFormLayout::LabelRole, labelClave);

        dataBuscar = new QLineEdit(centralWidget);
        dataBuscar->setObjectName(QStringLiteral("dataBuscar"));

        formLayout->setWidget(0, QFormLayout::FieldRole, dataBuscar);


        gridLayout_2->addLayout(formLayout, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        dataPropietario = new QLineEdit(centralWidget);
        dataPropietario->setObjectName(QStringLiteral("dataPropietario"));
        dataPropietario->setEnabled(true);

        gridLayout->addWidget(dataPropietario, 3, 1, 1, 1);

        labelOtro = new QLabel(centralWidget);
        labelOtro->setObjectName(QStringLiteral("labelOtro"));
        sizePolicy.setHeightForWidth(labelOtro->sizePolicy().hasHeightForWidth());
        labelOtro->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelOtro, 7, 0, 1, 2);

        labelEncontrado = new QLabel(centralWidget);
        labelEncontrado->setObjectName(QStringLiteral("labelEncontrado"));
        sizePolicy.setHeightForWidth(labelEncontrado->sizePolicy().hasHeightForWidth());
        labelEncontrado->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelEncontrado, 5, 1, 1, 1);

        dataObjeto = new QLineEdit(centralWidget);
        dataObjeto->setObjectName(QStringLiteral("dataObjeto"));

        gridLayout->addWidget(dataObjeto, 3, 0, 1, 1);

        dataOtro = new QLineEdit(centralWidget);
        dataOtro->setObjectName(QStringLiteral("dataOtro"));

        gridLayout->addWidget(dataOtro, 8, 0, 1, 2);

        labelColor = new QLabel(centralWidget);
        labelColor->setObjectName(QStringLiteral("labelColor"));
        sizePolicy.setHeightForWidth(labelColor->sizePolicy().hasHeightForWidth());
        labelColor->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelColor, 5, 0, 1, 1);

        dataEncontrado = new QLineEdit(centralWidget);
        dataEncontrado->setObjectName(QStringLiteral("dataEncontrado"));

        gridLayout->addWidget(dataEncontrado, 6, 1, 1, 1);

        labelObjeto = new QLabel(centralWidget);
        labelObjeto->setObjectName(QStringLiteral("labelObjeto"));
        sizePolicy.setHeightForWidth(labelObjeto->sizePolicy().hasHeightForWidth());
        labelObjeto->setSizePolicy(sizePolicy);

        gridLayout->addWidget(labelObjeto, 1, 0, 1, 1);

        addObjetoBtn = new QPushButton(centralWidget);
        addObjetoBtn->setObjectName(QStringLiteral("addObjetoBtn"));
        addObjetoBtn->setEnabled(true);
        QSizePolicy sizePolicy3(QSizePolicy::Expanding, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(addObjetoBtn->sizePolicy().hasHeightForWidth());
        addObjetoBtn->setSizePolicy(sizePolicy3);
        addObjetoBtn->setMinimumSize(QSize(0, 50));
        addObjetoBtn->setMaximumSize(QSize(16777215, 16777215));

        gridLayout->addWidget(addObjetoBtn, 9, 0, 1, 2);

        dataColor = new QLineEdit(centralWidget);
        dataColor->setObjectName(QStringLiteral("dataColor"));

        gridLayout->addWidget(dataColor, 6, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        line = new QFrame(centralWidget);
        line->setObjectName(QStringLiteral("line"));
        sizePolicy3.setHeightForWidth(line->sizePolicy().hasHeightForWidth());
        line->setSizePolicy(sizePolicy3);
        line->setMinimumSize(QSize(0, 15));
        line->setMaximumSize(QSize(16777215, 15));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line, 0, Qt::AlignBottom);

        labelCrear = new QLabel(centralWidget);
        labelCrear->setObjectName(QStringLiteral("labelCrear"));
        sizePolicy.setHeightForWidth(labelCrear->sizePolicy().hasHeightForWidth());
        labelCrear->setSizePolicy(sizePolicy);
        labelCrear->setMinimumSize(QSize(0, 15));
        labelCrear->setMaximumSize(QSize(16777215, 15));

        horizontalLayout_2->addWidget(labelCrear, 0, Qt::AlignBottom);

        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QStringLiteral("line_4"));
        sizePolicy3.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy3);
        line_4->setMinimumSize(QSize(0, 15));
        line_4->setMaximumSize(QSize(16777215, 15));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        horizontalLayout_2->addWidget(line_4, 0, Qt::AlignBottom);


        gridLayout->addLayout(horizontalLayout_2, 0, 0, 1, 2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(0);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        labelPropietario = new QLabel(centralWidget);
        labelPropietario->setObjectName(QStringLiteral("labelPropietario"));
        sizePolicy.setHeightForWidth(labelPropietario->sizePolicy().hasHeightForWidth());
        labelPropietario->setSizePolicy(sizePolicy);

        horizontalLayout->addWidget(labelPropietario);

        horizontalSpacer = new QSpacerItem(40, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        radioSin = new QRadioButton(centralWidget);
        radioSin->setObjectName(QStringLiteral("radioSin"));

        horizontalLayout->addWidget(radioSin);

        radioCon = new QRadioButton(centralWidget);
        radioCon->setObjectName(QStringLiteral("radioCon"));
        radioCon->setChecked(true);

        horizontalLayout->addWidget(radioCon);

        horizontalSpacer_2 = new QSpacerItem(40, 5, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);


        gridLayout->addLayout(horizontalLayout, 1, 1, 1, 1);


        gridLayout_2->addLayout(gridLayout, 3, 0, 1, 2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        delBtn = new QPushButton(centralWidget);
        delBtn->setObjectName(QStringLiteral("delBtn"));
        sizePolicy2.setHeightForWidth(delBtn->sizePolicy().hasHeightForWidth());
        delBtn->setSizePolicy(sizePolicy2);
        delBtn->setMinimumSize(QSize(100, 0));
        delBtn->setMaximumSize(QSize(100, 16777215));
        delBtn->setMouseTracking(false);

        verticalLayout->addWidget(delBtn);

        foundBtn = new QPushButton(centralWidget);
        foundBtn->setObjectName(QStringLiteral("foundBtn"));
        sizePolicy2.setHeightForWidth(foundBtn->sizePolicy().hasHeightForWidth());
        foundBtn->setSizePolicy(sizePolicy2);
        foundBtn->setMinimumSize(QSize(100, 0));
        foundBtn->setMaximumSize(QSize(100, 16777215));
        foundBtn->setMouseTracking(false);

        verticalLayout->addWidget(foundBtn);

        doneBtn = new QPushButton(centralWidget);
        doneBtn->setObjectName(QStringLiteral("doneBtn"));
        sizePolicy2.setHeightForWidth(doneBtn->sizePolicy().hasHeightForWidth());
        doneBtn->setSizePolicy(sizePolicy2);
        doneBtn->setMinimumSize(QSize(100, 0));
        doneBtn->setMaximumSize(QSize(100, 16777215));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        QBrush brush1(QColor(85, 255, 0, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush1);
        QBrush brush2(QColor(170, 255, 127, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush2);
        QBrush brush3(QColor(127, 255, 63, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush3);
        QBrush brush4(QColor(42, 127, 0, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush4);
        QBrush brush5(QColor(56, 170, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        QBrush brush6(QColor(255, 255, 255, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette.setBrush(QPalette::Active, QPalette::Window, brush1);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush2);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        doneBtn->setPalette(palette);

        verticalLayout->addWidget(doneBtn);

        actualizarBtn = new QPushButton(centralWidget);
        actualizarBtn->setObjectName(QStringLiteral("actualizarBtn"));
        sizePolicy2.setHeightForWidth(actualizarBtn->sizePolicy().hasHeightForWidth());
        actualizarBtn->setSizePolicy(sizePolicy2);
        actualizarBtn->setMinimumSize(QSize(100, 0));
        actualizarBtn->setMaximumSize(QSize(100, 16777215));
        actualizarBtn->setMouseTracking(false);

        verticalLayout->addWidget(actualizarBtn, 0, Qt::AlignRight);

        saveBtn = new QPushButton(centralWidget);
        saveBtn->setObjectName(QStringLiteral("saveBtn"));
        sizePolicy2.setHeightForWidth(saveBtn->sizePolicy().hasHeightForWidth());
        saveBtn->setSizePolicy(sizePolicy2);
        saveBtn->setMinimumSize(QSize(100, 0));
        saveBtn->setMaximumSize(QSize(100, 16777215));
        saveBtn->setMouseTracking(false);

        verticalLayout->addWidget(saveBtn, 0, Qt::AlignRight);

        verticalLayout->setStretch(2, 80);
        verticalLayout->setStretch(3, 10);
        verticalLayout->setStretch(4, 10);

        gridLayout_2->addLayout(verticalLayout, 2, 1, 1, 1);

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
        sizePolicy2.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy2);

        horizontalLayout_3->addWidget(label, 0, Qt::AlignVCenter);

        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line_3, 0, Qt::AlignVCenter);


        gridLayout_2->addLayout(horizontalLayout_3, 1, 0, 1, 2);


        horizontalLayout_4->addLayout(gridLayout_2);

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
        labelOtro->setBuddy(dataOtro);
        labelEncontrado->setBuddy(dataEncontrado);
        labelColor->setBuddy(dataColor);
        labelObjeto->setBuddy(dataObjeto);
        labelPropietario->setBuddy(dataPropietario);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(dataObjeto, radioSin);
        QWidget::setTabOrder(radioSin, radioCon);
        QWidget::setTabOrder(radioCon, dataPropietario);
        QWidget::setTabOrder(dataPropietario, dataColor);
        QWidget::setTabOrder(dataColor, dataEncontrado);
        QWidget::setTabOrder(dataEncontrado, dataOtro);
        QWidget::setTabOrder(dataOtro, addObjetoBtn);
        QWidget::setTabOrder(addObjetoBtn, dataBuscar);
        QWidget::setTabOrder(dataBuscar, buscarBtn);
        QWidget::setTabOrder(buscarBtn, tableWidget);
        QWidget::setTabOrder(tableWidget, delBtn);
        QWidget::setTabOrder(delBtn, doneBtn);
        QWidget::setTabOrder(doneBtn, actualizarBtn);
        QWidget::setTabOrder(actualizarBtn, saveBtn);

        menuBar->addAction(menuAcerca_del_Programa->menuAction());
        menuAcerca_del_Programa->addAction(actionAcerca_de_VigiLost);

        retranslateUi(ItemCreator);
        QObject::connect(dataObjeto, SIGNAL(returnPressed()), addObjetoBtn, SLOT(click()));
        QObject::connect(dataPropietario, SIGNAL(returnPressed()), addObjetoBtn, SLOT(click()));
        QObject::connect(dataColor, SIGNAL(returnPressed()), addObjetoBtn, SLOT(click()));
        QObject::connect(dataEncontrado, SIGNAL(returnPressed()), addObjetoBtn, SLOT(click()));
        QObject::connect(dataOtro, SIGNAL(returnPressed()), addObjetoBtn, SLOT(click()));

        QMetaObject::connectSlotsByName(ItemCreator);
    } // setupUi

    void retranslateUi(QMainWindow *ItemCreator)
    {
        ItemCreator->setWindowTitle(QApplication::translate("ItemCreator", "VigiLost [SERVER] - Objetos Perdidos | Crear Objeto", 0));
        actionAcerca_de_VigiLost->setText(QApplication::translate("ItemCreator", "Acerca de VigiLost", 0));
        buscarBtn->setText(QApplication::translate("ItemCreator", "Buscar", 0));
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
        labelClave->setText(QApplication::translate("ItemCreator", "Buscar palabra clave:", 0));
        labelOtro->setText(QApplication::translate("ItemCreator", "Otros (separados, por, comas):", 0));
        labelEncontrado->setText(QApplication::translate("ItemCreator", "Encontrado(a) en:", 0));
        labelColor->setText(QApplication::translate("ItemCreator", "Color/ Dibujo:", 0));
        labelObjeto->setText(QApplication::translate("ItemCreator", "Objeto:", 0));
        addObjetoBtn->setText(QApplication::translate("ItemCreator", "A\303\261adir objeto", 0));
        labelCrear->setText(QApplication::translate("ItemCreator", "Crear Objeto:", 0));
        labelPropietario->setText(QApplication::translate("ItemCreator", "Propietario:", 0));
        radioSin->setText(QApplication::translate("ItemCreator", "Sin Nombre", 0));
        radioCon->setText(QApplication::translate("ItemCreator", "Con Nombre:", 0));
        delBtn->setText(QApplication::translate("ItemCreator", "Quitar Objeto", 0));
        foundBtn->setText(QApplication::translate("ItemCreator", "-Ver Encontrados-", 0));
        doneBtn->setText(QApplication::translate("ItemCreator", "\302\241ENCONTRADO!", 0));
        actualizarBtn->setText(QApplication::translate("ItemCreator", "Actualizar", 0));
        saveBtn->setText(QApplication::translate("ItemCreator", "Guardar", 0));
        label->setText(QApplication::translate("ItemCreator", "Objetos Perdidos", 0));
        menuAcerca_del_Programa->setTitle(QApplication::translate("ItemCreator", "Acerca de", 0));
    } // retranslateUi

};

namespace Ui {
    class ItemCreator: public Ui_ItemCreator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ITEMCREATOR_H
