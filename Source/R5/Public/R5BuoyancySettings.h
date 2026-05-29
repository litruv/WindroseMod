#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5BuoyancySettings.generated.h"

class AR5AttachableBuoyancyAuthorityActor;
class UR5NPhys_ModelSettings;

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class R5_API UR5BuoyancySettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5NPhys_ModelSettings> CommonPropsModelSettings;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AR5AttachableBuoyancyAuthorityActor> AttachableBuoyancyActorClass;
    
    UR5BuoyancySettings();

};

