#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
#include "R5TerraformProcessor.h"
#include "R5TerraformProcessor_DropLoot.generated.h"

class UR5SpawnLootSetup;

UCLASS(Abstract, Blueprintable)
class R5_API UR5TerraformProcessor_DropLoot : public UR5TerraformProcessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UR5SpawnLootSetup* SpawnLootSetup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemsStackData> Loot;
    
    UR5TerraformProcessor_DropLoot();

};

