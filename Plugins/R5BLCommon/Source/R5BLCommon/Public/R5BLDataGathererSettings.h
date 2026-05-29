#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5BLDataGathererSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5BLCOMMON_API UR5BLDataGathererSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DalTransactionStackTime;
    
    UR5BLDataGathererSettings();

};

