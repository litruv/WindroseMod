#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Buoyancy -ObjectName=R5PhysSailComponent -FallbackName=R5PhysSailComponent
#include "R5PhysSailComponent.h"
#include "R5ModuleEfficiencyInterface.h"
#include "R5PhysSailModuleComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5PhysSailModuleComponent : public UR5PhysSailComponent, public IR5ModuleEfficiencyInterface {
    GENERATED_BODY()
public:
    UR5PhysSailModuleComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

