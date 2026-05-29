#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5GameplaySpawnerDebugActor.generated.h"

class UR5GameplaySpawnerParams;
class UR5SpawnerMutatorPreset;

UCLASS(Blueprintable, NoExport)
class R5_API AR5GameplaySpawnerDebugActor : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5GameplaySpawnerParams> Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UR5SpawnerMutatorPreset>> GlobalMutatorPresets;
    
public:
    AR5GameplaySpawnerDebugActor(const FObjectInitializer& ObjectInitializer);

};

