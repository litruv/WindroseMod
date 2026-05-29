#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5PlayerDialogueComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5PlayerDialogueComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UR5PlayerDialogueComponent(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void HandleSelectChoice(const FGuid& SelectedGuid);
    
    UFUNCTION(BlueprintCallable)
    void HandleNextMessage();
    
    UFUNCTION(BlueprintCallable)
    void DeferredRepaintUI();
    
};

