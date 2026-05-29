#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "MerEntitySubsystem.generated.h"

UCLASS(Blueprintable)
class UMerEntitySubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UMerEntitySubsystem();

};

