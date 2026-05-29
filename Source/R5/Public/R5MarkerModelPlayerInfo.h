#pragma once
#include "CoreMinimal.h"
#include "R5MarkerModelBase.h"
#include "R5MarkerModelPlayerInfo.generated.h"

class AR5PlayerState;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, HideDropdown)
class UR5MarkerModelPlayerInfo : public UR5MarkerModelBase {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_NickName, meta=(AllowPrivateAccess=true))
    FString Nickname;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerState, meta=(AllowPrivateAccess=true))
    AR5PlayerState* PlayerState;
    
public:
    UR5MarkerModelPlayerInfo();

    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

private:
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_NickName();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerInitialized();
    
protected:
    UFUNCTION(BlueprintCallable)
    void NickNameChanged(const FString& NickNameName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsLocallyControlled() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIcon() const;
    
};

