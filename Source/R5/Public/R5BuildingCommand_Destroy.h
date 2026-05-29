#pragma once
#include "CoreMinimal.h"
#include "R5BuildingBlockIdentificationData.h"
#include "R5BuildingBrushComponent.h"
#include "R5BuildingCommand.h"
#include "R5BuildingCommand_Destroy.generated.h"

class UR5BuildingBlockContainer;

UCLASS(Blueprintable)
class R5_API UR5BuildingCommand_Destroy : public UR5BuildingCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BuildingBlockIdentificationData> BlocksIdentificationData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BuildingBlockContainer* DestroyedBlocksContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BuildingBrushComponent> DestroyedBlocksData;
    
public:
    UR5BuildingCommand_Destroy();

};

