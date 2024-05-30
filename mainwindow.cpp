#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "loot_system.h"
#include <QPixmap>
#include <QGraphicsOpacityEffect>
#include <QPropertyAnimation>
#include <QPainter>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    QPixmap pix(":/resources/img/treasure_chest.png");
    int w = ui->label_pic_chest->width();
    int h = ui->label_pic_chest->height();
    ui->label_pic_chest->setPixmap(pix.scaled(w, h, Qt::KeepAspectRatio));

}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_btnOpenChest_clicked()
{

    FadeOut(ui->label_pic_chest);

    Weapon *w1 = WeaponGenerator::generate_a_weapon();
    Logger::get().print(__FILE__, __LINE__, "Weapon created!");

    int w = ui->label_pic_chest->width();
    int h = ui->label_pic_chest->height();
    //QPixmap weapon_image = w1->Draw();
    ui->label_pic_chest->setPixmap(w1->Draw().scaled(w, h, Qt::KeepAspectRatio));
    FadeIn(ui->label_pic_chest);

    QColor rarity_colour;
    switch(w1->GetRarityCount())
    {
        case 0: rarity_colour = rarity_colour.fromRgb(160, 160, 160); break;
        case 1: rarity_colour = rarity_colour.fromRgb(120, 220, 120); break;
        case 2: rarity_colour = rarity_colour.fromRgb(40, 80, 255); break;
        case 3: rarity_colour = rarity_colour.fromRgb(180, 0, 255); break;
        case 4: rarity_colour = rarity_colour.fromRgb(255, 106, 0); break;
    }

    ui->textEdit->setTextColor(rarity_colour);
    ui->textEdit->setText(QString::fromStdString(w1->GetInfo()));
    delete w1;
    Logger::get().print(__FILE__, __LINE__, "Weapon pointer deleted.");
}

void MainWindow::FadeOut(QLabel *w)
{
    //Fade out widget(image)
    QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);
    w->setGraphicsEffect(eff);
    QPropertyAnimation *a = new QPropertyAnimation(eff,"opacity");
    a->setDuration(1800);
    a->setStartValue(1);
    a->setEndValue(0);
    a->setEasingCurve(QEasingCurve::OutBack);
    a->start(QPropertyAnimation::DeleteWhenStopped);
    //connect(a,SIGNAL(finished()),this,SLOT(hideThisWidget()));
}

void MainWindow::FadeIn(QLabel *w)
{
    //Fade in widget(image)
    QGraphicsOpacityEffect *eff = new QGraphicsOpacityEffect(this);
    w->setGraphicsEffect(eff);
    QPropertyAnimation *a = new QPropertyAnimation(eff,"opacity");
    a->setDuration(1400);
    a->setStartValue(0);
    a->setEndValue(1);
    a->setEasingCurve(QEasingCurve::InBack);
    a->start(QPropertyAnimation::DeleteWhenStopped);
}
