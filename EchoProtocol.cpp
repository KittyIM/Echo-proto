#include "EchoProtocol.h"

#include "SDK/constants.h"
#include "EchoAccount.h"

#include <QtCore/QDebug>

using namespace KittySDK;

KittySDK::EchoProtocol::EchoProtocol(KittySDK::PluginCore *core): Protocol(core)
{
  m_info = new ProtocolInfo("Echo Protocol", "0.0.1", "arturo182", "arturo182@tlen.pl", "http://www.arturpacholec.pl/", "EchoProto", Icons::I_BULLET);

  setAbilities(TextStandard | TextStrikethrough | TextColor | BackgroundColor);
}

QString KittySDK::EchoProtocol::statusIcon(KittySDK::Protocol::Status status)
{
    return Icons::I_BULLET;
}

KittySDK::Account *KittySDK::EchoProtocol::newAccount(const QString &uid)
{
    return new EchoAccount(uid, this);
}

QWidget *KittySDK::EchoProtocol::editWindow(KittySDK::Account *account)
{
  if(!m_window) {
    m_window = new EchoEditWindow(this);
  }

  m_window->setup(account);

  return m_window;
}

KITTY_PLUGIN(EchoProtocol)
