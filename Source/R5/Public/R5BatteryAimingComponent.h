#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BatteryAimingComponentBase.h"
#include "R5BatteryAimingCursor.h"
#include "R5BatteryAimingComponent.generated.h"

class UR5BatteryAimingParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BatteryAimingComponent : public UR5BatteryAimingComponentBase {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BatteryAimingParams* Params;
    
public:
    UR5BatteryAimingComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void SetTurnPercentage(float Percentage);
    
private:
    UFUNCTION(BlueprintCallable, Server, Unreliable)
    void ServerSetCursorData(const FR5BatteryAimingCursor& InCursorData);
    
    UFUNCTION(BlueprintCallable)
    void CameraStateChanged(const FGameplayTag& NewState, const FGameplayTag& OldState);
    
};

