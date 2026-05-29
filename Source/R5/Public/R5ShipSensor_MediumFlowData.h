#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Weather -ObjectName=ER5N_MediumType -FallbackName=ER5N_MediumType
#include "ER5N_MediumType.h"
#include "R5ShipSensor_MediumFlowData.generated.h"

USTRUCT(BlueprintType)
struct FR5ShipSensor_MediumFlowData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5N_MediumType MediumType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize AbsoluteMediumVelocityInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize RelativeMediumVelocityInWorld;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector_NetQuantize RelativeMediumVelocityInLocal;
    
    R5_API FR5ShipSensor_MediumFlowData();
};

