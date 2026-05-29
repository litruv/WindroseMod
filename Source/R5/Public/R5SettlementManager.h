#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=TickableWorldSubsystem -FallbackName=TickableWorldSubsystem
#include "Subsystems/WorldSubsystem.h"
#include "R5SettlementManager.generated.h"

class AR5BuildingBlock;
class AR5BuildingBlock_BuildingCenter;
class AR5BuildingBlock_WithScenario;

UCLASS(Blueprintable)
class R5_API UR5SettlementManager : public UTickableWorldSubsystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<AR5BuildingBlock_BuildingCenter>> BuildingCenters;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<TWeakObjectPtr<AR5BuildingBlock_WithScenario>> ProcessQueueScenarioBlocks;
    
public:
    UR5SettlementManager();

private:
    UFUNCTION(BlueprintCallable)
    void OnBuildingBlockAdded(AR5BuildingBlock* InBuildingBlock);
    
    UFUNCTION(BlueprintCallable)
    void AddBuildingBlock(AR5BuildingBlock* InBuildingBlock, bool bSkipContainerCheck) const;
    
};

