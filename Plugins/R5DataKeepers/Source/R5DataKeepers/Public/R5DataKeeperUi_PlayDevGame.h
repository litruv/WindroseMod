#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5MetaProxy -ObjectName=R5MetaProxyGameServerInfo -FallbackName=R5MetaProxyGameServerInfo
#include "R5MetaProxyGameServerInfo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5MetaProxy -ObjectName=R5MetaProxy_DevIslandEntry -FallbackName=R5MetaProxy_DevIslandEntry
#include "R5MetaProxy_DevIslandEntry.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5MetaProxy -ObjectName=R5MetaProxy_MapData -FallbackName=R5MetaProxy_MapData
#include "R5MetaProxy_MapData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5MetaProxy -ObjectName=R5MetaProxy_StartWorld -FallbackName=R5MetaProxy_StartWorld
#include "R5MetaProxy_StartWorld.h"
#include "R5DataKeeperUi_PlayDevGame.generated.h"

class UR5BLPlayerView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UR5DataKeeperUi_PlayDevGame : public UHFSMStateComponent, public IR5MetaProxy_StartWorld {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsOnline;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BLPlayerView* PlayerView;
    
public:
    UR5DataKeeperUi_PlayDevGame();

protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ValidateServerName(const FString& ServerName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnServersUpdate();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSavedIslandRemoved();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSavedIslandRemove();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProgress(const FString& Message);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnError(const FString& ErrorCode, const FString& ErrorSource, const FString& ErrorMessage);
    

    // Fix for true pure virtual functions not being implemented
public:
    UFUNCTION(BlueprintCallable)
    void StartSelectedWorld(const FString& IslandName, bool NeedAddToPlayerSave, const FString& Dev_AdditionalServerParams) override PURE_VIRTUAL(StartSelectedWorld,);
    
    UFUNCTION(BlueprintCallable)
    void StartSavedIsland(const FR5MetaProxy_DevIslandEntry& DevEntry) override PURE_VIRTUAL(StartSavedIsland,);
    
    UFUNCTION(BlueprintCallable)
    void SelectWorld(const FR5BLRecordId& CommonIslandId) override PURE_VIRTUAL(SelectWorld,);
    
    UFUNCTION(BlueprintCallable)
    void SelectSessionId(const FString& SessionId) override PURE_VIRTUAL(SelectSessionId,);
    
    UFUNCTION(BlueprintCallable)
    void RequestForListOfServers() override PURE_VIRTUAL(RequestForListOfServers,);
    
    UFUNCTION(BlueprintCallable)
    void RemoveSavedIsland(const FR5MetaProxy_DevIslandEntry& DevEntry) override PURE_VIRTUAL(RemoveSavedIsland,);
    
    UFUNCTION(BlueprintCallable)
    void JoinToSelectedSession() override PURE_VIRTUAL(JoinToSelectedSession,);
    
    UFUNCTION(BlueprintCallable)
    bool InProgress() const override PURE_VIRTUAL(InProgress, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasSelectedWorld() const override PURE_VIRTUAL(HasSelectedWorld, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool HasSelectedSession() const override PURE_VIRTUAL(HasSelectedSession, return false;);
    
    UFUNCTION(BlueprintCallable)
    FR5MetaProxy_MapData GetSelectedWorld() override PURE_VIRTUAL(GetSelectedWorld, return FR5MetaProxy_MapData{};);
    
    UFUNCTION(BlueprintCallable)
    FR5MetaProxyGameServerInfo GetSelectedServer() const override PURE_VIRTUAL(GetSelectedServer, return FR5MetaProxyGameServerInfo{};);
    
    UFUNCTION(BlueprintCallable)
    FR5BLRecordId GetSelectedIslandId() const override PURE_VIRTUAL(GetSelectedIslandId, return FR5BLRecordId{};);
    
    UFUNCTION(BlueprintCallable)
    TArray<FR5MetaProxy_DevIslandEntry> GetSavedIslandsForSelectedWorld() override PURE_VIRTUAL(GetSavedIslandsForSelectedWorld, return TArray<FR5MetaProxy_DevIslandEntry>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<FR5MetaProxy_DevIslandEntry> GetSavedIslands() override PURE_VIRTUAL(GetSavedIslands, return TArray<FR5MetaProxy_DevIslandEntry>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<FR5MetaProxy_MapData> GetMaps() override PURE_VIRTUAL(GetMaps, return TArray<FR5MetaProxy_MapData>(););
    
    UFUNCTION(BlueprintCallable)
    TArray<FR5MetaProxyGameServerInfo> GetAvailableServersList() const override PURE_VIRTUAL(GetAvailableServersList, return TArray<FR5MetaProxyGameServerInfo>(););
    
    UFUNCTION(BlueprintCallable)
    bool CanStartSelectedWorld() const override PURE_VIRTUAL(CanStartSelectedWorld, return false;);
    
    UFUNCTION(BlueprintCallable)
    void Cancel() override PURE_VIRTUAL(Cancel,);
    
};

