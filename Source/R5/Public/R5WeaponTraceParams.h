#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "WeaponTraceByTimeData.h"
#include "R5WeaponTraceParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5WeaponTraceParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FWeaponTraceByTimeData> TraceData;
    
    UR5WeaponTraceParams();

};

