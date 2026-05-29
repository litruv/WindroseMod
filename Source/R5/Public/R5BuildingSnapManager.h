#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5BuildingSnapManager.generated.h"

class AR5BuildingSnapActor;

UCLASS(Blueprintable)
class R5_API UR5BuildingSnapManager : public UWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5BuildingSnapActor* SimpleOverlapChecker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5BuildingSnapActor* ComplexOverlapChecker;
    
public:
    UR5BuildingSnapManager();

};

