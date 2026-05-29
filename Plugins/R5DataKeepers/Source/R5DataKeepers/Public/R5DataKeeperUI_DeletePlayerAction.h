#pragma once
#include "CoreMinimal.h"
#include "R5DataKeeperUI_PlayerAction.h"
#include "R5DataKeeperUI_DeletePlayerAction.generated.h"

class UObject;
class UR5DataKeeperUI_DeletePlayerAction;

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeperUI_DeletePlayerAction : public UR5DataKeeperUI_PlayerAction {
    GENERATED_BODY()
public:
    UR5DataKeeperUI_DeletePlayerAction();

    UFUNCTION(BlueprintCallable)
    static UR5DataKeeperUI_DeletePlayerAction* DeletePlayer(UObject* Wco, const FString& InPlayerId);
    
};

