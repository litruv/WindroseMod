#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5NPhys -ObjectName=R5NPhysSailForceParameters -FallbackName=R5NPhysSailForceParameters
#include "R5NPhysSailForceParameters.h"
#include "R5PhysSailComponent.generated.h"

class UR5NPhys_ModelSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5BUOYANCY_API UR5PhysSailComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NPhys_ModelSettings* ShipModelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NPhysSailForceParameters SailParameters;
    
public:
    UR5PhysSailComponent(const FObjectInitializer& ObjectInitializer);

};

