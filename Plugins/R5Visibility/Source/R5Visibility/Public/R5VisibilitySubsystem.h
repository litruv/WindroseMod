#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5VisibilitySubsystem.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5VISIBILITY_API UR5VisibilitySubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAllowedTestingTime;
    
public:
    UR5VisibilitySubsystem();

};

