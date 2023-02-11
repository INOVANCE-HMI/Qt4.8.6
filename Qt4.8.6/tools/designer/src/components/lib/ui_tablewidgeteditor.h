/*
*********************************************************************
**
** Copyright (C) 2014 Digia Plc and/or its subsidiary(-ies).
** Contact: http://www.qt-project.org/legal
**
** This file is part of the Qt Designer of the Qt Toolkit.
**
** $QT_BEGIN_LICENSE:LGPL$
** Commercial License Usage
** Licensees holding valid commercial Qt licenses may use this file in
** accordance with the commercial license agreement provided with the
** Software or, alternatively, in accordance with the terms contained in
** a written agreement between you and Digia.  For licensing terms and
** conditions see http://qt.digia.com/licensing.  For further information
** use the contact form at http://qt.digia.com/contact-us.
**
** GNU Lesser General Public License Usage
** Alternatively, this file may be used under the terms of the GNU Lesser
** General Public License version 2.1 as published by the Free Software
** Foundation and appearing in the file LICENSE.LGPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU Lesser General Public License version 2.1 requirements
** will be met: http://www.gnu.org/licenses/old-licenses/lgpl-2.1.html.
**
** In addition, as a special exception, Digia gives you certain additional
** rights.  These rights are described in the Digia Qt LGPL Exception
** version 1.1, included in the file LGPL_EXCEPTION.txt in this package.
**
** GNU General Public License Usage
** Alternatively, this file may be used under the terms of the GNU
** General Public License version 3.0 as published by the Free Software
** Foundation and appearing in the file LICENSE.GPL included in the
** packaging of this file.  Please review the following information to
** ensure the GNU General Public License version 3.0 requirements will be
** met: http://www.gnu.org/copyleft/gpl.html.
**
**
** $QT_END_LICENSE$
**
*********************************************************************
*/

/********************************************************************************
** Form generated from reading UI file 'tablewidgeteditor.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TABLEWIDGETEDITOR_H
#define UI_TABLEWIDGETEDITOR_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QTableWidget>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

namespace qdesigner_internal {

class Ui_TableWidgetEditor
{
public:
    QVBoxLayout *verticalLayout;
    QTabWidget *tabWidget;
    QWidget *itemsTab;
    QVBoxLayout *verticalLayout_2;
    QWidget *widget;
    QVBoxLayout *verticalLayout_3;
    QTableWidget *tableWidget;
    QHBoxLayout *buttonsLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *showPropertiesButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *qdesigner_internal__TableWidgetEditor)
    {
        if (qdesigner_internal__TableWidgetEditor->objectName().isEmpty())
            qdesigner_internal__TableWidgetEditor->setObjectName(QString::fromUtf8("qdesigner_internal__TableWidgetEditor"));
        qdesigner_internal__TableWidgetEditor->resize(550, 360);
        verticalLayout = new QVBoxLayout(qdesigner_internal__TableWidgetEditor);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        tabWidget = new QTabWidget(qdesigner_internal__TableWidgetEditor);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        itemsTab = new QWidget();
        itemsTab->setObjectName(QString::fromUtf8("itemsTab"));
        verticalLayout_2 = new QVBoxLayout(itemsTab);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QWidget(itemsTab);
        widget->setObjectName(QString::fromUtf8("widget"));
        verticalLayout_3 = new QVBoxLayout(widget);
        verticalLayout_3->setContentsMargins(0, 0, 0, 0);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        tableWidget = new QTableWidget(widget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        verticalLayout_3->addWidget(tableWidget);

        buttonsLayout = new QHBoxLayout();
        buttonsLayout->setObjectName(QString::fromUtf8("buttonsLayout"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        buttonsLayout->addItem(horizontalSpacer);

        showPropertiesButton = new QPushButton(widget);
        showPropertiesButton->setObjectName(QString::fromUtf8("showPropertiesButton"));

        buttonsLayout->addWidget(showPropertiesButton);


        verticalLayout_3->addLayout(buttonsLayout);


        verticalLayout_2->addWidget(widget);

        tabWidget->addTab(itemsTab, QString());

        verticalLayout->addWidget(tabWidget);

        buttonBox = new QDialogButtonBox(qdesigner_internal__TableWidgetEditor);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        verticalLayout->addWidget(buttonBox);


        retranslateUi(qdesigner_internal__TableWidgetEditor);
        QObject::connect(buttonBox, SIGNAL(accepted()), qdesigner_internal__TableWidgetEditor, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), qdesigner_internal__TableWidgetEditor, SLOT(reject()));

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(qdesigner_internal__TableWidgetEditor);
    } // setupUi

    void retranslateUi(QDialog *qdesigner_internal__TableWidgetEditor)
    {
        qdesigner_internal__TableWidgetEditor->setWindowTitle(QApplication::translate("qdesigner_internal::TableWidgetEditor", "Edit Table Widget", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        tableWidget->setToolTip(QApplication::translate("qdesigner_internal::TableWidgetEditor", "Table Items", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        showPropertiesButton->setText(QApplication::translate("qdesigner_internal::TableWidgetEditor", "Properties &>>", 0, QApplication::UnicodeUTF8));
        tabWidget->setTabText(tabWidget->indexOf(itemsTab), QApplication::translate("qdesigner_internal::TableWidgetEditor", "&Items", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

} // namespace qdesigner_internal

namespace qdesigner_internal {
namespace Ui {
    class TableWidgetEditor: public Ui_TableWidgetEditor {};
} // namespace Ui
} // namespace qdesigner_internal

QT_END_NAMESPACE

#endif // UI_TABLEWIDGETEDITOR_H
