/********************************************************************************
** Form generated from reading UI file 'global_settings.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GLOBAL_SETTINGS_H
#define UI_GLOBAL_SETTINGS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <rviz_common/properties/property_tree_widget.hpp>

namespace moveit_rviz_plugin {

class Ui_GlobalSettingsWidget
{
public:
    QVBoxLayout *verticalLayout;
    QVBoxLayout *layout;
    QLabel *label;
    rviz_common::properties::PropertyTreeWidget *view;

    void setupUi(QWidget *moveit_rviz_plugin__GlobalSettingsWidget)
    {
        if (moveit_rviz_plugin__GlobalSettingsWidget->objectName().isEmpty())
            moveit_rviz_plugin__GlobalSettingsWidget->setObjectName(QString::fromUtf8("moveit_rviz_plugin__GlobalSettingsWidget"));
        moveit_rviz_plugin__GlobalSettingsWidget->resize(400, 300);
        verticalLayout = new QVBoxLayout(moveit_rviz_plugin__GlobalSettingsWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        layout = new QVBoxLayout();
        layout->setSpacing(0);
        layout->setObjectName(QString::fromUtf8("layout"));
        layout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(moveit_rviz_plugin__GlobalSettingsWidget);
        label->setObjectName(QString::fromUtf8("label"));

        layout->addWidget(label);

        view = new rviz_common::properties::PropertyTreeWidget(moveit_rviz_plugin__GlobalSettingsWidget);
        view->setObjectName(QString::fromUtf8("view"));

        layout->addWidget(view);


        verticalLayout->addLayout(layout);


        retranslateUi(moveit_rviz_plugin__GlobalSettingsWidget);

        QMetaObject::connectSlotsByName(moveit_rviz_plugin__GlobalSettingsWidget);
    } // setupUi

    void retranslateUi(QWidget *moveit_rviz_plugin__GlobalSettingsWidget)
    {
        moveit_rviz_plugin__GlobalSettingsWidget->setWindowTitle(QCoreApplication::translate("moveit_rviz_plugin::GlobalSettingsWidget", "Settings", nullptr));
        label->setText(QCoreApplication::translate("moveit_rviz_plugin::GlobalSettingsWidget", "Global Settings", nullptr));
    } // retranslateUi

};

} // namespace moveit_rviz_plugin

namespace moveit_rviz_plugin {
namespace Ui {
    class GlobalSettingsWidget: public Ui_GlobalSettingsWidget {};
} // namespace Ui
} // namespace moveit_rviz_plugin

#endif // UI_GLOBAL_SETTINGS_H
