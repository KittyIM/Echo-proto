#ifndef ECHOCONTACT_H
#define ECHOCONTACT_H

#include "SDK/Contact.h"

namespace KittySDK
{
  class EchoAccount;

  class EchoContact: public Contact
  {
    Q_OBJECT

    public:
      EchoContact(const QString &uid, EchoAccount *account);

  };
}

#endif // ECHOCONTACT_H
