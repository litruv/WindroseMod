#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5UIMessageData.h"
#include "R5UIMessageListener.generated.h"

class UR5UIMessageListener;

UCLASS(Blueprintable)
class R5_API UR5UIMessageListener : public UObject {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnShowMessageEventReceived, const FR5UIMessageData&, NotificationData);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnHideMessageEventReceived, const FGameplayTag&, NotificationId);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShowMessageEventReceived OnShowEventReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnHideMessageEventReceived OnHideEventReceived;
    
    UR5UIMessageListener();

protected:
    UFUNCTION(BlueprintCallable)
    void ShowNotification(FGameplayTag EventTag, const FR5UIMessageData& SignalData);
    
    UFUNCTION(BlueprintCallable)
    void HideNotification(FGameplayTag EventTag, const FGameplayTag& MessageId);
    
public:
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5UIMessageListener* CreateMessageListenerWithFilter(UObject* WorldContextObject, const FGameplayTagContainer& InNotificationsFilter);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UR5UIMessageListener* CreateMessageListener(UObject* WorldContextObject);
    
};

