#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIController -FallbackName=AIController
#include "AIController.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "R5AIController.generated.h"

class AActor;
class UR5AIStateTreeComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5AIController : public AAIController {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AIStateTreeComponent* StateTreeComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGameplayFocusBlocked;
    
    AR5AIController(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopLogic();
    
    UFUNCTION(BlueprintCallable)
    void StartLogic();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnGetDamage(float DamageAmount, float CurrentHealth, AActor* InstigatorActor);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPathFollowDirection() const;
    
};

