#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CoopProxy -ObjectName=R5CoopProxyUi_ServerDescription -FallbackName=R5CoopProxyUi_ServerDescription
#include "R5CoopProxyUi_ServerDescription.h"
#include "R5DataKeeperUi_PlayCoopGame.generated.h"

class UObject;

UCLASS(Blueprintable, EditInlineNew)
class UR5DataKeeperUi_PlayCoopGame : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    UR5DataKeeperUi_PlayCoopGame();

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void StartHostServerGame(const FR5CoopProxyUi_ServerDescription& ServerDescription) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFavoriteCoopServersUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnError(const FString& ErrorMessage);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    FR5CoopProxyUi_ServerDescription GetHostServerDescription() const;
    
    UFUNCTION(BlueprintCallable)
    FR5CoopProxyUi_ServerDescription GetFavoriteServerDescription(const FString& PersistentServerId);
    
    UFUNCTION(BlueprintCallable)
    static FR5CoopProxyUi_ServerDescription GetCurrentCoopServerDescription(const UObject* Wco);
    
    UFUNCTION(BlueprintCallable)
    void DeleteFavoriteCoopServer(const FString& PersistentServerId);
    
};

