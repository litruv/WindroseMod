#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "GameSetting.generated.h"

class UGameSetting;
class UGameSettingRegistry;
class ULocalPlayer;

UCLASS(Abstract, Blueprintable)
class GAMESETTINGS_API UGameSetting : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ULocalPlayer* LocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameSetting* SettingParent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGameSettingRegistry* OwningRegistry;
    
public:
    UGameSetting();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsActive();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetDisplayName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FName GetDevName() const;
    
};

