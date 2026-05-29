#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5DataKeeperUi_SetupAccountNickname.generated.h"

class UR5BLAccountView;

UCLASS(Blueprintable, EditInlineNew)
class UR5DataKeeperUi_SetupAccountNickname : public UHFSMStateComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UR5BLAccountView* AccountView;
    
public:
    UR5DataKeeperUi_SetupAccountNickname();

    UFUNCTION(BlueprintCallable)
    void SetNickname(const FString& NewNickname);
    
    UFUNCTION(BlueprintCallable)
    bool CheckNickname(const FString& NewNickname);
    
};

