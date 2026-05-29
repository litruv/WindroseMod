#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "R5ANS_ClearWeaponTraceDebug.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5ANS_ClearWeaponTraceDebug : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UR5ANS_ClearWeaponTraceDebug();

};

