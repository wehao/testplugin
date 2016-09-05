#ifndef PLUGIN_H
#define PLUGIN_H

#include <QQmlExtensionPlugin>

class Plugin : public QQmlExtensionPlugin
{
    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)

public:
    void registerTypes(const char *uri);
};

#endif // PLUGIN_H
