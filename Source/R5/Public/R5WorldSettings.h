#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=WorldSettings -FallbackName=WorldSettings
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5WorldSettings.generated.h"

class UR5BuildingLimitsComponent;
class UR5ContextualSpawnerWorldSettingsComponent;
class UR5EncounterSubsystemParams;
class UR5GASWorldSettings;

UCLASS(Blueprintable, NoExport)
class R5_API AR5WorldSettings : public AWorldSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5BuildingLimitsComponent* BuildingLimitsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5EncounterSubsystemParams* EncounterSubsystemParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5GASWorldSettings* GASWorldSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ShipBlockedCameraStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ContextualSpawnerWorldSettingsComponent* ContextualSpawners;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFastTravelAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreateSignificanceSubsystem;
    
    AR5WorldSettings(const FObjectInitializer& ObjectInitializer);

};

