#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5HitReactionAbilityData.h"
#include "R5HitReactionAbilityParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5HitReactionAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5HitReactionAbilityData Data;
    
    UR5HitReactionAbilityParams();

};

