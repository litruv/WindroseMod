#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5P2pGateSettings.generated.h"

class UR5P2pGateSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5P2PGATE_API UR5P2pGateSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsP2pGateEnabled;
    
    UR5P2pGateSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5P2pGateSettings* Get();
    
};

