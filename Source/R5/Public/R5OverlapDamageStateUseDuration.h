#pragma once
#include "CoreMinimal.h"
#include "R5OverlapDamageStateStrategy.h"
#include "R5OverlapDamageStateUseDuration.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5OverlapDamageStateUseDuration : public UR5OverlapDamageStateStrategy {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
public:
    UR5OverlapDamageStateUseDuration();

};

