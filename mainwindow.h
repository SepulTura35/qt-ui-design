#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_auth_clicked();

    void on_system_clicked();

    void on_application_clicked();

    void on_license_clicked();

    void on_system_2_clicked();

    void on_system_3_clicked();

    void on_valo1_clicked();

    void on_valo2_clicked();

    void on_load_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
