/********************************************************************************
** Form generated from reading UI file 'QtConfig.ui'
**
** Created by: Qt User Interface Compiler version 5.9.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_QTCONFIG_H
#define UI_QTCONFIG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_QtConfig
{
public:
    QPushButton *acepptButton;
    QCheckBox *enableBox;
    QPushButton *cancelButton;
    QSlider *limitSlider;
    QSpinBox *limitBox;

    void setupUi(QWidget *QtConfig)
    {
        if (QtConfig->objectName().isEmpty())
            QtConfig->setObjectName(QStringLiteral("QtConfig"));
        QtConfig->resize(284, 170);
        acepptButton = new QPushButton(QtConfig);
        acepptButton->setObjectName(QStringLiteral("acepptButton"));
        acepptButton->setGeometry(QRect(24, 140, 101, 23));
        acepptButton->setCheckable(false);
        enableBox = new QCheckBox(QtConfig);
        enableBox->setObjectName(QStringLiteral("enableBox"));
        enableBox->setGeometry(QRect(20, 20, 81, 17));
        enableBox->setToolTipDuration(10);
        cancelButton = new QPushButton(QtConfig);
        cancelButton->setObjectName(QStringLiteral("cancelButton"));
        cancelButton->setGeometry(QRect(150, 140, 101, 23));
        limitSlider = new QSlider(QtConfig);
        limitSlider->setObjectName(QStringLiteral("limitSlider"));
        limitSlider->setGeometry(QRect(9, 90, 261, 22));
        limitSlider->setMaximum(20000);
        limitSlider->setSingleStep(200);
        limitSlider->setPageStep(2000);
        limitSlider->setOrientation(Qt::Horizontal);
        limitBox = new QSpinBox(QtConfig);
        limitBox->setObjectName(QStringLiteral("limitBox"));
        limitBox->setGeometry(QRect(91, 60, 91, 22));
        limitBox->setMaximum(20000);
        limitBox->setSingleStep(10);

        retranslateUi(QtConfig);
        QObject::connect(acepptButton, SIGNAL(clicked()), QtConfig, SLOT(saveToConfig()));
        QObject::connect(cancelButton, SIGNAL(clicked()), QtConfig, SLOT(close()));
        QObject::connect(acepptButton, SIGNAL(clicked()), QtConfig, SLOT(close()));
        QObject::connect(limitSlider, SIGNAL(valueChanged(int)), QtConfig, SLOT(updateLimitLabel(int)));
        QObject::connect(cancelButton, SIGNAL(clicked()), QtConfig, SLOT(cancel()));
        QObject::connect(limitBox, SIGNAL(valueChanged(int)), QtConfig, SLOT(updateLimit(int)));

        QMetaObject::connectSlotsByName(QtConfig);
    } // setupUi

    void retranslateUi(QWidget *QtConfig)
    {
        QtConfig->setWindowTitle(QApplication::translate("QtConfig", "Volume Leveler", Q_NULLPTR));
        acepptButton->setText(QApplication::translate("QtConfig", "Accept", Q_NULLPTR));
#ifndef QT_NO_TOOLTIP
        enableBox->setToolTip(QApplication::translate("QtConfig", "<html><head/><body><p><span style=\" font-weight:600;\">shit</span></p></body></html>", Q_NULLPTR));
#endif // QT_NO_TOOLTIP
        enableBox->setText(QApplication::translate("QtConfig", "Enable", Q_NULLPTR));
        cancelButton->setText(QApplication::translate("QtConfig", "Cancel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class QtConfig: public Ui_QtConfig {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_QTCONFIG_H
