#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5DataKeepers -ObjectName=R5DataKeeper_GameState -FallbackName=R5DataKeeper_GameState
#include "R5DataKeeper_GameState.h"
#include "R5GameState.generated.h"

class AR5GameState;
class UObject;
class UR5GameProblems;
class UR5GameTimeComponent;
class UR5ScenarioComponent_ForIsland;
class UR5ShipsInfoComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5GameState : public AR5DataKeeper_GameState {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5GameTimeComponent* GameTimeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5GameProblems* GameProblemsComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ScenarioComponent_ForIsland* ScenarioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5ShipsInfoComponent* ShipsInfoComponent;
    
public:
    AR5GameState(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static AR5GameState* GetR5GameState(const UObject* Wco);
    
};

