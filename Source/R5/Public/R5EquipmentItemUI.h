#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5EquipmentItemUI.generated.h"

class UR5EquipmentItemUIParams;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5EquipmentItemUI : public UActorComponent {
    GENERATED_BODY()
public:
    UR5EquipmentItemUI(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5EquipmentItemUIParams* GetEquipmentItemUIParams() const;
    
};

