#ifndef ECHOACCOUNT_H
#define ECHOACCOUNT_H

#include "SDK/Account.h"
#include "SDK/Message.h"

namespace KittySDK
{
  class EchoProtocol;

  class EchoAccount: public Account
  {
    Q_OBJECT

    public:
      EchoAccount(const QString &uid, EchoProtocol *parent);

      Contact *newContact(const QString &uid);

    public slots:
      void sendMessage(const KittySDK::Message &msg);
  };
}

#endif // ECHOACCOUNT_H
