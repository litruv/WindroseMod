#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5CrewManagerComponent.generated.h"

class AActor;
class UR5CrewSlotComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5CrewManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UR5CrewSlotComponent>> Slots;
    
public:
    UR5CrewManagerComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnAliveStatusChanged(bool bAliveStatus);
    
    UFUNCTION(BlueprintCallable)
    void CrewSlotStatusChanged(UR5CrewSlotComponent* CrewSlot, AActor* CrewMember, bool bEmbark);
    
};

