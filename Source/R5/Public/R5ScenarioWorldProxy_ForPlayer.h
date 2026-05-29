#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioWorldProxy -FallbackName=R5ScenarioWorldProxy
#include "R5ScenarioWorldProxy.h"
#include "R5ScenarioWorldProxy_ForPlayer.generated.h"

class AR5DataKeeper_PlayerState;
class UR5BLAccountView;
class UR5BLPlayerInWorldView;
class UR5BLPlayerView;
class UR5BLScenarioSaveView;

UCLASS(Blueprintable)
class R5_API UR5ScenarioWorldProxy_ForPlayer : public UR5ScenarioWorldProxy {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLAccountView* AccountView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLPlayerView* PlayerView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLPlayerInWorldView* PlayerInWorldView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLScenarioSaveView* AccountScenarioSaveView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLScenarioSaveView* PlayerScenarioSaveView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLScenarioSaveView* PlayerInWorldScenarioSaveView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5DataKeeper_PlayerState* PlayerState;
    
public:
    UR5ScenarioWorldProxy_ForPlayer();

};

