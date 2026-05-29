#pragma once
#include "CoreMinimal.h"
#include "R5BuildingBlock_WithScenario.h"
#include "R5CommonInteractableBuildingBlock.generated.h"

class UR5CommonInteractionTargetComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5CommonInteractableBuildingBlock : public AR5BuildingBlock_WithScenario {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CommonInteractionTargetComponent* InteractTargetComponent;
    
public:
    AR5CommonInteractableBuildingBlock(const FObjectInitializer& ObjectInitializer);

};

