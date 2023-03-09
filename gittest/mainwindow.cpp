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
            SLOT(  PushButtonMelonClicked()  )
            );

    connect(ui->pushButton_2,
            SIGNAL(clicked()),
            this,
            SLOT(  PushButtonAppleClicked()  )
            );

    connect(ui->pushButton_3,
            SIGNAL(clicked()),
            this,
            SLOT(  PushButtonStrawberyClicked()  )
            );
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::PushButtonMelonClicked()
{
    qDebug() << "melon clicked()!";
}

void MainWindow::PushButtonAppleClicked()
{
    qDebug() << "apple clicked()!";
}

void MainWindow::PushButtonStrawberyClicked()
{
    qDebug() << "strawbery clicked()!";
}
