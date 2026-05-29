#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "R5AnimNotifyState_CapsuleCollision.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5AnimNotifyState_CapsuleCollision : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UR5AnimNotifyState_CapsuleCollision();

};

