#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5LootSettings.generated.h"

class UNiagaraSystem;
class UR5InteractionTargetParams;

UCLASS(Blueprintable, DefaultConfig, Config=R5LootSettings)
class R5_API UR5LootSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FText LootTitleFormatSingle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    FText LootTitleFormatMulti;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UNiagaraSystem> LootActorVXF;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5InteractionTargetParams> InteractionTargetParams;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    double SpawnLootTickLengthLimit;
    
    UR5LootSettings();

};

