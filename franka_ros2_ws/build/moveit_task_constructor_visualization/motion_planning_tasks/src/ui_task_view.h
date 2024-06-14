/********************************************************************************
** Form generated from reading UI file 'task_view.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TASK_VIEW_H
#define UI_TASK_VIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <rviz_common/properties/property_tree_widget.hpp>
#include "task_list_model.h"

namespace moveit_rviz_plugin {

class Ui_TaskView
{
public:
    QAction *actionRemoveTaskTreeRows;
    QAction *actionAddLocalTask;
    QAction *actionShowTimeColumn;
    QVBoxLayout *verticalLayout;
    QSplitter *tasks_property_splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout1;
    QLabel *tasks_view_label;
    QSplitter *tasks_solutions_splitter;
    moveit_rviz_plugin::TaskListView *tasks_view;
    moveit_rviz_plugin::SolutionListView *solutions_view;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout2;
    QLabel *property_view_label;
    rviz_common::properties::PropertyTreeWidget *property_view;

    void setupUi(QWidget *moveit_rviz_plugin__TaskView)
    {
        if (moveit_rviz_plugin__TaskView->objectName().isEmpty())
            moveit_rviz_plugin__TaskView->setObjectName(QString::fromUtf8("moveit_rviz_plugin__TaskView"));
        moveit_rviz_plugin__TaskView->resize(400, 300);
        actionRemoveTaskTreeRows = new QAction(moveit_rviz_plugin__TaskView);
        actionRemoveTaskTreeRows->setObjectName(QString::fromUtf8("actionRemoveTaskTreeRows"));
        actionRemoveTaskTreeRows->setShortcutContext(Qt::WidgetShortcut);
        actionAddLocalTask = new QAction(moveit_rviz_plugin__TaskView);
        actionAddLocalTask->setObjectName(QString::fromUtf8("actionAddLocalTask"));
        actionShowTimeColumn = new QAction(moveit_rviz_plugin__TaskView);
        actionShowTimeColumn->setObjectName(QString::fromUtf8("actionShowTimeColumn"));
        actionShowTimeColumn->setCheckable(true);
        verticalLayout = new QVBoxLayout(moveit_rviz_plugin__TaskView);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        tasks_property_splitter = new QSplitter(moveit_rviz_plugin__TaskView);
        tasks_property_splitter->setObjectName(QString::fromUtf8("tasks_property_splitter"));
        tasks_property_splitter->setOrientation(Qt::Vertical);
        layoutWidget = new QWidget(tasks_property_splitter);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        verticalLayout1 = new QVBoxLayout(layoutWidget);
        verticalLayout1->setSpacing(0);
        verticalLayout1->setObjectName(QString::fromUtf8("verticalLayout1"));
        verticalLayout1->setContentsMargins(0, 0, 0, 0);
        tasks_view_label = new QLabel(layoutWidget);
        tasks_view_label->setObjectName(QString::fromUtf8("tasks_view_label"));

        verticalLayout1->addWidget(tasks_view_label);

        tasks_solutions_splitter = new QSplitter(layoutWidget);
        tasks_solutions_splitter->setObjectName(QString::fromUtf8("tasks_solutions_splitter"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(tasks_solutions_splitter->sizePolicy().hasHeightForWidth());
        tasks_solutions_splitter->setSizePolicy(sizePolicy);
        tasks_solutions_splitter->setOrientation(Qt::Horizontal);
        tasks_view = new moveit_rviz_plugin::TaskListView(tasks_solutions_splitter);
        tasks_view->setObjectName(QString::fromUtf8("tasks_view"));
        QSizePolicy sizePolicy1(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(2);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(tasks_view->sizePolicy().hasHeightForWidth());
        tasks_view->setSizePolicy(sizePolicy1);
        tasks_view->setContextMenuPolicy(Qt::ActionsContextMenu);
        tasks_view->setIndentation(15);
        tasks_view->setUniformRowHeights(true);
        tasks_view->setAllColumnsShowFocus(true);
        tasks_solutions_splitter->addWidget(tasks_view);
        tasks_view->header()->setCascadingSectionResizes(true);
        tasks_view->header()->setStretchLastSection(false);
        solutions_view = new moveit_rviz_plugin::SolutionListView(tasks_solutions_splitter);
        solutions_view->setObjectName(QString::fromUtf8("solutions_view"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy2.setHorizontalStretch(1);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(solutions_view->sizePolicy().hasHeightForWidth());
        solutions_view->setSizePolicy(sizePolicy2);
        solutions_view->setSelectionMode(QAbstractItemView::ExtendedSelection);
        solutions_view->setSelectionBehavior(QAbstractItemView::SelectRows);
        solutions_view->setTextElideMode(Qt::ElideNone);
        solutions_view->setHorizontalScrollMode(QAbstractItemView::ScrollPerPixel);
        solutions_view->setRootIsDecorated(false);
        solutions_view->setUniformRowHeights(true);
        solutions_view->setSortingEnabled(true);
        solutions_view->setAllColumnsShowFocus(true);
        tasks_solutions_splitter->addWidget(solutions_view);

        verticalLayout1->addWidget(tasks_solutions_splitter);

        tasks_property_splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(tasks_property_splitter);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        verticalLayout2 = new QVBoxLayout(layoutWidget1);
        verticalLayout2->setSpacing(0);
        verticalLayout2->setObjectName(QString::fromUtf8("verticalLayout2"));
        verticalLayout2->setContentsMargins(0, 0, 0, 0);
        property_view_label = new QLabel(layoutWidget1);
        property_view_label->setObjectName(QString::fromUtf8("property_view_label"));

        verticalLayout2->addWidget(property_view_label);

        property_view = new rviz_common::properties::PropertyTreeWidget(layoutWidget1);
        property_view->setObjectName(QString::fromUtf8("property_view"));

        verticalLayout2->addWidget(property_view);

        tasks_property_splitter->addWidget(layoutWidget1);

        verticalLayout->addWidget(tasks_property_splitter);


        retranslateUi(moveit_rviz_plugin__TaskView);

        QMetaObject::connectSlotsByName(moveit_rviz_plugin__TaskView);
    } // setupUi

    void retranslateUi(QWidget *moveit_rviz_plugin__TaskView)
    {
        moveit_rviz_plugin__TaskView->setWindowTitle(QCoreApplication::translate("moveit_rviz_plugin::TaskView", "Tasks Panel", nullptr));
        actionRemoveTaskTreeRows->setText(QCoreApplication::translate("moveit_rviz_plugin::TaskView", "Remove", nullptr));
#if QT_CONFIG(tooltip)
        actionRemoveTaskTreeRows->setToolTip(QCoreApplication::translate("moveit_rviz_plugin::TaskView", "Remove selected rows", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionRemoveTaskTreeRows->setShortcut(QCoreApplication::translate("moveit_rviz_plugin::TaskView", "Del", nullptr));
#endif // QT_CONFIG(shortcut)
        actionAddLocalTask->setText(QCoreApplication::translate("moveit_rviz_plugin::TaskView", "Add task", nullptr));
        actionShowTimeColumn->setText(QCoreApplication::translate("moveit_rviz_plugin::TaskView", "ShowTimeColumn", nullptr));
#if QT_CONFIG(tooltip)
        actionShowTimeColumn->setToolTip(QCoreApplication::translate("moveit_rviz_plugin::TaskView", "show time column", nullptr));
#endif // QT_CONFIG(tooltip)
        tasks_view_label->setText(QCoreApplication::translate("moveit_rviz_plugin::TaskView", "Task Tree", nullptr));
        property_view_label->setText(QCoreApplication::translate("moveit_rviz_plugin::TaskView", "Properties", nullptr));
    } // retranslateUi

};

} // namespace moveit_rviz_plugin

namespace moveit_rviz_plugin {
namespace Ui {
    class TaskView: public Ui_TaskView {};
} // namespace Ui
} // namespace moveit_rviz_plugin

#endif // UI_TASK_VIEW_H
