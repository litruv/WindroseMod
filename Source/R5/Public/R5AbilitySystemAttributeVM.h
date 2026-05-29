#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttribute -FallbackName=GameplayAttribute
#include "AttributeSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMViewModel -FallbackName=R5MVVMViewModel
#include "R5MVVMViewModel.h"
#include "R5AbilitySystemAttributeVM.generated.h"

class UR5MVVMObserver_Attribute;

UCLASS(Blueprintable)
class R5_API UR5AbilitySystemAttributeVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMObserver_Attribute* AttributeObserver;
    
public:
    UR5AbilitySystemAttributeVM();

    UFUNCTION(BlueprintCallable)
    void RemoveObservedAttribute(const FGameplayAttribute& Attribute);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetObservedAttributeValue(const FGameplayAttribute& Attribute) const;
    
    UFUNCTION(BlueprintCallable)
    void AddObservedAttribute(const FGameplayAttribute& Attribute);
    
};

