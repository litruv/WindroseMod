#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5AIDataToDependentEntitiesCount.h"
#include "R5SpawnAICharacterParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5SpawnAICharacterParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIDataToDependentEntitiesCount Data;
    
    UR5SpawnAICharacterParams();

};

