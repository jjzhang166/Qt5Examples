/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created by: Qt User Interface Compiler version 5.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_AreaCounterDialog
{
public:
    QWidget *centralWidget;
    QLabel *radiusLabel;
    QLabel *areaLabel_1;
    QLabel *areaLabel_2;
    QLineEdit *radiusLabelEdit;
    QPushButton *countButton;
    QPushButton *exitButton;

    void setupUi(QMainWindow *AreaCounterDialog)
    {
        if (AreaCounterDialog->objectName().isEmpty())
            AreaCounterDialog->setObjectName(QStringLiteral("AreaCounterDialog"));
        AreaCounterDialog->setEnabled(true);
        AreaCounterDialog->resize(294, 91);
        AreaCounterDialog->setMaximumSize(QSize(294, 91));
        QIcon icon;
        icon.addFile(QStringLiteral(":/ico/ico/Tools_24px.ico"), QSize(), QIcon::Normal, QIcon::Off);
        AreaCounterDialog->setWindowIcon(icon);
        centralWidget = new QWidget(AreaCounterDialog);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        radiusLabel = new QLabel(centralWidget);
        radiusLabel->setObjectName(QStringLiteral("radiusLabel"));
        radiusLabel->setGeometry(QRect(20, 20, 31, 16));
        areaLabel_1 = new QLabel(centralWidget);
        areaLabel_1->setObjectName(QStringLiteral("areaLabel_1"));
        areaLabel_1->setGeometry(QRect(20, 60, 31, 16));
        areaLabel_2 = new QLabel(centralWidget);
        areaLabel_2->setObjectName(QStringLiteral("areaLabel_2"));
        areaLabel_2->setGeometry(QRect(60, 60, 121, 16));
        areaLabel_2->setFrameShape(QFrame::Panel);
        areaLabel_2->setFrameShadow(QFrame::Sunken);
        radiusLabelEdit = new QLineEdit(centralWidget);
        radiusLabelEdit->setObjectName(QStringLiteral("radiusLabelEdit"));
        radiusLabelEdit->setGeometry(QRect(60, 20, 121, 20));
        countButton = new QPushButton(centralWidget);
        countButton->setObjectName(QStringLiteral("countButton"));
        countButton->setGeometry(QRect(200, 16, 75, 23));
        exitButton = new QPushButton(centralWidget);
        exitButton->setObjectName(QStringLiteral("exitButton"));
        exitButton->setGeometry(QRect(200, 56, 75, 23));
        exitButton->setDefault(false);
        exitButton->setFlat(false);
        AreaCounterDialog->setCentralWidget(centralWidget);

        retranslateUi(AreaCounterDialog);
        QObject::connect(exitButton, SIGNAL(clicked()), AreaCounterDialog, SLOT(close()));

        QMetaObject::connectSlotsByName(AreaCounterDialog);
    } // setupUi

    void retranslateUi(QMainWindow *AreaCounterDialog)
    {
        AreaCounterDialog->setWindowTitle(QApplication::translate("AreaCounterDialog", "\345\234\206\351\235\242\347\247\257\350\256\241\347\256\227\345\267\245\345\205\2670.1V", 0));
        radiusLabel->setText(QApplication::translate("AreaCounterDialog", "\345\215\212\345\276\204\357\274\232", 0));
        areaLabel_1->setText(QApplication::translate("AreaCounterDialog", "\351\235\242\347\247\257\357\274\232", 0));
        areaLabel_2->setText(QApplication::translate("AreaCounterDialog", "0.0", 0));
        radiusLabelEdit->setText(QApplication::translate("AreaCounterDialog", "0.0", 0));
        countButton->setText(QApplication::translate("AreaCounterDialog", "\351\207\215\347\275\256", 0));
        exitButton->setText(QApplication::translate("AreaCounterDialog", "\351\200\200\345\207\272", 0));
    } // retranslateUi

};

namespace Ui {
    class AreaCounterDialog: public Ui_AreaCounterDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
