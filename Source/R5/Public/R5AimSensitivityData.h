#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLGamepadSensitivity -FallbackName=ER5BLGamepadSensitivity
#include "ER5BLGamepadSensitivity.h"
#include "R5AimSensitivityData.generated.h"

UCLASS(Blueprintable, Const)
class R5_API UR5AimSensitivityData : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5BLGamepadSensitivity, float> SensitivityMap;
    
public:
    UR5AimSensitivityData();

};

