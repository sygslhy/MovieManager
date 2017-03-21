#include <QMessageBox>
#include "logindlg.h"
#include "ui_logindlg.h"

LoginDlg::LoginDlg(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LoginDlg)
{
    ui->setupUi(this);
}

LoginDlg::~LoginDlg()
{
    delete ui;
}



void LoginDlg::on_login_clicked()
{
    // 判断用户名和密码是否正确，
    // 如果错误则弹出警告对话框
    if(ui->usernameEdit->text().trimmed() == tr("ysun") &&
           ui->passwordEdit->text() == tr("Zjx850419!"))
    {
       accept();
    } else {
       QMessageBox::warning(this, tr("Waring"),
                             tr("user name or password error!"),
                             QMessageBox::Yes);
       // 清空内容并定位光标
       ui->usernameEdit->clear();
       ui->passwordEdit->clear();
       ui->usernameEdit->setFocus();
    }
}
