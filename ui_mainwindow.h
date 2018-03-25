/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.4.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Open;
    QPushButton *Save;
    QPushButton *Run;
    QTabWidget *Information;
    QWidget *Summary;
    QTextBrowser *textBrowser_2;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QWidget *A;
    QTextBrowser *textBrowser_3;
    QWidget *B;
    QTextBrowser *textBrowser_4;
    QWidget *C;
    QTextBrowser *textBrowser_5;
    QWidget *D;
    QTextBrowser *textBrowser_6;
    QWidget *E;
    QTextBrowser *textBrowser_7;
    QWidget *F;
    QTextBrowser *textBrowser_8;
    QWidget *G;
    QTextBrowser *textBrowser_9;
    QWidget *H;
    QTextBrowser *textBrowser_10;
    QWidget *I;
    QTextBrowser *textBrowser_11;
    QWidget *J;
    QTextBrowser *textBrowser_12;
    QWidget *K;
    QTextBrowser *textBrowser_13;
    QWidget *L;
    QTextBrowser *textBrowser_14;
    QWidget *M;
    QTextBrowser *textBrowser_15;
    QWidget *N;
    QTextBrowser *textBrowser_16;
    QWidget *O;
    QTextBrowser *textBrowser_17;
    QWidget *P;
    QTextBrowser *textBrowser_18;
    QWidget *Q;
    QTextBrowser *textBrowser_19;
    QWidget *R;
    QTextBrowser *textBrowser_20;
    QWidget *S;
    QTextBrowser *textBrowser_21;
    QWidget *T;
    QTextBrowser *textBrowser_22;
    QWidget *U;
    QTextBrowser *textBrowser_23;
    QWidget *V;
    QTextBrowser *textBrowser_24;
    QWidget *W;
    QTextBrowser *textBrowser_25;
    QWidget *X;
    QTextBrowser *textBrowser_26;
    QWidget *Y;
    QTextBrowser *textBrowser_27;
    QWidget *Z;
    QTextBrowser *textBrowser_28;
    QPushButton *Clear;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(886, 674);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        Open = new QPushButton(centralWidget);
        Open->setObjectName(QStringLiteral("Open"));
        Open->setGeometry(QRect(0, 10, 91, 31));
        Save = new QPushButton(centralWidget);
        Save->setObjectName(QStringLiteral("Save"));
        Save->setGeometry(QRect(110, 10, 91, 31));
        Run = new QPushButton(centralWidget);
        Run->setObjectName(QStringLiteral("Run"));
        Run->setGeometry(QRect(220, 10, 91, 31));
        Information = new QTabWidget(centralWidget);
        Information->setObjectName(QStringLiteral("Information"));
        Information->setGeometry(QRect(10, 70, 851, 551));
        Information->setToolTipDuration(0);
        Summary = new QWidget();
        Summary->setObjectName(QStringLiteral("Summary"));
        textBrowser_2 = new QTextBrowser(Summary);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setGeometry(QRect(-5, 1, 861, 531));
        formLayoutWidget = new QWidget(Summary);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(150, 450, 160, 80));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        Information->addTab(Summary, QString());
        A = new QWidget();
        A->setObjectName(QStringLiteral("A"));
        textBrowser_3 = new QTextBrowser(A);
        textBrowser_3->setObjectName(QStringLiteral("textBrowser_3"));
        textBrowser_3->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(A, QString());
        B = new QWidget();
        B->setObjectName(QStringLiteral("B"));
        textBrowser_4 = new QTextBrowser(B);
        textBrowser_4->setObjectName(QStringLiteral("textBrowser_4"));
        textBrowser_4->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(B, QString());
        C = new QWidget();
        C->setObjectName(QStringLiteral("C"));
        textBrowser_5 = new QTextBrowser(C);
        textBrowser_5->setObjectName(QStringLiteral("textBrowser_5"));
        textBrowser_5->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(C, QString());
        D = new QWidget();
        D->setObjectName(QStringLiteral("D"));
        textBrowser_6 = new QTextBrowser(D);
        textBrowser_6->setObjectName(QStringLiteral("textBrowser_6"));
        textBrowser_6->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(D, QString());
        E = new QWidget();
        E->setObjectName(QStringLiteral("E"));
        textBrowser_7 = new QTextBrowser(E);
        textBrowser_7->setObjectName(QStringLiteral("textBrowser_7"));
        textBrowser_7->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(E, QString());
        F = new QWidget();
        F->setObjectName(QStringLiteral("F"));
        textBrowser_8 = new QTextBrowser(F);
        textBrowser_8->setObjectName(QStringLiteral("textBrowser_8"));
        textBrowser_8->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(F, QString());
        G = new QWidget();
        G->setObjectName(QStringLiteral("G"));
        textBrowser_9 = new QTextBrowser(G);
        textBrowser_9->setObjectName(QStringLiteral("textBrowser_9"));
        textBrowser_9->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(G, QString());
        H = new QWidget();
        H->setObjectName(QStringLiteral("H"));
        textBrowser_10 = new QTextBrowser(H);
        textBrowser_10->setObjectName(QStringLiteral("textBrowser_10"));
        textBrowser_10->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(H, QString());
        I = new QWidget();
        I->setObjectName(QStringLiteral("I"));
        textBrowser_11 = new QTextBrowser(I);
        textBrowser_11->setObjectName(QStringLiteral("textBrowser_11"));
        textBrowser_11->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(I, QString());
        J = new QWidget();
        J->setObjectName(QStringLiteral("J"));
        textBrowser_12 = new QTextBrowser(J);
        textBrowser_12->setObjectName(QStringLiteral("textBrowser_12"));
        textBrowser_12->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(J, QString());
        K = new QWidget();
        K->setObjectName(QStringLiteral("K"));
        textBrowser_13 = new QTextBrowser(K);
        textBrowser_13->setObjectName(QStringLiteral("textBrowser_13"));
        textBrowser_13->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(K, QString());
        L = new QWidget();
        L->setObjectName(QStringLiteral("L"));
        textBrowser_14 = new QTextBrowser(L);
        textBrowser_14->setObjectName(QStringLiteral("textBrowser_14"));
        textBrowser_14->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(L, QString());
        M = new QWidget();
        M->setObjectName(QStringLiteral("M"));
        textBrowser_15 = new QTextBrowser(M);
        textBrowser_15->setObjectName(QStringLiteral("textBrowser_15"));
        textBrowser_15->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(M, QString());
        N = new QWidget();
        N->setObjectName(QStringLiteral("N"));
        textBrowser_16 = new QTextBrowser(N);
        textBrowser_16->setObjectName(QStringLiteral("textBrowser_16"));
        textBrowser_16->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(N, QString());
        O = new QWidget();
        O->setObjectName(QStringLiteral("O"));
        textBrowser_17 = new QTextBrowser(O);
        textBrowser_17->setObjectName(QStringLiteral("textBrowser_17"));
        textBrowser_17->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(O, QString());
        P = new QWidget();
        P->setObjectName(QStringLiteral("P"));
        textBrowser_18 = new QTextBrowser(P);
        textBrowser_18->setObjectName(QStringLiteral("textBrowser_18"));
        textBrowser_18->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(P, QString());
        Q = new QWidget();
        Q->setObjectName(QStringLiteral("Q"));
        textBrowser_19 = new QTextBrowser(Q);
        textBrowser_19->setObjectName(QStringLiteral("textBrowser_19"));
        textBrowser_19->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(Q, QString());
        R = new QWidget();
        R->setObjectName(QStringLiteral("R"));
        textBrowser_20 = new QTextBrowser(R);
        textBrowser_20->setObjectName(QStringLiteral("textBrowser_20"));
        textBrowser_20->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(R, QString());
        S = new QWidget();
        S->setObjectName(QStringLiteral("S"));
        textBrowser_21 = new QTextBrowser(S);
        textBrowser_21->setObjectName(QStringLiteral("textBrowser_21"));
        textBrowser_21->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(S, QString());
        T = new QWidget();
        T->setObjectName(QStringLiteral("T"));
        textBrowser_22 = new QTextBrowser(T);
        textBrowser_22->setObjectName(QStringLiteral("textBrowser_22"));
        textBrowser_22->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(T, QString());
        U = new QWidget();
        U->setObjectName(QStringLiteral("U"));
        textBrowser_23 = new QTextBrowser(U);
        textBrowser_23->setObjectName(QStringLiteral("textBrowser_23"));
        textBrowser_23->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(U, QString());
        V = new QWidget();
        V->setObjectName(QStringLiteral("V"));
        textBrowser_24 = new QTextBrowser(V);
        textBrowser_24->setObjectName(QStringLiteral("textBrowser_24"));
        textBrowser_24->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(V, QString());
        W = new QWidget();
        W->setObjectName(QStringLiteral("W"));
        textBrowser_25 = new QTextBrowser(W);
        textBrowser_25->setObjectName(QStringLiteral("textBrowser_25"));
        textBrowser_25->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(W, QString());
        X = new QWidget();
        X->setObjectName(QStringLiteral("X"));
        textBrowser_26 = new QTextBrowser(X);
        textBrowser_26->setObjectName(QStringLiteral("textBrowser_26"));
        textBrowser_26->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(X, QString());
        Y = new QWidget();
        Y->setObjectName(QStringLiteral("Y"));
        textBrowser_27 = new QTextBrowser(Y);
        textBrowser_27->setObjectName(QStringLiteral("textBrowser_27"));
        textBrowser_27->setGeometry(QRect(0, 0, 851, 521));
        Information->addTab(Y, QString());
        Z = new QWidget();
        Z->setObjectName(QStringLiteral("Z"));
        Z->setToolTipDuration(-6);
        textBrowser_28 = new QTextBrowser(Z);
        textBrowser_28->setObjectName(QStringLiteral("textBrowser_28"));
        textBrowser_28->setGeometry(QRect(0, 0, 861, 531));
        Information->addTab(Z, QString());
        Clear = new QPushButton(centralWidget);
        Clear->setObjectName(QStringLiteral("Clear"));
        Clear->setGeometry(QRect(330, 10, 91, 31));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 886, 21));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        Information->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        Open->setText(QApplication::translate("MainWindow", "Open", 0));
        Save->setText(QApplication::translate("MainWindow", "Save", 0));
        Run->setText(QApplication::translate("MainWindow", "Run", 0));
        Information->setTabText(Information->indexOf(Summary), QApplication::translate("MainWindow", "Tab 1", 0));
        Information->setTabText(Information->indexOf(A), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(B), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(C), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(D), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(E), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(F), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(G), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(H), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(I), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(J), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(K), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(L), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(M), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(N), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(O), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(P), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(Q), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(R), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(S), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(T), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(U), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(V), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(W), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(X), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(Y), QApplication::translate("MainWindow", "Page", 0));
        Information->setTabText(Information->indexOf(Z), QApplication::translate("MainWindow", "Tab 2", 0));
        Clear->setText(QApplication::translate("MainWindow", "Clear", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
