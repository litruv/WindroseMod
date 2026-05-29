#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CommonUtils -ObjectName=R5AssetPathProvider -FallbackName=R5AssetPathProvider
#include "R5AssetPathProvider.h"
#include "R5FlagData.h"
#include "R5ShipItemParams.h"
#include "R5FlagItemParams.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5FlagItemParams : public UR5ShipItemParams, public IR5AssetPathProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5FlagData> FlagArray;
    
    UR5FlagItemParams();


    // Fix for true pure virtual functions not being implemented
};

