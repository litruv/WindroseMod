#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5ShipSpawnParams.h"
#include "R5ShipSpawnValidationSettings.h"
#include "R5ShipManagerParams.generated.h"

class AR5ShipPawnBase;
class UEnvQuery;

UCLASS(Blueprintable, DefaultConfig, Config=R5ShipManagerSettings)
class R5_API UR5ShipManagerParams : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEnvQuery> DefaultQueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSoftClassPtr<AR5ShipPawnBase>, FR5ShipSpawnParams> ShipSpawnParameters;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5ShipSpawnValidationSettings SpawnValidationSettings;
    
    UR5ShipManagerParams();

};

