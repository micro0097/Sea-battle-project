#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEdit_2->setEchoMode(QLineEdit::Password);
    this->setFixedSize(862,600);
    Sign_up *sign_up= new Sign_up();
    connect(ui->pushButton_3,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->pushButton_3,SIGNAL(clicked()),sign_up,SLOT(show()));
    Menu *menu= new Menu();
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(close()));
    connect(ui->pushButton,SIGNAL(clicked()),menu,SLOT(show()));
    Dialog *dialog= new Dialog;
    connect(ui->pushButton_2,SIGNAL(clicked()),dialog,SLOT(show()));
}

MainWindow::~MainWindow()
{
    delete ui;
}
