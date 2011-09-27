#include "EchoContact.h"

#include "EchoAccount.h"

using namespace KittySDK;

KittySDK::EchoContact::EchoContact(const QString &uid, EchoAccount *account): Contact(uid, account)
{
}
