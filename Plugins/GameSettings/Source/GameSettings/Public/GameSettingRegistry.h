#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "GameSettingRegistry.generated.h"

class UGameSetting;
class ULocalPlayer;

UCLASS(Abstract, Blueprintable)
class GAMESETTINGS_API UGameSettingRegistry : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGameSetting*> TopLevelSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UGameSetting*> RegisteredSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULocalPlayer* OwningLocalPlayer;
    
public:
    UGameSettingRegistry();

};

