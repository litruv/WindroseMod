#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "R5ANS_PlayEquipmentItemMontage.generated.h"

class UAnimMontage;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5ANS_PlayEquipmentItemMontage : public UAnimNotifyState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimMontage* AnimMontage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetEquipmentSlotTypeBitmask;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlendOutTime;
    
    UR5ANS_PlayEquipmentItemMontage();

};

