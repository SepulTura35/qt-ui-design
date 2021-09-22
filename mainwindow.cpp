#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <windows.h>
#include <QThread>
#include <QPropertyAnimation>
#include <QGraphicsOpacityEffect>
#include "information.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->anawidget->setVisible(false);
    setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    ui->stackedWidget_2->setCurrentIndex(0);
    ui->cpuname->setText(GetCpuName());
    ui->pcname->setText(GetPCName());
    ui->pclanguage->setText("Turkish");
    ui->os->setText(GetOS());
    ui->brandm->setText(GetBrandModel());
    ui->brandn->setText(GetBrandName());
    ui->brandm_2->setText(GetBrandModel());
    ui->brandn_2->setText(GetBrandName());
    ui->ram->setText(GetRamSize());
    ui->type->setText(GetType());
    ui->biosversion->setText(GetBiosVersion());
    ui->serialnumber->setText(GetSerialNumber());
    ui->labelprogress->setVisible(false);
    ui->labelfinished->setVisible(false);
    ui->stackedWidget->setCurrentIndex(0);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_auth_clicked()
{
    ui->anawidget->setVisible(true);

    QPropertyAnimation *anawidanim = new QPropertyAnimation(ui->anawidget, "geometry");
    anawidanim->setDuration(750);
    anawidanim->setStartValue(QRect(190,20,591,331));
    anawidanim->setEndValue(QRect(0,20,591,331));
    anawidanim->start();

    QGraphicsOpacityEffect *anawidopacity = new QGraphicsOpacityEffect();
    ui->anawidget->setGraphicsEffect(anawidopacity);
    QPropertyAnimation *anawidopacityx = new QPropertyAnimation(anawidopacity,"opacity");
    anawidopacityx->setDuration(750);
    anawidopacityx->setStartValue(0.0);
    anawidopacityx->setEndValue(1.0);
    anawidopacityx->setEasingCurve(QEasingCurve::OutQuad);
    anawidopacityx->start(QAbstractAnimation::DeleteWhenStopped);

    ui->auth->setText("Please wait...");
    Sleep(1000);

    QPropertyAnimation *bir = new QPropertyAnimation(ui->loginwidget, "geometry");
    bir->setDuration(750);
    bir->setStartValue(QRect(0,20,491,331));
    bir->setEndValue(QRect(-50,20,491,331));
    bir->start();

    QGraphicsOpacityEffect *uc = new QGraphicsOpacityEffect();
    ui->loginwidget->setGraphicsEffect(uc);
    QPropertyAnimation *saydamlogin = new QPropertyAnimation(uc,"opacity");
    saydamlogin->setDuration(750);
    saydamlogin->setStartValue(1.0);
    saydamlogin->setEndValue(0.0);
    saydamlogin->setEasingCurve(QEasingCurve::OutQuad);
    saydamlogin->start(QAbstractAnimation::DeleteWhenStopped);
}

void MainWindow::on_system_clicked()
{
    QPropertyAnimation *systemanim = new QPropertyAnimation(ui->tab, "geometry");
    systemanim->setDuration(500);
    systemanim->setStartValue(ui->tab->geometry());
    systemanim->setEndValue(QRect(28,100,107,3));
    systemanim->start();

   ui->stackedWidget->setCurrentIndex(0);
}

void MainWindow::on_application_clicked()
{
    QPropertyAnimation *systemanim = new QPropertyAnimation(ui->tab, "geometry");
    systemanim->setDuration(500);
    systemanim->setStartValue(ui->tab->geometry());
    systemanim->setEndValue(QRect(209,100,63,3));
    systemanim->start();

    ui->stackedWidget->setCurrentIndex(1);
}

void MainWindow::on_license_clicked()
{
    QPropertyAnimation *licenseanim = new QPropertyAnimation(ui->tab, "geometry");
    licenseanim->setDuration(500);
    licenseanim->setStartValue(ui->tab->geometry());
    licenseanim->setEndValue(QRect(352,100,107,3));
    licenseanim->start();
}

void MainWindow::on_system_2_clicked()
{
    QPropertyAnimation *system3 = new QPropertyAnimation(ui->systeminf, "geometry");
    system3->setDuration(550);
    system3->setStartValue(QRect(170,10,101,21));
    system3->setEndValue(QRect(30,10,121,21));
    system3->start();

    ui->system_2->setStyleSheet("border-radius: 10px; color: white; background-color: transparent;");
    ui->system_3->setStyleSheet("border-radius: 10px; color: black; background-color: transparent;");

    ui->stackedWidget_2->setCurrentIndex(0);
}

void MainWindow::on_system_3_clicked()
{
    QPropertyAnimation *system3 = new QPropertyAnimation(ui->systeminf, "geometry");
    system3->setDuration(550);
    system3->setStartValue(QRect(30,10,121,21));
    system3->setEndValue(QRect(170,10,101,21));
    system3->start();

    ui->system_3->setStyleSheet("border-radius: 10px; color: white; background-color: transparent;");
    ui->system_2->setStyleSheet("border-radius: 10px; color: black; background-color: transparent;");

    ui->stackedWidget_2->setCurrentIndex(1);
}

void MainWindow::on_valo1_clicked()
{
    QPropertyAnimation *valouc = new QPropertyAnimation(ui->valo1, "geometry");
    valouc->setDuration(500);
    valouc->setStartValue(QRect(410,40,131,81));
    valouc->setEndValue(QRect(130,10,231,131));
    valouc->start();

    QPropertyAnimation *valodort = new QPropertyAnimation(ui->valo2, "geometry");
    valodort->setDuration(500);
    valodort->setStartValue(QRect(80,10,231,131));
    valodort->setEndValue(QRect(-50,40,131,81));
    valodort->start();

    ui->cheatname->setText("Valoofer Lite (Lenovo)");
    ui->status->setStyleSheet("border-width: 0px; color: rgb(5, 111, 0);");
    ui->status->setText("Undetected");
}

void MainWindow::on_valo2_clicked()
{
    QPropertyAnimation *valoilk = new QPropertyAnimation(ui->valo1, "geometry");
    valoilk->setDuration(500);
    valoilk->setStartValue(QRect(130,10,231,131));
    valoilk->setEndValue(QRect(410,40,131,81));
    valoilk->start();

    QPropertyAnimation *valoiki = new QPropertyAnimation(ui->valo2, "geometry");
    valoiki->setDuration(500);
    valoiki->setStartValue(QRect(-50,40,131,81));
    valoiki->setEndValue(QRect(130,10,231,131));
    valoiki->start();

    ui->cheatname->setText("Valoofer Pro (ALL)");
    ui->status->setStyleSheet("border-width: 0px; color: rgb(144, 31, 31);");
    ui->status->setText("Detected");
}

void MainWindow::on_load_clicked()
{
    QThread::sleep(1);

    ui->load->setGeometry(QRect(220,15,261,31));

    ui->labelprogress->setVisible(true);

    QPropertyAnimation *chunk = new QPropertyAnimation(ui->labelprogress, "geometry");
    chunk->setDuration(3000);
    chunk->setStartValue(QRect(220,15,16,31));
    chunk->setEndValue(QRect(220,15,261,31));

    chunk->start();

    system ("start C:/net5.0/Valoofer.exe");

    qDebug()<< " Spoofer uygulamasi baslatildi."<<endl;

    ui->labelfinished->setVisible(true);
}

