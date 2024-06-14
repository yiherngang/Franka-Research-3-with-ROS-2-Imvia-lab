/********************************************************************************
** Form generated from reading UI file 'motion_planning_rviz_plugin_frame_joints.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_JOINTS_H
#define UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_JOINTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MotionPlanningFrameJointsUI
{
public:
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *joints_layout_;
    QLabel *joints_view_label_;
    QTreeView *joints_view_;
    QLabel *nullspace_label;
    QVBoxLayout *nullspace_layout_;
    QSlider *dummy_ns_slider_;

    void setupUi(QWidget *MotionPlanningFrameJointsUI)
    {
        if (MotionPlanningFrameJointsUI->objectName().isEmpty())
            MotionPlanningFrameJointsUI->setObjectName(QString::fromUtf8("MotionPlanningFrameJointsUI"));
        MotionPlanningFrameJointsUI->resize(400, 300);
        horizontalLayout = new QHBoxLayout(MotionPlanningFrameJointsUI);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        joints_layout_ = new QVBoxLayout();
        joints_layout_->setObjectName(QString::fromUtf8("joints_layout_"));
        joints_view_label_ = new QLabel(MotionPlanningFrameJointsUI);
        joints_view_label_->setObjectName(QString::fromUtf8("joints_view_label_"));

        joints_layout_->addWidget(joints_view_label_);

        joints_view_ = new QTreeView(MotionPlanningFrameJointsUI);
        joints_view_->setObjectName(QString::fromUtf8("joints_view_"));
        joints_view_->setEditTriggers(QAbstractItemView::EditKeyPressed);
        joints_view_->setSelectionMode(QAbstractItemView::NoSelection);
        joints_view_->setRootIsDecorated(false);
        joints_view_->setItemsExpandable(false);
        joints_view_->setExpandsOnDoubleClick(false);

        joints_layout_->addWidget(joints_view_);

        nullspace_label = new QLabel(MotionPlanningFrameJointsUI);
        nullspace_label->setObjectName(QString::fromUtf8("nullspace_label"));

        joints_layout_->addWidget(nullspace_label);

        nullspace_layout_ = new QVBoxLayout();
        nullspace_layout_->setObjectName(QString::fromUtf8("nullspace_layout_"));
        dummy_ns_slider_ = new QSlider(MotionPlanningFrameJointsUI);
        dummy_ns_slider_->setObjectName(QString::fromUtf8("dummy_ns_slider_"));
        dummy_ns_slider_->setEnabled(false);
        dummy_ns_slider_->setMinimum(-1);
        dummy_ns_slider_->setMaximum(1);
        dummy_ns_slider_->setOrientation(Qt::Horizontal);

        nullspace_layout_->addWidget(dummy_ns_slider_);


        joints_layout_->addLayout(nullspace_layout_);


        horizontalLayout->addLayout(joints_layout_);


        retranslateUi(MotionPlanningFrameJointsUI);

        QMetaObject::connectSlotsByName(MotionPlanningFrameJointsUI);
    } // setupUi

    void retranslateUi(QWidget *MotionPlanningFrameJointsUI)
    {
        MotionPlanningFrameJointsUI->setWindowTitle(QCoreApplication::translate("MotionPlanningFrameJointsUI", "Form", nullptr));
        joints_view_label_->setText(QCoreApplication::translate("MotionPlanningFrameJointsUI", "Group joints:", nullptr));
#if QT_CONFIG(tooltip)
        nullspace_label->setToolTip(QCoreApplication::translate("MotionPlanningFrameJointsUI", "The sliders below allow for jogging the nullspace of the current configuration,\n"
"i.e. trigger joint motions that don't affect the end-effector pose.\n"
"\n"
"Typically, redundant arms (with 7+ joints) offer such a nullspace.\n"
"However, also singular configurations provide a nullspace.\n"
"\n"
"Each basis vector of the (linear) nullspace is represented by a separate slider.", nullptr));
#endif // QT_CONFIG(tooltip)
        nullspace_label->setText(QCoreApplication::translate("MotionPlanningFrameJointsUI", "Nullspace exploration:", nullptr));
#if QT_CONFIG(tooltip)
        dummy_ns_slider_->setToolTip(QCoreApplication::translate("MotionPlanningFrameJointsUI", "The slider will become active if the current robot configuration has a nullspace.\n"
"That's typically the case for redundant robots, i.e. 7+ joints, or singular configurations.", nullptr));
#endif // QT_CONFIG(tooltip)
    } // retranslateUi

};

namespace Ui {
    class MotionPlanningFrameJointsUI: public Ui_MotionPlanningFrameJointsUI {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOTION_PLANNING_RVIZ_PLUGIN_FRAME_JOINTS_H
