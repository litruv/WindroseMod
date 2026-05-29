#include "R5UINotificationListener.h"

UR5UINotificationListener* UR5UINotificationListener::CreateNotificationListener(UObject* WorldContextObject)
{
    return nullptr;
}

UR5UINotificationListener* UR5UINotificationListener::CreateNotificationListenerWithFilter(UObject* WorldContextObject, const FGameplayTagContainer& InNotificationsFilter)
{
    return nullptr;
}

void UR5UINotificationListener::ThrowNotification(FGameplayTag EventTag, const FR5UINotificationData& SignalData)
{
}

UR5UINotificationListener::UR5UINotificationListener()
{
}
