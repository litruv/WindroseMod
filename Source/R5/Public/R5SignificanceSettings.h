#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5TypeSignificanceSettings.h"
#include "R5SignificanceSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5_API UR5SignificanceSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5TypeSignificanceSettings> TypeToSignificanceSettings;
    
    UR5SignificanceSettings();

};

