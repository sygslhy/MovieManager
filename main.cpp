#include "mainwindow.h"
#include <QApplication>
#include "logindlg.h"
#include <QListWidget>
#include <QPushButton>
#include <QListWidgetItem>
#include <QLabel>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w; //主界面

    LoginDlg login; //登陆界面
    if(login.exec()==QDialog::Accepted)
    {
        QPushButton *button=new QPushButton;
        QLabel *label =new QLabel("Test");
        QListWidgetItem *item=new QListWidgetItem;
        QListWidget lw;
        lw.insertItem(1,item);
        lw.setItemWidget(item,button);
        lw.setItemWidget(item,label);
         lw.show();
         return a.exec();
    }
    else return 0;

}
