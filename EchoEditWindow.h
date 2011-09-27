#ifndef ECHOEDITWINDOW_H
#define ECHOEDITWINDOW_H

#include <QtGui/QDialog>

namespace Ui
{
  class EchoEditWindow;
}

namespace KittySDK
{
  class Protocol;
  class Account;

  class EchoEditWindow: public QDialog
  {
    Q_OBJECT

    public:
      explicit EchoEditWindow(KittySDK::Protocol *proto, QWidget *parent = 0);
      ~EchoEditWindow();

      void setup(KittySDK::Account *account);

      private slots:
      void on_pushButton_clicked();

      private:
      Ui::EchoEditWindow *m_ui;
      KittySDK::Account *m_account;
      KittySDK::Protocol *m_proto;
  };
}

#endif // ECHOEDITWINDOW_H
