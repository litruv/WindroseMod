#pragma once
#include "CoreMinimal.h"
#include "R5NoASCDamageableComponent.h"
#include "R5SimpleFoliageDamageableComponent.generated.h"

class UR5NoASCDamageableParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5SimpleFoliageDamageableComponent : public UR5NoASCDamageableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NoASCDamageableParams* Params;
    
    UR5SimpleFoliageDamageableComponent(const FObjectInitializer& ObjectInitializer);

};

