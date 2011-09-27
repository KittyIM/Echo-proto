#ifndef ECHOPROTOCOL_H
#define ECHOPROTOCOL_H

#include "EchoEditWindow.h"
#include "SDK/Protocol.h"

namespace KittySDK
{
  class EchoProtocol: public Protocol
  {
    Q_OBJECT

    public:
      EchoProtocol(PluginCore *core);

      QString statusIcon(KittySDK::Protocol::Status status);
      Account *newAccount(const QString &uid);
      QWidget *editWindow(Account *account = 0);

    private:
      QPointer<EchoEditWindow> m_window;
  };
}

#endif // ECHOPROTOCOL_H
