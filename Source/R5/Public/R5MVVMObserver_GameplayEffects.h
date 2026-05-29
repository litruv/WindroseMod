#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMObserver -FallbackName=R5MVVMObserver
#include "R5MVVMObserver.h"
#include "R5MVVMObserverInterface_AbilitySystem.h"
#include "Templates/SubclassOf.h"
#include "R5MVVMObserver_GameplayEffects.generated.h"

class UAbilitySystemComponent;
class UGameplayEffect;

UCLASS(Blueprintable)
class R5_API UR5MVVMObserver_GameplayEffects : public UR5MVVMObserver, public IR5MVVMObserverInterface_AbilitySystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystemComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> GameplayEffects;
    
public:
    UR5MVVMObserver_GameplayEffects();


    // Fix for true pure virtual functions not being implemented
};

