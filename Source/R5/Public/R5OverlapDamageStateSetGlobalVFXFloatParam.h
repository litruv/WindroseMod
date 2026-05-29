#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5OverlapDamageStateStrategy.h"
#include "VFXFloatParam.h"
#include "R5OverlapDamageStateSetGlobalVFXFloatParam.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5OverlapDamageStateSetGlobalVFXFloatParam : public UR5OverlapDamageStateStrategy {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FVFXFloatParam> GlobalVFXFloatParams;
    
public:
    UR5OverlapDamageStateSetGlobalVFXFloatParam();

};

