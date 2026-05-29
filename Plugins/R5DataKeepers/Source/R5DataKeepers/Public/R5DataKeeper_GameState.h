#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameStateBase -FallbackName=GameStateBase
#include "GameFramework/GameStateBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5DkServerData.h"
#include "R5DataKeeper_GameState.generated.h"

UCLASS(Blueprintable, NoExport)
class R5DATAKEEPERS_API AR5DataKeeper_GameState : public AGameStateBase {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ServerData, meta=(AllowPrivateAccess=true))
    FR5DkServerData ServerData;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IslandId, meta=(AllowPrivateAccess=true))
    FR5BLRecordId islandId;
    
public:
    AR5DataKeeper_GameState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_ServerData();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_IslandId();
    
};

