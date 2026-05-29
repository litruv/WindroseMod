#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMObserver -FallbackName=R5MVVMObserver
#include "R5MVVMObserver.h"
#include "R5MVVMObserverInterface_AbilitySystem.h"
#include "R5MVVMObserver_Attribute.generated.h"

class UAbilitySystemComponent;

UCLASS(Blueprintable)
class R5_API UR5MVVMObserver_Attribute : public UR5MVVMObserver, public IR5MVVMObserverInterface_AbilitySystem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* AbilitySystemComponent;
    
public:
    UR5MVVMObserver_Attribute();


    // Fix for true pure virtual functions not being implemented
};

