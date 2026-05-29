#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "Math/Vector2D.h"
#include "R5FootstepEffectData.h"
#include "R5FootstepPerFootEffectData.generated.h"

USTRUCT(BlueprintType)
struct FR5FootstepPerFootEffectData : public FR5FootstepEffectData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D FootDecalSizeMultiplier;
    
    R5_API FR5FootstepPerFootEffectData();
};

