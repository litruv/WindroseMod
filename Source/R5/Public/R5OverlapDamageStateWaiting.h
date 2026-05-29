#pragma once
#include "CoreMinimal.h"
#include "R5OverlapDamageStateStrategy.h"
#include "R5OverlapDamageStateWaiting.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5OverlapDamageStateWaiting : public UR5OverlapDamageStateStrategy {
    GENERATED_BODY()
public:
    UR5OverlapDamageStateWaiting();

};

