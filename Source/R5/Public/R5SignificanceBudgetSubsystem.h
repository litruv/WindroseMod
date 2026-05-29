#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5SignificanceBudgetSubsystem.generated.h"

UCLASS(Blueprintable)
class R5_API UR5SignificanceBudgetSubsystem : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
    UR5SignificanceBudgetSubsystem();

};

