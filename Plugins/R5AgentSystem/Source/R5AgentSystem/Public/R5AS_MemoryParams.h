#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5AS_MemoryData.h"
#include "R5AS_MemoryParams.generated.h"

class UR5AS_MemoryPackageParams;

UCLASS(Blueprintable)
class R5AGENTSYSTEM_API UR5AS_MemoryParams : public UDataAsset {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5AS_MemoryPackageParams*> Packages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    FR5AS_MemoryData MemoryData;
    
public:
    UR5AS_MemoryParams();

};

