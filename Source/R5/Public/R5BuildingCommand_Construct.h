#pragma once
#include "CoreMinimal.h"
#include "R5BuildingBrushComponent.h"
#include "R5BuildingCommand.h"
#include "R5BuildingCommand_Construct.generated.h"

class UR5BuildingBlockContainer;

UCLASS(Blueprintable)
class R5_API UR5BuildingCommand_Construct : public UR5BuildingCommand {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FR5BuildingBrushComponent> ConstructedBlocksData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BuildingBlockContainer* ConstructionContainer;
    
public:
    UR5BuildingCommand_Construct();

};

