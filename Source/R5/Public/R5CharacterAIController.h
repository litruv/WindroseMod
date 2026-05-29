#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "AIController.h"
#include "R5CharacterAIController.generated.h"

class AActor;
class UBehaviorTree;

UCLASS(Blueprintable, NoExport)
class R5_API AR5CharacterAIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    AR5CharacterAIController(const FObjectInitializer& ObjectInitializer);

protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnGetDamage(float DamageAmount, float CurrentHealth, AActor* InstigatorActor);
    
};

