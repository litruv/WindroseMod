#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DebugDrawComponent -FallbackName=DebugDrawComponent
#include "Debug/DebugDrawComponent.h"
#include "R5NPhys_PhysModelVisualizer.generated.h"

class UR5NPhys_ModelSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5NPHYS_API UR5NPhys_PhysModelVisualizer : public UDebugDrawComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NPhys_ModelSettings* R5NPhys_ModelSettings;
    
public:
    UR5NPhys_PhysModelVisualizer(const FObjectInitializer& ObjectInitializer);

};

