#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <vector>
#include "heap.h"
#include "heapnode.h"

namespace Ui {
class MainWindow;
}
    class MainWindow : public QMainWindow
    {
        Q_OBJECT

    public:
        explicit MainWindow(QWidget *parent = 0);
        ~MainWindow();

    public slots:
        void openFile();
        void runSearch();
        void saveFile();
        void clearFile();

    private:
        Ui::MainWindow *ui;
        QString file, outputfile;
};

#endif // MAINWINDOW_H
