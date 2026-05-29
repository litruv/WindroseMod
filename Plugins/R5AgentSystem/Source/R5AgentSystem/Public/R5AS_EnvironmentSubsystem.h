#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5AS_EnvironmentSubsystem_TickFunction.h"
#include "R5AS_EnvironmentSubsystem.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5AGENTSYSTEM_API UR5AS_EnvironmentSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAllowedTargetingTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_EnvironmentSubsystem_TickFunction TickFunction;
    
public:
    UR5AS_EnvironmentSubsystem();

};

