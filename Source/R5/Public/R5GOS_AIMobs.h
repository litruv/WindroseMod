#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GameplayOrchestrator -ObjectName=R5GameplayOrchestratorSubsystem -FallbackName=R5GameplayOrchestratorSubsystem
#include "R5GameplayOrchestratorSubsystem.h"
#include "ER5AIMobRemoveType.h"
#include "R5AIMobDefinition.h"
#include "R5AIMobHandle.h"
#include "R5AIMobSpec.h"
#include "R5GOS_AIMobs.generated.h"

class AActor;
class UObject;
class UR5GOS_AIMobs;

UCLASS(Blueprintable)
class R5_API UR5GOS_AIMobs : public UR5GameplayOrchestratorSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<FR5AIMobHandle, FR5AIMobSpec> MobSpecs;
    
public:
    UR5GOS_AIMobs();

    UFUNCTION(BlueprintCallable)
    void RemoveMob(FR5AIMobHandle InMobHandle, ER5AIMobRemoveType InType);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnMobActorTermination(AActor* InMobActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static UR5GOS_AIMobs* Get(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    FR5AIMobHandle AddMob(FR5AIMobDefinition InDefinition, bool bTryActivateImmediately);
    
};

