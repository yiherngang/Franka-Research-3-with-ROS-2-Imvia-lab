/********************************************************************************
** Form generated from reading UI file 'task_panel.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_PANEL_H
#define UI_TASK_PANEL_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

namespace moveit_rviz_plugin {

class Ui_TaskPanel
{
public:
    QVBoxLayout *verticalLayout;
    QHBoxLayout *tool_buttons_layout;
    QSpacerItem *spacer;
    QToolButton *button_exec_solution;
    QToolButton *button_show_stage_dock_widget;
    QStackedWidget *stackedWidget;

    void setupUi(QWidget *moveit_rviz_plugin__TaskPanel)
    {
        if (moveit_rviz_plugin__TaskPanel->objectName().isEmpty())
            moveit_rviz_plugin__TaskPanel->setObjectName(QString::fromUtf8("moveit_rviz_plugin__TaskPanel"));
        moveit_rviz_plugin__TaskPanel->resize(400, 300);
        verticalLayout = new QVBoxLayout(moveit_rviz_plugin__TaskPanel);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tool_buttons_layout = new QHBoxLayout();
        tool_buttons_layout->setObjectName(QString::fromUtf8("tool_buttons_layout"));
        tool_buttons_layout->setContentsMargins(-1, 2, -1, -1);
        spacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        tool_buttons_layout->addItem(spacer);

        button_exec_solution = new QToolButton(moveit_rviz_plugin__TaskPanel);
        button_exec_solution->setObjectName(QString::fromUtf8("button_exec_solution"));
        QIcon icon(QIcon::fromTheme(QString::fromUtf8("system-run")));
        button_exec_solution->setIcon(icon);

        tool_buttons_layout->addWidget(button_exec_solution);

        button_show_stage_dock_widget = new QToolButton(moveit_rviz_plugin__TaskPanel);
        button_show_stage_dock_widget->setObjectName(QString::fromUtf8("button_show_stage_dock_widget"));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/icons/new-stage.png"), QSize(), QIcon::Normal, QIcon::Off);
        button_show_stage_dock_widget->setIcon(icon1);

        tool_buttons_layout->addWidget(button_show_stage_dock_widget);


        verticalLayout->addLayout(tool_buttons_layout);

        stackedWidget = new QStackedWidget(moveit_rviz_plugin__TaskPanel);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));

        verticalLayout->addWidget(stackedWidget);


        retranslateUi(moveit_rviz_plugin__TaskPanel);

        QMetaObject::connectSlotsByName(moveit_rviz_plugin__TaskPanel);
    } // setupUi

    void retranslateUi(QWidget *moveit_rviz_plugin__TaskPanel)
    {
        moveit_rviz_plugin__TaskPanel->setWindowTitle(QCoreApplication::translate("moveit_rviz_plugin::TaskPanel", "Tasks Panel", nullptr));
#if QT_CONFIG(tooltip)
        button_exec_solution->setToolTip(QCoreApplication::translate("moveit_rviz_plugin::TaskPanel", "Execute solution", nullptr));
#endif // QT_CONFIG(tooltip)
        button_exec_solution->setText(QCoreApplication::translate("moveit_rviz_plugin::TaskPanel", "Exec", nullptr));
#if QT_CONFIG(tooltip)
        button_show_stage_dock_widget->setToolTip(QCoreApplication::translate("moveit_rviz_plugin::TaskPanel", "Show available stages", nullptr));
#endif // QT_CONFIG(tooltip)
        button_show_stage_dock_widget->setText(QCoreApplication::translate("moveit_rviz_plugin::TaskPanel", "...", nullptr));
    } // retranslateUi

};

} // namespace moveit_rviz_plugin

namespace moveit_rviz_plugin {
namespace Ui {
    class TaskPanel: public Ui_TaskPanel {};
} // namespace Ui
} // namespace moveit_rviz_plugin

#endif // UI_TASK_PANEL_H
