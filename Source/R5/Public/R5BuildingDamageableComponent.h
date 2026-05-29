#pragma once
#include "CoreMinimal.h"
#include "R5NoASCDamageableComponent.h"
#include "R5BuildingDamageableComponent.generated.h"

class UR5NoASCDamageableParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BuildingDamageableComponent : public UR5NoASCDamageableComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NoASCDamageableParams* Params;
    
    UR5BuildingDamageableComponent(const FObjectInitializer& ObjectInitializer);

};

