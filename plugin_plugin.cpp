#include "plugin_plugin.h"
#include "laugh.h"
#include "myrect.h"

#include<qqml.h>

void PluginPlugin::registerTypes(const char *uri)
{
    qmlRegisterType<Laugh>(uri, 1, 0, "Laugh");
    qmlRegisterType<MyRect>(uri, 1, 0, "MyRect");
}
