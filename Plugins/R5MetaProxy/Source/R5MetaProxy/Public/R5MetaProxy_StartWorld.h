#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5MetaProxyGameServerInfo.h"
#include "R5MetaProxy_DevIslandEntry.h"
#include "R5MetaProxy_MapData.h"
#include "R5MetaProxy_StartWorld.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class R5METAPROXY_API UR5MetaProxy_StartWorld : public UInterface {
    GENERATED_BODY()
};

class R5METAPROXY_API IR5MetaProxy_StartWorld : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void StartSelectedWorld(const FString& IslandName, bool NeedAddToPlayerSave, const FString& Dev_AdditionalServerParams) PURE_VIRTUAL(StartSelectedWorld,);
    
    UFUNCTION(BlueprintCallable)
    virtual void StartSavedIsland(const FR5MetaProxy_DevIslandEntry& DevEntry) PURE_VIRTUAL(StartSavedIsland,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SelectWorld(const FR5BLRecordId& CommonIslandId) PURE_VIRTUAL(SelectWorld,);
    
    UFUNCTION(BlueprintCallable)
    virtual void SelectSessionId(const FString& SessionId) PURE_VIRTUAL(SelectSessionId,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RequestForListOfServers() PURE_VIRTUAL(RequestForListOfServers,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveSavedIsland(const FR5MetaProxy_DevIslandEntry& DevEntry) PURE_VIRTUAL(RemoveSavedIsland,);
    
    UFUNCTION(BlueprintCallable)
    virtual void JoinToSelectedSession() PURE_VIRTUAL(JoinToSelectedSession,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool InProgress() const PURE_VIRTUAL(InProgress, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasSelectedWorld() const PURE_VIRTUAL(HasSelectedWorld, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasSelectedSession() const PURE_VIRTUAL(HasSelectedSession, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FR5MetaProxy_MapData GetSelectedWorld() PURE_VIRTUAL(GetSelectedWorld, return FR5MetaProxy_MapData{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FR5MetaProxyGameServerInfo GetSelectedServer() const PURE_VIRTUAL(GetSelectedServer, return FR5MetaProxyGameServerInfo{};);
    
    UFUNCTION(BlueprintCallable)
    virtual FR5BLRecordId GetSelectedIslandId() const PURE_VIRTUAL(GetSelectedIslandId, return FR5BLRecordId{};);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FR5MetaProxy_DevIslandEntry> GetSavedIslandsForSelectedWorld() PURE_VIRTUAL(GetSavedIslandsForSelectedWorld, return TArray<FR5MetaProxy_DevIslandEntry>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FR5MetaProxy_DevIslandEntry> GetSavedIslands() PURE_VIRTUAL(GetSavedIslands, return TArray<FR5MetaProxy_DevIslandEntry>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FR5MetaProxy_MapData> GetMaps() PURE_VIRTUAL(GetMaps, return TArray<FR5MetaProxy_MapData>(););
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FR5MetaProxyGameServerInfo> GetAvailableServersList() const PURE_VIRTUAL(GetAvailableServersList, return TArray<FR5MetaProxyGameServerInfo>(););
    
    UFUNCTION(BlueprintCallable)
    virtual bool CanStartSelectedWorld() const PURE_VIRTUAL(CanStartSelectedWorld, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual void Cancel() PURE_VIRTUAL(Cancel,);
    
};

