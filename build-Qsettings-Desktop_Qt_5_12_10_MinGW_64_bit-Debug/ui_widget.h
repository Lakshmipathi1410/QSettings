/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.12.10
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *Button_1;
    QPushButton *Button_2;
    QPushButton *Button_3;
    QPushButton *Button_4;
    QPushButton *Button_5;
    QPushButton *Button_6;
    QPushButton *Button_7;
    QPushButton *Button_8;
    QPushButton *Button_9;
    QPushButton *save_color;
    QPushButton *load_color;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(358, 305);
        Button_1 = new QPushButton(Widget);
        Button_1->setObjectName(QString::fromUtf8("Button_1"));
        Button_1->setGeometry(QRect(20, 20, 91, 41));
        Button_2 = new QPushButton(Widget);
        Button_2->setObjectName(QString::fromUtf8("Button_2"));
        Button_2->setGeometry(QRect(130, 20, 91, 41));
        Button_3 = new QPushButton(Widget);
        Button_3->setObjectName(QString::fromUtf8("Button_3"));
        Button_3->setGeometry(QRect(239, 20, 91, 41));
        Button_4 = new QPushButton(Widget);
        Button_4->setObjectName(QString::fromUtf8("Button_4"));
        Button_4->setGeometry(QRect(20, 80, 91, 41));
        Button_5 = new QPushButton(Widget);
        Button_5->setObjectName(QString::fromUtf8("Button_5"));
        Button_5->setGeometry(QRect(130, 80, 91, 41));
        Button_6 = new QPushButton(Widget);
        Button_6->setObjectName(QString::fromUtf8("Button_6"));
        Button_6->setGeometry(QRect(239, 80, 91, 41));
        Button_7 = new QPushButton(Widget);
        Button_7->setObjectName(QString::fromUtf8("Button_7"));
        Button_7->setGeometry(QRect(20, 140, 91, 41));
        Button_8 = new QPushButton(Widget);
        Button_8->setObjectName(QString::fromUtf8("Button_8"));
        Button_8->setGeometry(QRect(130, 140, 91, 41));
        Button_9 = new QPushButton(Widget);
        Button_9->setObjectName(QString::fromUtf8("Button_9"));
        Button_9->setGeometry(QRect(239, 140, 91, 41));
        save_color = new QPushButton(Widget);
        save_color->setObjectName(QString::fromUtf8("save_color"));
        save_color->setGeometry(QRect(29, 210, 291, 22));
        load_color = new QPushButton(Widget);
        load_color->setObjectName(QString::fromUtf8("load_color"));
        load_color->setGeometry(QRect(30, 260, 291, 22));
        load_color->raise();
        Button_1->raise();
        Button_2->raise();
        Button_3->raise();
        Button_4->raise();
        Button_5->raise();
        Button_6->raise();
        Button_7->raise();
        Button_8->raise();
        Button_9->raise();
        save_color->raise();

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        Button_1->setText(QApplication::translate("Widget", "One", nullptr));
        Button_2->setText(QApplication::translate("Widget", "Two", nullptr));
        Button_3->setText(QApplication::translate("Widget", "Three", nullptr));
        Button_4->setText(QApplication::translate("Widget", "Four", nullptr));
        Button_5->setText(QApplication::translate("Widget", "Five", nullptr));
        Button_6->setText(QApplication::translate("Widget", "Six", nullptr));
        Button_7->setText(QApplication::translate("Widget", "Seven", nullptr));
        Button_8->setText(QApplication::translate("Widget", "Eight", nullptr));
        Button_9->setText(QApplication::translate("Widget", "Nine", nullptr));
        save_color->setText(QApplication::translate("Widget", "Save Color", nullptr));
        load_color->setText(QApplication::translate("Widget", "Load Color", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
