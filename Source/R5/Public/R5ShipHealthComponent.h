#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "HealthComponent.h"
#include "OnModuleHealthChangedDelegate.h"
#include "Templates/SubclassOf.h"
#include "R5ShipHealthComponent.generated.h"

class UGameplayEffect;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipHealthComponent : public UHealthComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnModuleHealthChanged OnAnyModuleHealthChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShipDeathTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> KillGE;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGameplayEffect> DamageTakenPassengersGE;
    
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FOnModuleHealthChanged> Delegates;
    
public:
    UR5ShipHealthComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasModule(const FGameplayTag& ModuleTag) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetModuleAverageRelativeHealth(const FGameplayTag& ModuleTag) const;
    
};

