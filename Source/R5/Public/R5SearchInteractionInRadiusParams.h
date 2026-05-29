#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5SearchInteractionInRadiusSearchData.h"
#include "R5SearchInteractionInRadiusParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5SearchInteractionInRadiusParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5SearchInteractionInRadiusSearchData SearchInteractionData;
    
    UR5SearchInteractionInRadiusParams();

};

