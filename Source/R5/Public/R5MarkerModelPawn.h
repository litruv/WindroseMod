#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttribute -FallbackName=GameplayAttribute
#include "AttributeSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BLCommon -ObjectName=R5BLRecordId -FallbackName=R5BLRecordId
#include "R5BLRecordId.h"
#include "R5MarkerModelBase.h"
#include "R5MarkerModelPawn.generated.h"

class UR5AttributeSet;
class UR5DeathParams;
class UR5PostureAttributeSet;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, HideDropdown)
class UR5MarkerModelPawn : public UR5MarkerModelBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnPartyChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOwnerChanged);
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDeath);
    DECLARE_DYNAMIC_DELEGATE(FOnAttributeChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDeath OnDeath;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPartyChanged OnPartyChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOwnerChanged OnOwnerChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
public:
    UR5MarkerModelPawn();

private:
    UFUNCTION(BlueprintCallable)
    void OnPartyChangedEventHandle(int32 NewPartyId);
    
    UFUNCTION(BlueprintCallable)
    void OnOwnershipChanged(const FR5BLRecordId& NewOwnerId);
    
    UFUNCTION(BlueprintCallable)
    void OnDeathSpectatorStarted(UR5DeathParams* DeathParams);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ListenForChangeAttributes(TArray<FGameplayAttribute> Attributes, UR5MarkerModelPawn::FOnAttributeChanged Delegate);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsPartyMember();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwned() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5PostureAttributeSet* GetPostureAttributeSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5AttributeSet* GetAttributeSet() const;
    
};

