#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5GOS_GenericActors_TouchInvoker.generated.h"

class UCapsuleComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5GOS_GenericActors_TouchInvoker : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UCapsuleComponent* CollisionCapsule;
    
    UR5GOS_GenericActors_TouchInvoker(const FObjectInitializer& ObjectInitializer);

};

