#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5TwoBuoyancyContactData.h"
#include "R5LandscapeContactsSettings.generated.h"

UCLASS(Blueprintable)
class R5BUOYANCY_API UR5LandscapeContactsSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AlmostImmobileSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5TwoBuoyancyContactData TwoBuoyancyContact;
    
    UR5LandscapeContactsSettings();

};

