#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "R5AnimNotify_Footstep.generated.h"

class UR5FootstepActionParams;

UCLASS(Blueprintable, CollapseCategories)
class R5_API UR5AnimNotify_Footstep : public UAnimNotify {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5FootstepActionParams* FootstepActionParams;
    
public:
    UR5AnimNotify_Footstep();

};

