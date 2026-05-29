#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5TalentBranchProgressionData.h"
#include "R5TalentTreeProgressionParams.generated.h"

UCLASS(Blueprintable)
class R5ENTITYPROGRESSION_API UR5TalentTreeProgressionParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5TalentBranchProgressionData> Branches;
    
    UR5TalentTreeProgressionParams();

};

