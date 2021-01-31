/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.0.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAdd;
    QAction *actionEdit;
    QAction *actionRemove;
    QWidget *centralwidget;
    QGridLayout *gridLayout;
    QStackedWidget *stackedWidget;
    QWidget *ListPage;
    QGridLayout *gridLayout_2;
    QListWidget *listWidget;
    QWidget *DetailsPage;
    QGridLayout *gridLayout_3;
    QLineEdit *NameEdit;
    QLabel *Birthday;
    QPlainTextEdit *AddressEdit;
    QLabel *Name;
    QPlainTextEdit *PhoneNumbersEdit;
    QLabel *PhoneNumbers;
    QDateEdit *BirthdayEdit;
    QLabel *Address;
    QDialogButtonBox *buttonBox;
    QMenuBar *menubar;
    QMenu *menuEntries;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(361, 455);
        actionAdd = new QAction(MainWindow);
        actionAdd->setObjectName(QString::fromUtf8("actionAdd"));
        actionEdit = new QAction(MainWindow);
        actionEdit->setObjectName(QString::fromUtf8("actionEdit"));
        actionRemove = new QAction(MainWindow);
        actionRemove->setObjectName(QString::fromUtf8("actionRemove"));
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        gridLayout = new QGridLayout(centralwidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        ListPage = new QWidget();
        ListPage->setObjectName(QString::fromUtf8("ListPage"));
        gridLayout_2 = new QGridLayout(ListPage);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        listWidget = new QListWidget(ListPage);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));

        gridLayout_2->addWidget(listWidget, 0, 0, 1, 1);

        stackedWidget->addWidget(ListPage);
        DetailsPage = new QWidget();
        DetailsPage->setObjectName(QString::fromUtf8("DetailsPage"));
        gridLayout_3 = new QGridLayout(DetailsPage);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        NameEdit = new QLineEdit(DetailsPage);
        NameEdit->setObjectName(QString::fromUtf8("NameEdit"));

        gridLayout_3->addWidget(NameEdit, 0, 2, 1, 1);

        Birthday = new QLabel(DetailsPage);
        Birthday->setObjectName(QString::fromUtf8("Birthday"));

        gridLayout_3->addWidget(Birthday, 1, 0, 1, 1);

        AddressEdit = new QPlainTextEdit(DetailsPage);
        AddressEdit->setObjectName(QString::fromUtf8("AddressEdit"));

        gridLayout_3->addWidget(AddressEdit, 2, 2, 1, 1);

        Name = new QLabel(DetailsPage);
        Name->setObjectName(QString::fromUtf8("Name"));

        gridLayout_3->addWidget(Name, 0, 0, 1, 1);

        PhoneNumbersEdit = new QPlainTextEdit(DetailsPage);
        PhoneNumbersEdit->setObjectName(QString::fromUtf8("PhoneNumbersEdit"));

        gridLayout_3->addWidget(PhoneNumbersEdit, 4, 2, 1, 1);

        PhoneNumbers = new QLabel(DetailsPage);
        PhoneNumbers->setObjectName(QString::fromUtf8("PhoneNumbers"));

        gridLayout_3->addWidget(PhoneNumbers, 4, 0, 1, 1);

        BirthdayEdit = new QDateEdit(DetailsPage);
        BirthdayEdit->setObjectName(QString::fromUtf8("BirthdayEdit"));

        gridLayout_3->addWidget(BirthdayEdit, 1, 2, 1, 1);

        Address = new QLabel(DetailsPage);
        Address->setObjectName(QString::fromUtf8("Address"));

        gridLayout_3->addWidget(Address, 2, 0, 1, 2);

        buttonBox = new QDialogButtonBox(DetailsPage);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setStandardButtons(QDialogButtonBox::Discard|QDialogButtonBox::Reset|QDialogButtonBox::Save);

        gridLayout_3->addWidget(buttonBox, 5, 2, 1, 1);

        stackedWidget->addWidget(DetailsPage);

        gridLayout->addWidget(stackedWidget, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 361, 21));
        menuEntries = new QMenu(menubar);
        menuEntries->setObjectName(QString::fromUtf8("menuEntries"));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuEntries->menuAction());
        menuEntries->addAction(actionAdd);
        menuEntries->addAction(actionEdit);
        menuEntries->addAction(actionRemove);

        retranslateUi(MainWindow);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionAdd->setText(QCoreApplication::translate("MainWindow", "Add", nullptr));
        actionEdit->setText(QCoreApplication::translate("MainWindow", "Edit", nullptr));
        actionRemove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        Birthday->setText(QCoreApplication::translate("MainWindow", "Birthday", nullptr));
        Name->setText(QCoreApplication::translate("MainWindow", "Name", nullptr));
        PhoneNumbers->setText(QCoreApplication::translate("MainWindow", "PhoneNumbers", nullptr));
        Address->setText(QCoreApplication::translate("MainWindow", "Address", nullptr));
        menuEntries->setTitle(QCoreApplication::translate("MainWindow", "Entries", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
