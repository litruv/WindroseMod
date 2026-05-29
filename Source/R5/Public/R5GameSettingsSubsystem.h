#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=LocalPlayerSubsystem -FallbackName=LocalPlayerSubsystem
#include "R5GameSettingsSubsystem.generated.h"

class UR5GameSettingRegistry;
class UR5SettingsCloud;

UCLASS(Blueprintable)
class R5_API UR5GameSettingsSubsystem : public ULocalPlayerSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5GameSettingRegistry* GameSettingRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5SettingsCloud* CloudSettings;
    
public:
    UR5GameSettingsSubsystem();

};

