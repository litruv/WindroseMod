#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EEndPlayReason -FallbackName=EEndPlayReason
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5NegativeSpaceSubsystem.generated.h"

class AActor;
class AR5NegativeSpaceSceneActor;
class UR5NegativeSpaceSettings;
class UWorld;

UCLASS(Blueprintable)
class R5_API UR5NegativeSpaceSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NegativeSpaceSettings* Settings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, AR5NegativeSpaceSceneActor*> Scenes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UWorld* CaptureWorld;
    
public:
    UR5NegativeSpaceSubsystem();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    AR5NegativeSpaceSceneActor* GetScene(const FGameplayTag& SceneTag);
    
private:
    UFUNCTION(BlueprintCallable)
    void DestroyCaptureWorld(AActor* Actor, TEnumAsByte<EEndPlayReason::Type> EndPlayReason);
    
};

