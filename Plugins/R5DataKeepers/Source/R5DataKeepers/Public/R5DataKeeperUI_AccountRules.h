#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5DataKeeperUI_AccountRules.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5DATAKEEPERS_API UR5DataKeeperUI_AccountRules : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnProgressSnapshotLoaded, bool, bSuccess);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAccountRecreated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAccountRecreated OnAccountRecreated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnProgressSnapshotLoaded OnProgressSnapshotLoaded;
    
    UR5DataKeeperUI_AccountRules();

    UFUNCTION(BlueprintCallable)
    void RecreateAccount();
    
    UFUNCTION(BlueprintCallable)
    void Logout();
    
};

