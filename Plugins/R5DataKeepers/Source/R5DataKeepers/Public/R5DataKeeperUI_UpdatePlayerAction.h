#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLCharacterCustomizationData -FallbackName=R5BLCharacterCustomizationData
#include "R5BLCharacterCustomizationData.h"
#include "R5DataKeeperUI_PlayerAction.h"
#include "R5DataKeeperUI_UpdatePlayerAction.generated.h"

class UObject;
class UR5DataKeeperUI_UpdatePlayerAction;

UCLASS(Blueprintable)
class R5DATAKEEPERS_API UR5DataKeeperUI_UpdatePlayerAction : public UR5DataKeeperUI_PlayerAction {
    GENERATED_BODY()
public:
    UR5DataKeeperUI_UpdatePlayerAction();

    UFUNCTION(BlueprintCallable)
    static UR5DataKeeperUI_UpdatePlayerAction* UpdatePlayer(UObject* Wco, const FString& InPlayerId, const FString& InPlayerName, const FR5BLCharacterCustomizationData& InCustomization);
    
};

