#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5Ability -FallbackName=R5Ability
#include "R5Ability.h"
#include "R5Ability_ChannelingBeam.generated.h"

class AActor;
class UR5AbilityTask_ChannelingBeamTrace;
class UR5ChannelingBeamParams;

UCLASS(Blueprintable)
class R5_API UR5Ability_ChannelingBeam : public UR5Ability {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ChannelingBeamParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5AbilityTask_ChannelingBeamTrace* BeamTraceTask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> SpawnedActors;
    
public:
    UR5Ability_ChannelingBeam();

protected:
    UFUNCTION(BlueprintCallable)
    void OnMontageInterrupted();
    
    UFUNCTION(BlueprintCallable)
    void OnMontageFinished();
    
};

