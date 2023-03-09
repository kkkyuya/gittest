#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,
            SIGNAL(clicked()),
            this,
            SLOT(pushButtonOn()));

    // リンゴ画像を入れる
    applescene = new QGraphicsScene(parent);
    ui->graphicsView->setScene(applescene);
    QPixmap pixmap(":/res/apple.png");
    applescene->addPixmap(pixmap);
    // 正解不正解文字列の初期化(nullにする)
    ui->label->setText("");

}

MainWindow::~MainWindow()
{
    delete applescene;
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    qDebug() << "melon clicked()!";
    ui->pushButton->setText("Melon");

    ui->label->setText("Wrong");
}


void MainWindow::pushButtonOn() {

    qDebug() << "Manual connect!";
}

void MainWindow::on_pushButton_2_clicked()
{
    qDebug() << "apple clicked()!";
    ui->label->setText("Right");
}

void MainWindow::on_pushButton_3_clicked()
{
    qDebug() << "strawbery clicked()!";
    ui->label->setText("Wrong");
}
