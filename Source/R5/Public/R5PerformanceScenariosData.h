#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5JsonAssets -ObjectName=R5JsonRuntimePDA -FallbackName=R5JsonRuntimePDA
#include "R5JsonRuntimePDA.h"
#include "CharacterRunTest.h"
#include "CharactersSpawnByListTest.h"
#include "CharactersSpawnByPointsTest.h"
#include "ShipTestData.h"
#include "TeleportTestAutomationData.h"
#include "TeleportTestManualData.h"
#include "UITest.h"
#include "R5PerformanceScenariosData.generated.h"

UCLASS(Blueprintable, NonTransient)
class R5_API UR5PerformanceScenariosData : public UR5JsonRuntimePDA {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SetDayTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SetNightTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FTeleportTestManualData> TeleportTestManualData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTeleportTestAutomationData TeleportTestAutoGenData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharacterRunTest> CharacterRunTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FShipTestData> ShipTestData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharactersSpawnByPointsTest> CharactersSpawnByPointsTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharactersSpawnByListTest> CharactersSpawnByListTest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUITest UITest;
    
    UR5PerformanceScenariosData();

};

