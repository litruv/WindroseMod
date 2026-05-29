#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "R5TalentAbilityData.generated.h"

class UGameplayAbility;

UCLASS(Blueprintable)
class UR5TalentAbilityData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayAbility> Ability;
    
    UR5TalentAbilityData();

};

