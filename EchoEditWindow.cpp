#include "EchoEditWindow.h"
#include "ui_EchoEditWindow.h"

#include "EchoProtocol.h"
#include "EchoAccount.h"

using namespace KittySDK;

KittySDK::EchoEditWindow::EchoEditWindow(KittySDK::Protocol *proto, QWidget *parent): QDialog(parent), m_ui(new Ui::EchoEditWindow), m_proto(proto)
{
  m_ui->setupUi(this);
}

KittySDK::EchoEditWindow::~EchoEditWindow()
{
  delete m_ui;
}

void KittySDK::EchoEditWindow::setup(KittySDK::Account *account)
{
  m_account = account;

  if(account) {
    m_ui->pushButton->setText("Nothing to edit");
  } else {
    m_ui->pushButton->setText("Add account");
  }
}

void KittySDK::EchoEditWindow::on_pushButton_clicked()
{
  if(!m_account) {
      m_proto->core()->addAccount(new EchoAccount(QString::number(qrand()), dynamic_cast<EchoProtocol*>(m_proto)));
  }
}
