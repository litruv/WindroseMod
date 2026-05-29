#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5CustomizationSwitcherComponent.generated.h"

class AActor;
class AR5PlayerStateBase;
class UR5CompositeMeshComponent;
class UR5EquipmentItem;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5CustomizationSwitcherComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideAnimInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ForcedLOD;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5EquipmentItem*> CachedEquippedItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CompositeMeshComponent* CompositeMeshComponent;
    
public:
    UR5CustomizationSwitcherComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void ResetVisualFromTarget(const AActor* Target);
    
    UFUNCTION(BlueprintCallable)
    bool ResetVisualFromSavedData(const AR5PlayerStateBase* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void ResetVisualFromCDO(const TSoftClassPtr<AActor> Target, int32 PredefinedArchetypeIndex);
    
    UFUNCTION(BlueprintCallable)
    void ResetEquipmentFromSavedData(const AR5PlayerStateBase* PlayerState);
    
};

