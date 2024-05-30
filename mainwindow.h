#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <qlabel.h>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnOpenChest_clicked();

private:
    void FadeOut(QLabel *w);
    void FadeIn(QLabel *w);
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
