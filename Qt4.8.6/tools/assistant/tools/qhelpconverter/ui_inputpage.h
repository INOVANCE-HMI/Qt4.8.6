/********************************************************************************
** Form generated from reading UI file 'inputpage.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPUTPAGE_H
#define UI_INPUTPAGE_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QToolButton>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_InputPage
{
public:
    QGridLayout *gridLayout;
    QSpacerItem *spacerItem;
    QLabel *label;
    QHBoxLayout *hboxLayout;
    QLineEdit *fileLineEdit;
    QToolButton *browseButton;
    QSpacerItem *spacerItem1;

    void setupUi(QWidget *InputPage)
    {
        if (InputPage->objectName().isEmpty())
            InputPage->setObjectName(QString::fromUtf8("InputPage"));
        InputPage->resize(417, 242);
        gridLayout = new QGridLayout(InputPage);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        spacerItem = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Fixed);

        gridLayout->addItem(spacerItem, 0, 2, 1, 1);

        label = new QLabel(InputPage);
        label->setObjectName(QString::fromUtf8("label"));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);

        gridLayout->addWidget(label, 1, 0, 1, 1);

        hboxLayout = new QHBoxLayout();
        hboxLayout->setSpacing(0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));
        fileLineEdit = new QLineEdit(InputPage);
        fileLineEdit->setObjectName(QString::fromUtf8("fileLineEdit"));

        hboxLayout->addWidget(fileLineEdit);

        browseButton = new QToolButton(InputPage);
        browseButton->setObjectName(QString::fromUtf8("browseButton"));

        hboxLayout->addWidget(browseButton);


        gridLayout->addLayout(hboxLayout, 1, 1, 1, 2);

        spacerItem1 = new QSpacerItem(20, 31, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(spacerItem1, 2, 1, 1, 1);


        retranslateUi(InputPage);

        QMetaObject::connectSlotsByName(InputPage);
    } // setupUi

    void retranslateUi(QWidget *InputPage)
    {
        InputPage->setWindowTitle(QApplication::translate("InputPage", "Form", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("InputPage", "File name:", 0, QApplication::UnicodeUTF8));
        browseButton->setText(QApplication::translate("InputPage", "...", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class InputPage: public Ui_InputPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPUTPAGE_H
