#pragma once
#include "CoreMinimal.h"
#include "R5PlayerCharacter.h"
#include "R5FlyingCharacter.generated.h"

class UR5MovementFlyComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5FlyingCharacter : public AR5PlayerCharacter {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5MovementFlyComponent* R5MovementFlyComponent;
    
public:
    AR5FlyingCharacter(const FObjectInitializer& ObjectInitializer);

};

