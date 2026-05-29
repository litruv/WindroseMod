#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5BoardingChestData.h"
#include "R5BoardingChestParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5BoardingChestParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BoardingChestData> ChestDataArray;
    
    UR5BoardingChestParams();

};

