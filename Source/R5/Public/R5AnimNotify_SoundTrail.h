#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "R5AnimNotify_SoundTrail.generated.h"

class UR5SoundTrailParams;

UCLASS(Blueprintable, CollapseCategories)
class R5_API UR5AnimNotify_SoundTrail : public UAnimNotify {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5SoundTrailParams* Params;
    
public:
    UR5AnimNotify_SoundTrail();

};

