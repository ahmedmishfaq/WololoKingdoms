/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.9.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_3;
    QCheckBox *replaceTooltips;
    QPushButton *tooltipTip;
    QComboBox *languageChoice;
    QHBoxLayout *horizontalLayout_2;
    QCheckBox *createExe;
    QPushButton *exeTip;
    QHBoxLayout *horizontalLayout_4;
    QComboBox *hotkeyChoice;
    QPushButton *hotkeyTip;
    QHBoxLayout *horizontalLayout_5;
    QCheckBox *copyMaps;
    QPushButton *mapsTip;
    QHBoxLayout *horizontalLayout_6;
    QCheckBox *usePatch;
    QComboBox *patchSelection;
    QPushButton *patchSelectionTip;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_11;
    QCheckBox *usePw;
    QCheckBox *useGrid;
    QHBoxLayout *horizontalLayout_13;
    QCheckBox *useMonks;
    QCheckBox *useWalls;
    QPushButton *modsTip;
    QPushButton *runButton;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *label;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(426, 422);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(30, 10, 352, 233));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        replaceTooltips = new QCheckBox(gridLayoutWidget);
        replaceTooltips->setObjectName(QStringLiteral("replaceTooltips"));
        replaceTooltips->setChecked(true);

        horizontalLayout_3->addWidget(replaceTooltips);

        tooltipTip = new QPushButton(gridLayoutWidget);
        tooltipTip->setObjectName(QStringLiteral("tooltipTip"));
        tooltipTip->setMaximumSize(QSize(25, 16777215));
        tooltipTip->setToolTipDuration(0);

        horizontalLayout_3->addWidget(tooltipTip);


        gridLayout->addLayout(horizontalLayout_3, 8, 0, 1, 1);

        languageChoice = new QComboBox(gridLayoutWidget);
        languageChoice->setObjectName(QStringLiteral("languageChoice"));

        gridLayout->addWidget(languageChoice, 5, 0, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        createExe = new QCheckBox(gridLayoutWidget);
        createExe->setObjectName(QStringLiteral("createExe"));
        createExe->setChecked(false);

        horizontalLayout_2->addWidget(createExe);

        exeTip = new QPushButton(gridLayoutWidget);
        exeTip->setObjectName(QStringLiteral("exeTip"));
        exeTip->setMaximumSize(QSize(25, 16777215));
        exeTip->setToolTipDuration(0);

        horizontalLayout_2->addWidget(exeTip);


        gridLayout->addLayout(horizontalLayout_2, 9, 0, 1, 1);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(-1, -1, -1, 0);
        hotkeyChoice = new QComboBox(gridLayoutWidget);
        hotkeyChoice->setObjectName(QStringLiteral("hotkeyChoice"));

        horizontalLayout_4->addWidget(hotkeyChoice);

        hotkeyTip = new QPushButton(gridLayoutWidget);
        hotkeyTip->setObjectName(QStringLiteral("hotkeyTip"));
        hotkeyTip->setMaximumSize(QSize(25, 16777215));
        hotkeyTip->setToolTipDuration(0);

        horizontalLayout_4->addWidget(hotkeyTip);


        gridLayout->addLayout(horizontalLayout_4, 6, 0, 1, 1);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        copyMaps = new QCheckBox(gridLayoutWidget);
        copyMaps->setObjectName(QStringLiteral("copyMaps"));
        copyMaps->setChecked(true);

        horizontalLayout_5->addWidget(copyMaps);

        mapsTip = new QPushButton(gridLayoutWidget);
        mapsTip->setObjectName(QStringLiteral("mapsTip"));
        mapsTip->setMaximumSize(QSize(25, 16777215));
        mapsTip->setToolTipDuration(0);

        horizontalLayout_5->addWidget(mapsTip);


        gridLayout->addLayout(horizontalLayout_5, 10, 0, 1, 1);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        usePatch = new QCheckBox(gridLayoutWidget);
        usePatch->setObjectName(QStringLiteral("usePatch"));
        usePatch->setEnabled(true);

        horizontalLayout_6->addWidget(usePatch);

        patchSelection = new QComboBox(gridLayoutWidget);
        patchSelection->setObjectName(QStringLiteral("patchSelection"));
        patchSelection->setEnabled(false);

        horizontalLayout_6->addWidget(patchSelection);

        patchSelectionTip = new QPushButton(gridLayoutWidget);
        patchSelectionTip->setObjectName(QStringLiteral("patchSelectionTip"));
        patchSelectionTip->setMaximumSize(QSize(25, 16777215));

        horizontalLayout_6->addWidget(patchSelectionTip);


        gridLayout->addLayout(horizontalLayout_6, 7, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        horizontalLayout_11 = new QHBoxLayout();
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        usePw = new QCheckBox(gridLayoutWidget);
        usePw->setObjectName(QStringLiteral("usePw"));
        usePw->setChecked(true);

        horizontalLayout_11->addWidget(usePw);

        useGrid = new QCheckBox(gridLayoutWidget);
        useGrid->setObjectName(QStringLiteral("useGrid"));
        useGrid->setChecked(true);

        horizontalLayout_11->addWidget(useGrid);


        verticalLayout_5->addLayout(horizontalLayout_11);

        horizontalLayout_13 = new QHBoxLayout();
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        useMonks = new QCheckBox(gridLayoutWidget);
        useMonks->setObjectName(QStringLiteral("useMonks"));
        useMonks->setChecked(true);

        horizontalLayout_13->addWidget(useMonks);

        useWalls = new QCheckBox(gridLayoutWidget);
        useWalls->setObjectName(QStringLiteral("useWalls"));

        horizontalLayout_13->addWidget(useWalls);


        verticalLayout_5->addLayout(horizontalLayout_13);


        horizontalLayout->addLayout(verticalLayout_5);

        modsTip = new QPushButton(gridLayoutWidget);
        modsTip->setObjectName(QStringLiteral("modsTip"));
        modsTip->setMaximumSize(QSize(25, 16777215));
        modsTip->setToolTipDuration(0);

        horizontalLayout->addWidget(modsTip);


        gridLayout->addLayout(horizontalLayout, 16, 0, 1, 1);

        runButton = new QPushButton(centralWidget);
        runButton->setObjectName(QStringLiteral("runButton"));
        runButton->setEnabled(false);
        runButton->setGeometry(QRect(160, 340, 75, 23));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QStringLiteral("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(30, 250, 341, 80));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label);

        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        languageChoice->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "WololoKingdoms", Q_NULLPTR));
        replaceTooltips->setText(QApplication::translate("MainWindow", "Improve tooltips and tech tree", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        tooltipTip->setAccessibleName(QApplication::translate("MainWindow", "tooltipTip", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        tooltipTip->setText(QString());
        languageChoice->clear();
        languageChoice->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Portugu\303\252s-Brasil (Portuguese-Brasil)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Deutsch (German)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "English", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Espa\303\261ol (Spanish)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Fran\303\247ais (French)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Italiano (Italian)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\346\227\245\346\234\254\350\252\236 (Japanese)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\355\225\234\352\265\255\354\226\264 (Korean)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Nederlands (Dutch)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "\321\200\321\203\321\201\321\201\320\272\320\270\320\271 (Russian)", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Simplified Chinese (\347\256\200\344\275\223\344\270\255\346\226\207)", Q_NULLPTR)
        );
        createExe->setText(QApplication::translate("MainWindow", "Create an offline installation", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        exeTip->setAccessibleName(QApplication::translate("MainWindow", "exeTip", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        exeTip->setText(QString());
        hotkeyChoice->clear();
        hotkeyChoice->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Choose which hotkeys to use...", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Use current AoC/Voobly hotkeys", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Use HD hotkeys for this mod only", Q_NULLPTR)
         << QApplication::translate("MainWindow", "Use HD hotkeys for this mod and AoC", Q_NULLPTR)
        );
#ifndef QT_NO_ACCESSIBILITY
        hotkeyTip->setAccessibleName(QApplication::translate("MainWindow", "hotkeyTip", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        hotkeyTip->setText(QString());
        copyMaps->setText(QApplication::translate("MainWindow", "Copy Real World and Special Maps", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        mapsTip->setAccessibleName(QApplication::translate("MainWindow", "mapsTip", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        mapsTip->setText(QString());
        usePatch->setText(QApplication::translate("MainWindow", "Patch/Data Mod", Q_NULLPTR));
        patchSelection->clear();
        patchSelection->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "Patch 5.4", Q_NULLPTR)
         << QApplication::translate("MainWindow", "WK Hippo Mod", Q_NULLPTR)
        );
        patchSelectionTip->setText(QString());
        usePw->setText(QApplication::translate("MainWindow", "Small Trees", Q_NULLPTR));
        useGrid->setText(QApplication::translate("MainWindow", "Grid", Q_NULLPTR));
        useMonks->setText(QApplication::translate("MainWindow", "Regional Monks", Q_NULLPTR));
        useWalls->setText(QApplication::translate("MainWindow", "Short Walls", Q_NULLPTR));
#ifndef QT_NO_ACCESSIBILITY
        modsTip->setAccessibleName(QApplication::translate("MainWindow", "modsTip", Q_NULLPTR));
#endif // QT_NO_ACCESSIBILITY
        modsTip->setText(QString());
        runButton->setText(QApplication::translate("MainWindow", "Run", Q_NULLPTR));
        label->setText(QApplication::translate("MainWindow", "TextLabel", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
