#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5HFSMCameraComponent.generated.h"

class AActor;
class UR5HFSMCameraComponentParams;
class UR5PlayerCustomizationCameraPresetParams;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5HFSMCameraComponent : public UHFSMStateComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PlayerCustomizationCameraPresetParams* PresetParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5HFSMCameraComponentParams* Params;
    
public:
    UR5HFSMCameraComponent();

    UFUNCTION(BlueprintCallable)
    void ZoomOut();
    
    UFUNCTION(BlueprintCallable)
    void ZoomIn();
    
    UFUNCTION(BlueprintCallable)
    void SwitchTracking(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    void SetCameraPreset(FGameplayTag PresetName);
    
    UFUNCTION(BlueprintCallable)
    void ResetCharacterRotation();
    
    UFUNCTION(BlueprintCallable)
    void HandleCharacterRotation(float DeltaValue);
    
};

