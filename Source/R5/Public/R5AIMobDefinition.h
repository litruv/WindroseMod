#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5GameplayEffectWithPredefinedMagnitudes -FallbackName=R5GameplayEffectWithPredefinedMagnitudes
#include "R5GameplayEffectWithPredefinedMagnitudes.h"
#include "R5AIMobSpawnPoint.h"
#include "Templates/SubclassOf.h"
#include "R5AIMobDefinition.generated.h"

class AActor;
class APawn;
class UR5AIPawnParams;
class UR5AS_AgentParams;
class UR5BLLootParams;

USTRUCT(BlueprintType)
struct R5_API FR5AIMobDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> Class;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIMobSpawnPoint SpawnPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bResetPositionOnDeactivation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AS_AgentParams* OverrideAgentParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AIPawnParams* OverrideAIPawnParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5BLLootParams> OverrideLootParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5GameplayEffectWithPredefinedMagnitudes> GameplayEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> AgroTarget;
    
    FR5AIMobDefinition();
};

