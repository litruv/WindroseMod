#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5ShipModuleEfficiencyComponent.generated.h"

class UR5EntityModuleEfficiencyParams;
class UR5ModuleEfficiencyCalculator;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipModuleEfficiencyComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5EntityModuleEfficiencyParams* Params;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5ModuleEfficiencyCalculator*> EfficiencyCalculators;
    
public:
    UR5ShipModuleEfficiencyComponent(const FObjectInitializer& ObjectInitializer);

};

