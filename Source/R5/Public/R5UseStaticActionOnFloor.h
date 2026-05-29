#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5UseStaticActionOnFloorData.h"
#include "R5UseStaticActionOnFloor.generated.h"

UCLASS(Blueprintable)
class R5_API UR5UseStaticActionOnFloor : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5UseStaticActionOnFloorData Data;
    
    UR5UseStaticActionOnFloor();

};

