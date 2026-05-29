#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5NPhys_SensorSettings.h"
#include "R5NPhys_SensorSettings_MediumDetector.generated.h"

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5NPHYS_API UR5NPhys_SensorSettings_MediumDetector : public UR5NPhys_SensorSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LocationInLocal;
    
    UR5NPhys_SensorSettings_MediumDetector();

};

