#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5OverlapDamageStrategy.generated.h"

class AActor;
class UAbilitySystemComponent;
class UR5NewOverlapDamageComponent;

UCLASS(Blueprintable)
class R5_API UR5OverlapDamageStrategy : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5NewOverlapDamageComponent* OverlapDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAbilitySystemComponent* InstigatorAbilitySystemComponent;
    
public:
    UR5OverlapDamageStrategy();

};

