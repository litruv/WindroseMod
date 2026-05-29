#pragma once
#include "CoreMinimal.h"
#include "R5OverlapDamageStateStrategy.h"
#include "R5OverlapDamageStateWaitOverlap.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5OverlapDamageStateWaitOverlap : public UR5OverlapDamageStateStrategy {
    GENERATED_BODY()
public:
    UR5OverlapDamageStateWaitOverlap();

};

