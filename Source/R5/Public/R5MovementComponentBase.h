#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CharacterMovementComponent -FallbackName=CharacterMovementComponent
#include "GameFramework/CharacterMovementComponent.h"
#include "R5MovementComponentBase.generated.h"

class UR5MovementSwimmingParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5MovementComponentBase : public UCharacterMovementComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MovementSwimmingParams* SwimmingParams;
    
public:
    UR5MovementComponentBase(const FObjectInitializer& ObjectInitializer);

};

