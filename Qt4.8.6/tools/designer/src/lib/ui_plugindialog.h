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
** Form generated from reading UI file 'plugindialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PLUGINDIALOG_H
#define UI_PLUGINDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QTreeWidget>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PluginDialog
{
public:
    QVBoxLayout *vboxLayout;
    QLabel *label;
    QTreeWidget *treeWidget;
    QLabel *message;
    QHBoxLayout *hboxLayout;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *PluginDialog)
    {
        if (PluginDialog->objectName().isEmpty())
            PluginDialog->setObjectName(QString::fromUtf8("PluginDialog"));
        PluginDialog->resize(401, 331);
        vboxLayout = new QVBoxLayout(PluginDialog);
#ifndef Q_OS_MAC
        vboxLayout->setSpacing(6);
#endif
        vboxLayout->setContentsMargins(8, 8, 8, 8);
        vboxLayout->setObjectName(QString::fromUtf8("vboxLayout"));
        label = new QLabel(PluginDialog);
        label->setObjectName(QString::fromUtf8("label"));
        label->setText(QString::fromUtf8("TextLabel"));
        label->setWordWrap(true);

        vboxLayout->addWidget(label);

        treeWidget = new QTreeWidget(PluginDialog);
        treeWidget->setObjectName(QString::fromUtf8("treeWidget"));
        treeWidget->setTextElideMode(Qt::ElideNone);

        vboxLayout->addWidget(treeWidget);

        message = new QLabel(PluginDialog);
        message->setObjectName(QString::fromUtf8("message"));
        message->setText(QString::fromUtf8("TextLabel"));
        message->setWordWrap(true);

        vboxLayout->addWidget(message);

        hboxLayout = new QHBoxLayout();
#ifndef Q_OS_MAC
        hboxLayout->setSpacing(6);
#endif
        hboxLayout->setContentsMargins(0, 0, 0, 0);
        hboxLayout->setObjectName(QString::fromUtf8("hboxLayout"));

        vboxLayout->addLayout(hboxLayout);

        buttonBox = new QDialogButtonBox(PluginDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Close);

        vboxLayout->addWidget(buttonBox);


        retranslateUi(PluginDialog);
        QObject::connect(buttonBox, SIGNAL(rejected()), PluginDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(PluginDialog);
    } // setupUi

    void retranslateUi(QDialog *PluginDialog)
    {
        PluginDialog->setWindowTitle(QApplication::translate("PluginDialog", "Plugin Information", 0, QApplication::UnicodeUTF8));
        QTreeWidgetItem *___qtreewidgetitem = treeWidget->headerItem();
        ___qtreewidgetitem->setText(0, QApplication::translate("PluginDialog", "1", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PluginDialog: public Ui_PluginDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PLUGINDIALOG_H
