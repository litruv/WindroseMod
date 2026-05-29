#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5StaggerAbilityData.h"
#include "R5StaggerAbilityParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5StaggerAbilityParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5StaggerAbilityData Data;
    
    UR5StaggerAbilityParams();

};

