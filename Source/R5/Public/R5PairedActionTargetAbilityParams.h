#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5PairedActionTargetAbilityCommonData.h"
#include "R5PairedActionTargetData.h"
#include "R5PairedActionTargetAbilityParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5PairedActionTargetAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5PairedActionTargetAbilityCommonData CommonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5PairedActionTargetData> ActionTagToData;
    
    UR5PairedActionTargetAbilityParams();

};

