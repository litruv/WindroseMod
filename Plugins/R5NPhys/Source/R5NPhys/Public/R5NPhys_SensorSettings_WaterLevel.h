#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5NPhys_SensorSettings.h"
#include "R5NPhys_SensorSettings_WaterLevel.generated.h"

UCLASS(Blueprintable)
class R5NPHYS_API UR5NPhys_SensorSettings_WaterLevel : public UR5NPhys_SensorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FirstLocationInLocal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector SecondLocationInLocal;
    
    UR5NPhys_SensorSettings_WaterLevel();

};

