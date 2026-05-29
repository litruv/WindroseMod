#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PlayerState -FallbackName=PlayerState
#include "GameFramework/PlayerState.h"
#include "R5DataKeeper_AccountData.h"
#include "R5DataKeeper_PlayerState.generated.h"

UCLASS(Blueprintable, NoExport)
class R5DATAKEEPERS_API AR5DataKeeper_PlayerState : public APlayerState {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_AccountId, meta=(AllowPrivateAccess=true))
    FR5DataKeeper_AccountData AccountData;
    
public:
    AR5DataKeeper_PlayerState(const FObjectInitializer& ObjectInitializer);

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_AccountId();
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ClientIsReady();
    
};

