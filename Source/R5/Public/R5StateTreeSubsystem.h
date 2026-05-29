#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5StateTreeSubsystem_TickFunction.h"
#include "R5StateTreeSubsystem.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5_API UR5StateTreeSubsystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAllowedTickTimePerSecond;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAllowedTickTimePerFrame;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5StateTreeSubsystem_TickFunction TickFunction;
    
public:
    UR5StateTreeSubsystem();

};

