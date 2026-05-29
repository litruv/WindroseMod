#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=ActiveGameplayEffectHandle -FallbackName=ActiveGameplayEffectHandle
#include "ActiveGameplayEffectHandle.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Camera -ObjectName=R5CameraPostProcessHandle -FallbackName=R5CameraPostProcessHandle
#include "R5CameraPostProcessHandle.h"
#include "R5Ability_InteractOption_Base.h"
#include "Templates/SubclassOf.h"
#include "R5Ability_InteractOption_TeleportInSubsystem.generated.h"

class IR5TeleportEntityInterface;
class UR5TeleportEntityInterface;
class UGameplayEffect;
class UObject;
class UR5CameraPostProcess;

UCLASS(Blueprintable)
class R5_API UR5Ability_InteractOption_TeleportInSubsystem : public UR5Ability_InteractOption_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> TeleportGameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5CameraPostProcess> PreTeleportCameraPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5CameraPostProcess> PostTeleportCameraPostProcess;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DealyAfterTeleportation;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FActiveGameplayEffectHandle> AppliedGEs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TScriptInterface<IR5TeleportEntityInterface> TargetTeleportEntity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FR5CameraPostProcessHandle PreTeleportPostProcessHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> PreloadedAssets;
    
public:
    UR5Ability_InteractOption_TeleportInSubsystem();

private:
    UFUNCTION(BlueprintCallable)
    void TryTeleport();
    
    UFUNCTION(BlueprintCallable)
    void PostProcessFinished();
    
    UFUNCTION(BlueprintCallable)
    void NetSyncTeleport();
    
    UFUNCTION(BlueprintCallable)
    void AreaPrepared();
    
    UFUNCTION(BlueprintCallable)
    void AfterTeleport();
    
};

