/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QWidget *verticalWidget;
    QVBoxLayout *verticalLayout;
    QVBoxLayout *verticalLayout_5;
    QLabel *label;
    QHBoxLayout *horizontalLayout;
    QLineEdit *N_carnet;
    QPushButton *Button;
    QHBoxLayout *horizontalLayout_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_8;
    QLabel *label_7;
    QLabel *label_9;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout_2;
    QLabel *label_2;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_4;
    QLabel *label_3;
    QVBoxLayout *verticalLayout_4;
    QLineEdit *v_dato;
    QLineEdit *f_dato;
    QLineEdit *volt_dato;
    QLineEdit *t_dato;
    QLineEdit *tpo_dato;
    QVBoxLayout *verticalLayout_3;
    QLineEdit *t_v;
    QLineEdit *t_f;
    QLineEdit *t_vol;
    QLineEdit *t_t;
    QLabel *label_10;
    QPushButton *actualizar;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_11;
    QLineEdit *e_dato;
    QPushButton *Bdatos;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QMenuBar *menuBar;
    QMenu *menuM;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(604, 435);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        widget = new QWidget(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(30, 20, 551, 321));
        widget->setMaximumSize(QSize(1000, 1000));
        verticalWidget = new QWidget(widget);
        verticalWidget->setObjectName(QString::fromUtf8("verticalWidget"));
        verticalWidget->setGeometry(QRect(-10, -5, 551, 311));
        verticalLayout = new QVBoxLayout(verticalWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        label = new QLabel(verticalWidget);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_5->addWidget(label, 0, Qt::AlignHCenter);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        N_carnet = new QLineEdit(verticalWidget);
        N_carnet->setObjectName(QString::fromUtf8("N_carnet"));

        horizontalLayout->addWidget(N_carnet);

        Button = new QPushButton(verticalWidget);
        Button->setObjectName(QString::fromUtf8("Button"));

        horizontalLayout->addWidget(Button);


        verticalLayout_5->addLayout(horizontalLayout);


        verticalLayout->addLayout(verticalLayout_5);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setSizeConstraint(QLayout::SetMaximumSize);
        horizontalLayout_4->setContentsMargins(22, 0, -1, 0);
        label_8 = new QLabel(verticalWidget);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setMaximumSize(QSize(16777215, 17));

        horizontalLayout_4->addWidget(label_8);

        label_7 = new QLabel(verticalWidget);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setMaximumSize(QSize(16777215, 17));

        horizontalLayout_4->addWidget(label_7);

        label_9 = new QLabel(verticalWidget);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setMaximumSize(QSize(16777215, 17));

        horizontalLayout_4->addWidget(label_9);


        horizontalLayout_3->addLayout(horizontalLayout_4);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label_2 = new QLabel(verticalWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);

        label_5 = new QLabel(verticalWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        verticalLayout_2->addWidget(label_5);

        label_6 = new QLabel(verticalWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        verticalLayout_2->addWidget(label_6);

        label_4 = new QLabel(verticalWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        verticalLayout_2->addWidget(label_4);

        label_3 = new QLabel(verticalWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        verticalLayout_2->addWidget(label_3);


        horizontalLayout_2->addLayout(verticalLayout_2);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        v_dato = new QLineEdit(verticalWidget);
        v_dato->setObjectName(QString::fromUtf8("v_dato"));

        verticalLayout_4->addWidget(v_dato);

        f_dato = new QLineEdit(verticalWidget);
        f_dato->setObjectName(QString::fromUtf8("f_dato"));

        verticalLayout_4->addWidget(f_dato);

        volt_dato = new QLineEdit(verticalWidget);
        volt_dato->setObjectName(QString::fromUtf8("volt_dato"));

        verticalLayout_4->addWidget(volt_dato);

        t_dato = new QLineEdit(verticalWidget);
        t_dato->setObjectName(QString::fromUtf8("t_dato"));

        verticalLayout_4->addWidget(t_dato);

        tpo_dato = new QLineEdit(verticalWidget);
        tpo_dato->setObjectName(QString::fromUtf8("tpo_dato"));

        verticalLayout_4->addWidget(tpo_dato);


        horizontalLayout_2->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        t_v = new QLineEdit(verticalWidget);
        t_v->setObjectName(QString::fromUtf8("t_v"));

        verticalLayout_3->addWidget(t_v);

        t_f = new QLineEdit(verticalWidget);
        t_f->setObjectName(QString::fromUtf8("t_f"));

        verticalLayout_3->addWidget(t_f);

        t_vol = new QLineEdit(verticalWidget);
        t_vol->setObjectName(QString::fromUtf8("t_vol"));

        verticalLayout_3->addWidget(t_vol);

        t_t = new QLineEdit(verticalWidget);
        t_t->setObjectName(QString::fromUtf8("t_t"));

        verticalLayout_3->addWidget(t_t);

        label_10 = new QLabel(verticalWidget);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        verticalLayout_3->addWidget(label_10);


        horizontalLayout_2->addLayout(verticalLayout_3);


        verticalLayout->addLayout(horizontalLayout_2);

        actualizar = new QPushButton(verticalWidget);
        actualizar->setObjectName(QString::fromUtf8("actualizar"));

        verticalLayout->addWidget(actualizar);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_11 = new QLabel(verticalWidget);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        horizontalLayout_5->addWidget(label_11);

        e_dato = new QLineEdit(verticalWidget);
        e_dato->setObjectName(QString::fromUtf8("e_dato"));

        horizontalLayout_5->addWidget(e_dato);

        Bdatos = new QPushButton(verticalWidget);
        Bdatos->setObjectName(QString::fromUtf8("Bdatos"));

        horizontalLayout_5->addWidget(Bdatos);


        verticalLayout->addLayout(horizontalLayout_5);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 604, 20));
        menuM = new QMenu(menuBar);
        menuM->setObjectName(QString::fromUtf8("menuM"));
        MainWindow->setMenuBar(menuBar);

        menuBar->addAction(menuM->menuAction());

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", " N\303\272mero de carnet.", nullptr));
        Button->setText(QCoreApplication::translate("MainWindow", "Ingresar", nullptr));
        label_8->setText(QString());
        label_7->setText(QCoreApplication::translate("MainWindow", "Medida", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Estado", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Velocidad", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Frecuencia", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Voltaje", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Temperatura ", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Tiempo de operacion ", nullptr));
        label_10->setText(QString());
        actualizar->setText(QCoreApplication::translate("MainWindow", "Actualizar", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Estado general del motor", nullptr));
        Bdatos->setText(QCoreApplication::translate("MainWindow", "Base de datos", nullptr));
        menuM->setTitle(QCoreApplication::translate("MainWindow", "Funcionamiento del Motor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
