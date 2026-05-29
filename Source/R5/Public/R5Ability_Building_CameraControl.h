#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=EnhancedInput -ObjectName=InputActionInstance -FallbackName=InputActionInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_Building_CameraControl.generated.h"

UCLASS(Blueprintable)
class UR5Ability_Building_CameraControl : public UR5Ability {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCameraModeChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCameraModeChanged OnCameraModeChanged;
    
    UR5Ability_Building_CameraControl();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetCurrentCameraPreset() const;
    
    UFUNCTION(BlueprintCallable)
    void ChangeCameraMode(const FInputActionInstance& InputActionInstance);
    
};

