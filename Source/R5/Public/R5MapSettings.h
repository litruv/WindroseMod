#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5MapDetail.h"
#include "R5MapSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=R5MapSettings)
class R5_API UR5MapSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5MapDetail> MapsConfig;
    
    UR5MapSettings();

};

