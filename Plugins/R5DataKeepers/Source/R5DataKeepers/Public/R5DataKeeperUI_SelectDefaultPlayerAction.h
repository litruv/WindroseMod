#pragma once
#include "CoreMinimal.h"
#include "R5DataKeeperUI_PlayerAction.h"
#include "R5DataKeeperUI_SelectDefaultPlayerAction.generated.h"

class UObject;
class UR5DataKeeperUI_SelectDefaultPlayerAction;

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeperUI_SelectDefaultPlayerAction : public UR5DataKeeperUI_PlayerAction {
    GENERATED_BODY()
public:
    UR5DataKeeperUI_SelectDefaultPlayerAction();

    UFUNCTION(BlueprintCallable)
    static UR5DataKeeperUI_SelectDefaultPlayerAction* SelectDefaultPlayer(UObject* Wco, const FString& InPlayerId);
    
};

