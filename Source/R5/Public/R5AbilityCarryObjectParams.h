#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5AbilityCarryObjectData.h"
#include "R5AbilityCarryObjectParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5AbilityCarryObjectParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AbilityCarryObjectData Data;
    
    UR5AbilityCarryObjectParams();

};

