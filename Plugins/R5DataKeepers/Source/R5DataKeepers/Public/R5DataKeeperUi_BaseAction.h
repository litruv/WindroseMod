#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"
#include "R5DataKeeperUi_BaseAction.generated.h"

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeperUi_BaseAction : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UR5DataKeeperUi_BaseAction();

};

