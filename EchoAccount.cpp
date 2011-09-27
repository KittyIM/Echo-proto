#include "EchoAccount.h"

#include "EchoProtocol.h"
#include "EchoContact.h"

using namespace KittySDK;

KittySDK::EchoAccount::EchoAccount(const QString &uid, EchoProtocol *parent): Account(uid, parent)
{
  setMe(new EchoContact(uid, this));
  me()->setDisplay(protocol()->core()->profileName());
}

KittySDK::Contact *KittySDK::EchoAccount::newContact(const QString &uid)
{
  if(contacts().contains(uid)) {
      return contacts().value(uid);
  }

  return new EchoContact(uid, this);
}

void KittySDK::EchoAccount::sendMessage(const KittySDK::Message &msg)
{
  Message msg2(msg.singleTo(), msg.from(), msg.body(), msg.timeStamp(), msg.type(), Message::Incoming);

  emit messageReceived(msg2);
}
