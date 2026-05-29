#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5PredefinedNamedDayCycleTime.h"
#include "R5NatureSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5NATURE_API UR5NatureSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TArray<FR5PredefinedNamedDayCycleTime> PredefinedNamedDayCycleTimes;
    
    UR5NatureSettings();

    UFUNCTION(BlueprintCallable)
    static TArray<FName> GetPredefinedDayCycleTimeNames();
    
};

