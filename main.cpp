#include "mainwindow.h"
#include <QApplication>
#include<QPushButton>
#include<QScrollBar>
#include<QSlider>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication prog(argc, argv);
//   QPushButton* button = new QPushButton("Close");
//   QObject::connect(button,SIGNAL(clicked()),&prog,SLOT(quit()));
//   button->show();
    QPushButton* WhoIAm = new QPushButton("Who I AM?");
    QLabel* IAm = new QLabel("???");

    QObject::connect(WhoIAm,SIGNAL(clicked()),&prog,SLOT(IAm->setText(" I am very cool project")));

    return prog.exec();

}
