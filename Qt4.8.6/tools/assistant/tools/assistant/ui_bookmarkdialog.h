/********************************************************************************
** Form generated from reading UI file 'bookmarkdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BOOKMARKDIALOG_H
#define UI_BOOKMARKDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QDialog>
#include <QtGui/QDialogButtonBox>
#include <QtGui/QFrame>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QToolButton>
#include <QtGui/QTreeView>
#include <QtGui/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_BookmarkDialog
{
public:
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QLabel *label;
    QLabel *label_2;
    QVBoxLayout *verticalLayout;
    QLineEdit *bookmarkEdit;
    QComboBox *bookmarkFolders;
    QHBoxLayout *horizontalLayout_3;
    QToolButton *toolButton;
    QFrame *line;
    QTreeView *treeView;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *newFolderButton;
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *BookmarkDialog)
    {
        if (BookmarkDialog->objectName().isEmpty())
            BookmarkDialog->setObjectName(QString::fromUtf8("BookmarkDialog"));
        BookmarkDialog->resize(450, 133);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(BookmarkDialog->sizePolicy().hasHeightForWidth());
        BookmarkDialog->setSizePolicy(sizePolicy);
        verticalLayout_3 = new QVBoxLayout(BookmarkDialog);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        label = new QLabel(BookmarkDialog);
        label->setObjectName(QString::fromUtf8("label"));

        verticalLayout_2->addWidget(label);

        label_2 = new QLabel(BookmarkDialog);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        verticalLayout_2->addWidget(label_2);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        bookmarkEdit = new QLineEdit(BookmarkDialog);
        bookmarkEdit->setObjectName(QString::fromUtf8("bookmarkEdit"));

        verticalLayout->addWidget(bookmarkEdit);

        bookmarkFolders = new QComboBox(BookmarkDialog);
        bookmarkFolders->setObjectName(QString::fromUtf8("bookmarkFolders"));

        verticalLayout->addWidget(bookmarkFolders);


        horizontalLayout->addLayout(verticalLayout);


        verticalLayout_3->addLayout(horizontalLayout);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        toolButton = new QToolButton(BookmarkDialog);
        toolButton->setObjectName(QString::fromUtf8("toolButton"));
        toolButton->setMinimumSize(QSize(25, 20));

        horizontalLayout_3->addWidget(toolButton);

        line = new QFrame(BookmarkDialog);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        horizontalLayout_3->addWidget(line);


        verticalLayout_3->addLayout(horizontalLayout_3);

        treeView = new QTreeView(BookmarkDialog);
        treeView->setObjectName(QString::fromUtf8("treeView"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Ignored);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(treeView->sizePolicy().hasHeightForWidth());
        treeView->setSizePolicy(sizePolicy1);
        treeView->setUniformRowHeights(true);
        treeView->setAllColumnsShowFocus(true);
        treeView->setHeaderHidden(true);

        verticalLayout_3->addWidget(treeView);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        newFolderButton = new QPushButton(BookmarkDialog);
        newFolderButton->setObjectName(QString::fromUtf8("newFolderButton"));

        horizontalLayout_4->addWidget(newFolderButton);

        buttonBox = new QDialogButtonBox(BookmarkDialog);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        horizontalLayout_4->addWidget(buttonBox);


        verticalLayout_3->addLayout(horizontalLayout_4);


        retranslateUi(BookmarkDialog);
        QObject::connect(buttonBox, SIGNAL(accepted()), BookmarkDialog, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), BookmarkDialog, SLOT(reject()));

        QMetaObject::connectSlotsByName(BookmarkDialog);
    } // setupUi

    void retranslateUi(QDialog *BookmarkDialog)
    {
        BookmarkDialog->setWindowTitle(QApplication::translate("BookmarkDialog", "Add Bookmark", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("BookmarkDialog", "Bookmark:", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("BookmarkDialog", "Add in Folder:", 0, QApplication::UnicodeUTF8));
        toolButton->setText(QApplication::translate("BookmarkDialog", "+", 0, QApplication::UnicodeUTF8));
        newFolderButton->setText(QApplication::translate("BookmarkDialog", "New Folder", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class BookmarkDialog: public Ui_BookmarkDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BOOKMARKDIALOG_H
