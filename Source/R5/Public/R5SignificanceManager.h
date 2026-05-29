#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SignificanceManager -ObjectName=SignificanceManager -FallbackName=SignificanceManager
#include "SignificanceManager.h"
#include "R5SignificanceManager.generated.h"

UCLASS(Blueprintable)
class R5_API UR5SignificanceManager : public USignificanceManager {
    GENERATED_BODY()
public:
    UR5SignificanceManager();

};

