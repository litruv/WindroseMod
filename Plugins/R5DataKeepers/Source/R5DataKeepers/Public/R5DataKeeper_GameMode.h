#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameModeBase -FallbackName=GameModeBase
#include "GameFramework/GameModeBase.h"
#include "R5DataKeeper_GameMode.generated.h"

UCLASS(Blueprintable, NoExport, NonTransient)
class R5DATAKEEPERS_API AR5DataKeeper_GameMode : public AGameModeBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsAuthorizationSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsStandaloneNetModeSupported;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsServerNetModeSupported;
    
    AR5DataKeeper_GameMode(const FObjectInitializer& ObjectInitializer);

};

