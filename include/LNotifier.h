#ifndef LNOTIFIER_H
#define LNOTIFIER_H
#include "LMessageListenner.h"


//主题 - 抽象

class ISkinNotifier
{
public:
    ISkinNotifier();
    ~ISkinNotifier();

public:
    virtual void addListenner(LMessageListenner* listenner) = 0;
    virtual void removeListenner(LMessageListenner* listenner) = 0;
    virtual void notify() = 0;


};

#endif // LNOTIFIER_H
