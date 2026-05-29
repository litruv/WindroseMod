#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5BuildingRestrictionSettings.h"
#include "R5BuildValidationProfile.generated.h"

UCLASS(Blueprintable)
class UR5BuildValidationProfile : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BuildingRestrictionSettings> Restrictions;
    
    UR5BuildValidationProfile();

};

