#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CollisionProfileName -FallbackName=CollisionProfileName
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AbilityTask -FallbackName=AbilityTask
#include "Abilities/Tasks/AbilityTask.h"
#include "R5AbilityTask_Terraform_DrawViewTarget.generated.h"

class ADecalActor;
class UGameplayAbility;
class UMaterialInterface;
class UR5AbilityTask_Terraform_DrawViewTarget;
class UR5TerraformProcessor;

UCLASS(Blueprintable)
class R5_API UR5AbilityTask_Terraform_DrawViewTarget : public UAbilityTask {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* AvailableMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UMaterialInterface* BlockedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ADecalActor* PreviewActor;
    
public:
    UR5AbilityTask_Terraform_DrawViewTarget();

    UFUNCTION(BlueprintCallable)
    static UR5AbilityTask_Terraform_DrawViewTarget* NewTask(UGameplayAbility* OwningAbility, FName TaskName, float TraceDistance, FCollisionProfileName TraceProfile, UMaterialInterface* NewAvailableMaterial, UMaterialInterface* NewBlockedMaterial, const TArray<UR5TerraformProcessor*>& TerraformProcessors);
    
};

