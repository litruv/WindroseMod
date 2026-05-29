#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "Math/Color.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttribute -FallbackName=GameplayAttribute
#include "AttributeSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "OnModuleHealthChangedDelegate.h"
#include "R5MarkerModelSimple.h"
#include "R5MarkerModelShip.generated.h"

class AActor;
class UAbilitySystemComponent;
class UR5AttributeSet;
class UR5BLShipView;
class UR5FactionComponent;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew, HideDropdown)
class UR5MarkerModelShip : public UR5MarkerModelSimple {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnShipNameChanged);
    DECLARE_DYNAMIC_DELEGATE(FOnAttributeChanged);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModuleHealthChanged OnAnyModuleHealthChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnShipNameChanged OnShipNameChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAggressiveBot;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FLinearColor> ShipColors;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> FactionIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BLShipView* ShipView;
    
public:
    UR5MarkerModelShip();

protected:
    UFUNCTION(BlueprintCallable)
    void OnModuleHealthChanged(const FGameplayTag& ModuleTag, float TotalHealth);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCaptainChanged(AActor* NewCaptain, AActor* OldCaptain);
    
    UFUNCTION(BlueprintCallable)
    void ListenForChangeAttributes(TArray<FGameplayAttribute> Attributes, UR5MarkerModelShip::FOnAttributeChanged Delegate);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOwnedShip() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsBot() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasHealthModule(const FGameplayTag& ModuleTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetShipName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<UTexture2D> GetFactionIcon() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5FactionComponent* GetFactionComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetColor(const FString& Key) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5AttributeSet* GetAttributeSet() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAbilitySystemComponent* GetAbilitySystemComponent() const;
    
};

