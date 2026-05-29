#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=HUD -FallbackName=HUD
#include "GameFramework/HUD.h"
#include "R5DebugHUD.generated.h"

UCLASS(Blueprintable, NoExport, NonTransient)
class R5DEBUGHUD_API AR5DebugHUD : public AHUD {
    GENERATED_BODY()
public:
    AR5DebugHUD(const FObjectInitializer& ObjectInitializer);

};

