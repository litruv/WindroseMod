#pragma once
#include "CoreMinimal.h"
#include "R5NoASCDamageableComponent.h"
#include "R5GOS_GenericActors_DamageableComponent.generated.h"

class UR5NoASCDamageableParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5GOS_GenericActors_DamageableComponent : public UR5NoASCDamageableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NoASCDamageableParams* Params;
    
    UR5GOS_GenericActors_DamageableComponent(const FObjectInitializer& ObjectInitializer);

};

