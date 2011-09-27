#ifndef SDKPLUGINCORE_H
#define SDKPLUGINCORE_H

#include <QtCore/QVariant>
#include <QtCore/QObject>

class QToolButton;
class QString;
class QAction;

namespace KittySDK
{
  class SettingPage;
  class Contact;
  class Account;

  class PluginCore: public QObject
  {
    Q_OBJECT

    public:
      virtual QVariant setting(const QString &key, const QVariant &defaultValue = QVariant()) = 0;
      virtual void setSetting(const QString &key, const QVariant &value) = 0;

      virtual void execPluginAction(const QString &plugin, const QString &name, const QMap<QString, QVariant> &args) = 0;

      virtual QString profileName() = 0;
      virtual QString kittyDir() = 0;
      virtual QString profilesDir() = 0;
      virtual QString avatarPath(Contact *contact) = 0;

      virtual int contactCount() = 0;
      virtual Contact *contact(const int &id) = 0;
      virtual QList<Contact*> contacts(const QString &account, const QString &protocol) = 0;
      virtual QList<Contact*> contacts(const QString &protocol) = 0;

      virtual QStringList plugins() = 0;

      virtual QVariant jsonParse(const QString &json) = 0;
      virtual QString jsonStringify(const QVariant &json, int indent = 0) = 0;

      virtual void addSettingPage(SettingPage *page, const QString &parent) = 0;
      virtual void removeSettingPage(SettingPage *page) = 0;

      virtual void addToolbarAction(const QString &tb, QAction *action) = 0;
      virtual void removeToolbarAction(const QString &tb, QAction *action) = 0;
      virtual QToolButton *buttonForAction(const QString &tb, QAction *action) = 0;

      virtual void addAccount(Account *account) = 0;

      virtual QPixmap icon(const QString &id) = 0;
      virtual void addIcon(const QString &id, const QPixmap &pixmap, bool replace = true) = 0;
      virtual void removeIcon(const QString &id) = 0;

    signals:
      void allPluginsLoaded();
  };
}

#endif // SDKPLUGINCORE_H
