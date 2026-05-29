#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5TargetDataProducer.generated.h"

class UGameplayAbility;

UCLASS(Abstract, Blueprintable)
class R5GAS_API UR5TargetDataProducer : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGameplayAbility* Ability;
    
public:
    UR5TargetDataProducer();

};

