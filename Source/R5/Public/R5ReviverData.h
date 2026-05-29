#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Box -FallbackName=Box
#include "R5ReviverData.generated.h"

USTRUCT(BlueprintType)
struct FR5ReviverData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBox OffsetSpawnBox;
    
    R5_API FR5ReviverData();
};

