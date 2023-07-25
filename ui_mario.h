/********************************************************************************
** Form generated from reading UI file 'mario.ui'
**
** Created by: Qt User Interface Compiler version 6.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MARIO_H
#define UI_MARIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mario
{
public:
    QWidget *centralwidget;
    QLabel *chara;
    QLabel *label_2;
    QLabel *floor;
    QLabel *label_4;
    QLabel *floor_2;
    QLabel *label_6;
    QLabel *floor_3;
    QLabel *label_8;
    QLabel *floor_4;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QLabel *colision;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *mario)
    {
        if (mario->objectName().isEmpty())
            mario->setObjectName("mario");
        mario->resize(664, 374);
        centralwidget = new QWidget(mario);
        centralwidget->setObjectName("centralwidget");
        chara = new QLabel(centralwidget);
        chara->setObjectName("chara");
        chara->setGeometry(QRect(60, 250, 16, 21));
        chara->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/stay1.png")));
        chara->setScaledContents(false);
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(0, 320, 201, 31));
        label_2->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/floor.png")));
        label_2->setScaledContents(false);
        floor = new QLabel(centralwidget);
        floor->setObjectName("floor");
        floor->setGeometry(QRect(0, 290, 201, 31));
        floor->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/floor.png")));
        floor->setScaledContents(false);
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(192, 320, 201, 31));
        label_4->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/floor.png")));
        label_4->setScaledContents(false);
        floor_2 = new QLabel(centralwidget);
        floor_2->setObjectName("floor_2");
        floor_2->setGeometry(QRect(191, 290, 201, 31));
        floor_2->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/floor.png")));
        floor_2->setScaledContents(false);
        label_6 = new QLabel(centralwidget);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(382, 320, 201, 31));
        label_6->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/floor.png")));
        label_6->setScaledContents(false);
        floor_3 = new QLabel(centralwidget);
        floor_3->setObjectName("floor_3");
        floor_3->setGeometry(QRect(382, 290, 201, 31));
        floor_3->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/floor.png")));
        floor_3->setScaledContents(false);
        label_8 = new QLabel(centralwidget);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(508, 320, 201, 31));
        label_8->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/floor.png")));
        label_8->setScaledContents(false);
        floor_4 = new QLabel(centralwidget);
        floor_4->setObjectName("floor_4");
        floor_4->setGeometry(QRect(508, 290, 201, 31));
        floor_4->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/floor.png")));
        floor_4->setScaledContents(false);
        label_10 = new QLabel(centralwidget);
        label_10->setObjectName("label_10");
        label_10->setGeometry(QRect(0, 250, 81, 41));
        label_10->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/montain1.png")));
        label_10->setScaledContents(false);
        label_11 = new QLabel(centralwidget);
        label_11->setObjectName("label_11");
        label_11->setGeometry(QRect(181, 250, 81, 41));
        label_11->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/montain.gif")));
        label_11->setScaledContents(false);
        label_12 = new QLabel(centralwidget);
        label_12->setObjectName("label_12");
        label_12->setGeometry(QRect(254, 250, 81, 41));
        label_12->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/montain2.png")));
        label_12->setScaledContents(false);
        label_13 = new QLabel(centralwidget);
        label_13->setObjectName("label_13");
        label_13->setGeometry(QRect(374, 250, 81, 41));
        label_13->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/montain - copia (2).gif")));
        label_13->setScaledContents(false);
        label_14 = new QLabel(centralwidget);
        label_14->setObjectName("label_14");
        label_14->setGeometry(QRect(450, 251, 34, 41));
        label_14->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/tuberiaslow.gif")));
        label_14->setScaledContents(false);
        label_15 = new QLabel(centralwidget);
        label_15->setObjectName("label_15");
        label_15->setGeometry(QRect(220, 210, 16, 21));
        label_15->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/incognit.png")));
        label_15->setScaledContents(false);
        label_16 = new QLabel(centralwidget);
        label_16->setObjectName("label_16");
        label_16->setGeometry(QRect(270, 210, 16, 21));
        label_16->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/bloque.png")));
        label_16->setScaledContents(false);
        label_17 = new QLabel(centralwidget);
        label_17->setObjectName("label_17");
        label_17->setGeometry(QRect(302, 210, 16, 21));
        label_17->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/bloque.png")));
        label_17->setScaledContents(false);
        label_18 = new QLabel(centralwidget);
        label_18->setObjectName("label_18");
        label_18->setGeometry(QRect(334, 210, 16, 21));
        label_18->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/bloque.png")));
        label_18->setScaledContents(false);
        label_19 = new QLabel(centralwidget);
        label_19->setObjectName("label_19");
        label_19->setGeometry(QRect(286, 210, 16, 21));
        label_19->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/incognit.png")));
        label_19->setScaledContents(false);
        label_20 = new QLabel(centralwidget);
        label_20->setObjectName("label_20");
        label_20->setGeometry(QRect(318, 210, 16, 21));
        label_20->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/incognit.png")));
        label_20->setScaledContents(false);
        label_21 = new QLabel(centralwidget);
        label_21->setObjectName("label_21");
        label_21->setGeometry(QRect(300, 130, 16, 21));
        label_21->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/incognit.png")));
        label_21->setScaledContents(false);
        label_22 = new QLabel(centralwidget);
        label_22->setObjectName("label_22");
        label_22->setGeometry(QRect(130, 90, 41, 31));
        label_22->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/nube.png")));
        label_22->setScaledContents(false);
        label_23 = new QLabel(centralwidget);
        label_23->setObjectName("label_23");
        label_23->setGeometry(QRect(270, 60, 41, 31));
        label_23->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/nube.png")));
        label_23->setScaledContents(false);
        label_24 = new QLabel(centralwidget);
        label_24->setObjectName("label_24");
        label_24->setGeometry(QRect(450, 80, 71, 31));
        label_24->setPixmap(QPixmap(QString::fromUtf8("../../Desktop/supermario/nubegrande.png")));
        label_24->setScaledContents(false);
        label_25 = new QLabel(centralwidget);
        label_25->setObjectName("label_25");
        label_25->setGeometry(QRect(0, 0, 671, 291));
        label_25->setStyleSheet(QString::fromUtf8("QLabel{\n"
"background-color:#5c94fc;\n"
"}"));
        colision = new QLabel(centralwidget);
        colision->setObjectName("colision");
        colision->setGeometry(QRect(0, 292, 646, 7));
        colision->setScaledContents(false);
        mario->setCentralWidget(centralwidget);
        label_25->raise();
        label_14->raise();
        label_13->raise();
        label_12->raise();
        label_11->raise();
        floor->raise();
        label_2->raise();
        label_4->raise();
        floor_2->raise();
        label_6->raise();
        floor_3->raise();
        label_8->raise();
        floor_4->raise();
        label_10->raise();
        label_15->raise();
        label_16->raise();
        label_17->raise();
        label_18->raise();
        label_19->raise();
        label_20->raise();
        label_21->raise();
        label_22->raise();
        label_23->raise();
        label_24->raise();
        colision->raise();
        chara->raise();
        statusbar = new QStatusBar(mario);
        statusbar->setObjectName("statusbar");
        mario->setStatusBar(statusbar);

        retranslateUi(mario);

        QMetaObject::connectSlotsByName(mario);
    } // setupUi

    void retranslateUi(QMainWindow *mario)
    {
        mario->setWindowTitle(QCoreApplication::translate("mario", "mario", nullptr));
        chara->setText(QString());
        label_2->setText(QString());
        floor->setText(QString());
        label_4->setText(QString());
        floor_2->setText(QString());
        label_6->setText(QString());
        floor_3->setText(QString());
        label_8->setText(QString());
        floor_4->setText(QString());
        label_10->setText(QString());
        label_11->setText(QString());
        label_12->setText(QString());
        label_13->setText(QString());
        label_14->setText(QString());
        label_15->setText(QString());
        label_16->setText(QString());
        label_17->setText(QString());
        label_18->setText(QString());
        label_19->setText(QString());
        label_20->setText(QString());
        label_21->setText(QString());
        label_22->setText(QString());
        label_23->setText(QString());
        label_24->setText(QString());
        label_25->setText(QString());
        colision->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class mario: public Ui_mario {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MARIO_H
