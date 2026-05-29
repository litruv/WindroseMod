#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=DeveloperSettings -ObjectName=DeveloperSettings -FallbackName=DeveloperSettings
#include "Engine/DeveloperSettings.h"
#include "R5PerformanceScenariosConfig.generated.h"

class UR5PerformanceScenariosData;

UCLASS(Blueprintable, DefaultConfig, Config=R5AutoTests)
class R5_API UR5PerformanceScenariosConfig : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5PerformanceScenariosData> LocationsGenlandiaMulty_Part01;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5PerformanceScenariosData> LocationsGenlandiaMulty_Part02;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5PerformanceScenariosData> AutoGenPoints;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5PerformanceScenariosData> CharacterRun_GenlandiaMulty;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5PerformanceScenariosData> ShipTest_Spawn_Tortuga;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5PerformanceScenariosData> ShipTest_Travel_Tortuga;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5PerformanceScenariosData> CharactersSpawn_byPoints;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5PerformanceScenariosData> CharactersSpawn_byList;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5PerformanceScenariosData> UITest;
    
    UR5PerformanceScenariosConfig();

};

