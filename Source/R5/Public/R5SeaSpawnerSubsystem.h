#pragma once
#include "CoreMinimal.h"
#include "R5SeaSpawnerParameter.h"
#include "R5WorldSubsystem.h"
#include "R5SeaSpawnerSubsystem.generated.h"

class UR5SeaSpawnerInvoker;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5_API UR5SeaSpawnerSubsystem : public UR5WorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreloadAheadDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5SeaSpawnerInvoker*> Invokers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5SeaSpawnerParameter> SpawnerParameters;
    
public:
    UR5SeaSpawnerSubsystem();

};

