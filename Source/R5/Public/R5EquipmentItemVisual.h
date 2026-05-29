#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5EquipmentItemVisual.generated.h"

class USceneComponent;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5EquipmentItemVisual : public UActorComponent {
    GENERATED_BODY()
public:
    UR5EquipmentItemVisual(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    USceneComponent* GetSceneComponent() const;
    
};

