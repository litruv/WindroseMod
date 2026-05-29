#include "R5UIMessageListener.h"

UR5UIMessageListener* UR5UIMessageListener::CreateMessageListener(UObject* WorldContextObject)
{
    return nullptr;
}

UR5UIMessageListener* UR5UIMessageListener::CreateMessageListenerWithFilter(UObject* WorldContextObject, const FGameplayTagContainer& InNotificationsFilter)
{
    return nullptr;
}

void UR5UIMessageListener::HideNotification(FGameplayTag EventTag, const FGameplayTag& MessageId)
{
}

void UR5UIMessageListener::ShowNotification(FGameplayTag EventTag, const FR5UIMessageData& SignalData)
{
}

UR5UIMessageListener::UR5UIMessageListener()
{
}
