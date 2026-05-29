#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5UINotificationData.h"
#include "R5UINotificationListener.generated.h"

class UR5UINotificationListener;

UCLASS(Blueprintable)
class R5_API UR5UINotificationListener : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnThrowNotificationReceived, const FR5UINotificationData&, NotificationData);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnThrowNotificationReceived OnThrowEventReceived;
    
    UR5UINotificationListener();

protected:
    UFUNCTION(BlueprintCallable)
    void ThrowNotification(FGameplayTag EventTag, const FR5UINotificationData& SignalData);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5UINotificationListener* CreateNotificationListenerWithFilter(UObject* WorldContextObject, const FGameplayTagContainer& InNotificationsFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5UINotificationListener* CreateNotificationListener(UObject* WorldContextObject);
    
};

