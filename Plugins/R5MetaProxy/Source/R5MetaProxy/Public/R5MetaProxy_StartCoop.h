#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5MetaProxy_IslandEntry.h"
#include "R5MetaProxy_StartCoop.generated.h"

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class R5METAPROXY_API UR5MetaProxy_StartCoop : public UInterface {
    GENERATED_BODY()
};

class R5METAPROXY_API IR5MetaProxy_StartCoop : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void SelectFriendsRealm(int32 idx) PURE_VIRTUAL(SelectFriendsRealm,);
    
    UFUNCTION(BlueprintCallable)
    virtual void RemoveSelectedFriendsRealm() PURE_VIRTUAL(RemoveSelectedFriendsRealm,);
    
    UFUNCTION(BlueprintCallable)
    virtual bool InProgress() const PURE_VIRTUAL(InProgress, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual bool HasSelectedFriendsRealm() const PURE_VIRTUAL(HasSelectedFriendsRealm, return false;);
    
    UFUNCTION(BlueprintCallable)
    virtual FString GetSelectedRealmsOwnerNickname() const PURE_VIRTUAL(GetSelectedRealmsOwnerNickname, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    virtual int32 GetSelectedFriendsRealmIndex() const PURE_VIRTUAL(GetSelectedFriendsRealmIndex, return 0;);
    
    UFUNCTION(BlueprintCallable)
    virtual TArray<FR5MetaProxy_IslandEntry> GetRememberedIslands() PURE_VIRTUAL(GetRememberedIslands, return TArray<FR5MetaProxy_IslandEntry>(););
    
    UFUNCTION(BlueprintCallable)
    virtual FString GetPersonalRealmInfo() const PURE_VIRTUAL(GetPersonalRealmInfo, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    virtual void ConnectToSelectedRealm() PURE_VIRTUAL(ConnectToSelectedRealm,);
    
    UFUNCTION(BlueprintCallable)
    virtual void ConnectToIsland(FR5BLRecordId islandId) PURE_VIRTUAL(ConnectToIsland,);
    
    UFUNCTION(BlueprintCallable)
    virtual void CancelConnection() PURE_VIRTUAL(CancelConnection,);
    
    UFUNCTION(BlueprintCallable)
    virtual void AddFriendsRealm(const FString& RealmInfoStr) PURE_VIRTUAL(AddFriendsRealm,);
    
};

