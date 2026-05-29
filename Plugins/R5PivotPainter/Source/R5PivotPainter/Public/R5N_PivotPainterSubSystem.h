#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSubsystem -FallbackName=WorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5N_PivotPainterSubSystemData.h"
#include "R5N_PivotPainterSubSystem.generated.h"

UCLASS(Blueprintable)
class R5PIVOTPAINTER_API UR5N_PivotPainterSubSystem : public UWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5N_PivotPainterSubSystemData SystemData;
    
public:
    UR5N_PivotPainterSubSystem();

};

