#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "ER5StoreUIIndication.h"
#include "R5UICommonSettings.generated.h"

class UR5UICommonSettings;

UCLASS(Blueprintable, DefaultConfig, Config=R5UICommonSettings)
class R5_API UR5UICommonSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowComics;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowWatermarks;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDisclaimer;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5StoreUIIndication StoreIndication;
    
    UR5UICommonSettings();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UR5UICommonSettings* GetUICommonSettings();
    
};

