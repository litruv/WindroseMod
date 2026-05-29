#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5MeleeCommonEventGE.h"
#include "R5MeleeCommonGEData.h"
#include "R5MeleeCommonTagData.h"
#include "R5MeleeCommonParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5MeleeCommonParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5MeleeCommonTagData TagData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5MeleeCommonGEData GEData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5MeleeCommonEventGE> EventGEs;
    
    UR5MeleeCommonParams();

};

