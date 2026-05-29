#pragma once
#include "CoreMinimal.h"
#include "R5BuildingItem_IntegritySettings.generated.h"

USTRUCT(BlueprintType)
struct FR5BuildingItem_IntegritySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockMaxHorizontalLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockMaxVerticalLoad;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BlockMinimumIntersectionExtent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFloats;
    
    R5_API FR5BuildingItem_IntegritySettings();
};

