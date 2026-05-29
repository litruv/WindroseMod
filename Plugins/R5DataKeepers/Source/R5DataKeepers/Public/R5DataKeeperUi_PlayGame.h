#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5MetaProxy -ObjectName=R5MetaProxy_IslandEntry -FallbackName=R5MetaProxy_IslandEntry
#include "R5MetaProxy_IslandEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5MetaProxy -ObjectName=R5MetaProxy_StartCoop -FallbackName=R5MetaProxy_StartCoop
#include "R5MetaProxy_StartCoop.h"
#include "ER5AddFriendsRealmResponseType.h"
#include "R5DataKeeperUi_PlayGame.generated.h"

class UR5BLPlayerView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UR5DataKeeperUi_PlayGame : public UHFSMStateComponent, public IR5MetaProxy_StartCoop {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BLPlayerView* PlayerView;
    
public:
    UR5DataKeeperUi_PlayGame();

protected:
    UFUNCTION(BlueprintCallable)
    void StartInitialIsland();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProgress(const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnError(const FString& ErrorCode, const FString& ErrorSource, const FString& ErrorMessage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAddFriendsRealmResponse(ER5AddFriendsRealmResponseType Message);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void SelectFriendsRealm(int32 idx) override PURE_VIRTUAL(SelectFriendsRealm,);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSelectedFriendsRealm() override PURE_VIRTUAL(RemoveSelectedFriendsRealm,);
    
    UFUNCTION(BlueprintCallable)
    bool InProgress() const override PURE_VIRTUAL(InProgress, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasSelectedFriendsRealm() const override PURE_VIRTUAL(HasSelectedFriendsRealm, return false;);
    
    UFUNCTION(BlueprintCallable)
    FString GetSelectedRealmsOwnerNickname() const override PURE_VIRTUAL(GetSelectedRealmsOwnerNickname, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    int32 GetSelectedFriendsRealmIndex() const override PURE_VIRTUAL(GetSelectedFriendsRealmIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    TArray<FR5MetaProxy_IslandEntry> GetRememberedIslands() override PURE_VIRTUAL(GetRememberedIslands, return TArray<FR5MetaProxy_IslandEntry>(););
    
    UFUNCTION(BlueprintCallable)
    FString GetPersonalRealmInfo() const override PURE_VIRTUAL(GetPersonalRealmInfo, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    void ConnectToSelectedRealm() override PURE_VIRTUAL(ConnectToSelectedRealm,);
    
    UFUNCTION(BlueprintCallable)
    void ConnectToIsland(FR5BLRecordId islandId) override PURE_VIRTUAL(ConnectToIsland,);
    
    UFUNCTION(BlueprintCallable)
    void CancelConnection() override PURE_VIRTUAL(CancelConnection,);
    
    UFUNCTION(BlueprintCallable)
    void AddFriendsRealm(const FString& RealmInfoStr) override PURE_VIRTUAL(AddFriendsRealm,);
    
};

