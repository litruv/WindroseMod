#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "Kismet/BlueprintAsyncActionBase.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttribute -FallbackName=GameplayAttribute
#include "AttributeSet.h"
#include "OnAttributeChangedDelegate.h"
#include "R5GameplayAttributeWithOldValue.h"
#include "R5AsyncTaskAttributeChanged.generated.h"

class UAbilitySystemComponent;
class UR5AsyncTaskAttributeChanged;

UCLASS(Blueprintable)
class R5GAS_API UR5AsyncTaskAttributeChanged : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAttributeChanged OnAttributeChanged;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* ASC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FR5GameplayAttributeWithOldValue> AttributesToListenFor;
    
public:
    UR5AsyncTaskAttributeChanged();

    UFUNCTION(BlueprintCallable)
    static UR5AsyncTaskAttributeChanged* ListenForAttributesChange(UAbilitySystemComponent* AbilitySystemComponent, TArray<FGameplayAttribute> Attributes);
    
    UFUNCTION(BlueprintCallable)
    static UR5AsyncTaskAttributeChanged* ListenForAttributeChange(UAbilitySystemComponent* AbilitySystemComponent, FGameplayAttribute Attribute);
    
    UFUNCTION(BlueprintCallable)
    void EndTask();
    
};

