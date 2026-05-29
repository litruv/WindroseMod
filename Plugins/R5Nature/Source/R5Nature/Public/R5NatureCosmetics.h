#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5NatureCosmetics.generated.h"

class UR5DeformingTrail;
class UR5N_PivotPainterSubSystem;

UCLASS(Blueprintable)
class R5NATURE_API UR5NatureCosmetics : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DeformingTrail* R5DeformingTrailsSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5N_PivotPainterSubSystem* R5PivotSystem;
    
public:
    UR5NatureCosmetics();

};

