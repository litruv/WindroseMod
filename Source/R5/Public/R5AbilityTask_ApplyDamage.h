#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5GAS -ObjectName=R5AbilityTask_DefaultInstanced -FallbackName=R5AbilityTask_DefaultInstanced
#include "R5AbilityTask_DefaultInstanced.h"
#include "Templates/SubclassOf.h"
#include "R5AbilityTask_ApplyDamage.generated.h"

class AActor;
class UGameplayEffect;
class UR5DamageGEParams;
class UR5PostureDamageGEParams;
class UR5StaggerDamageGEParams;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_ApplyDamage : public UR5AbilityTask_DefaultInstanced {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DamageGEParams* DamageParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5PostureDamageGEParams* PostureDamageParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5StaggerDamageGEParams* StaggerDamageParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> AdditionalGEClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AActor* Target;
    
public:
    UR5AbilityTask_ApplyDamage();

};

