#pragma once
#include "CoreMinimal.h"
#include "R5NoASCHealthComponent.h"
#include "R5SelfRevivingHealthComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5SelfRevivingHealthComponent : public UR5NoASCHealthComponent {
    GENERATED_BODY()
public:
    UR5SelfRevivingHealthComponent(const FObjectInitializer& ObjectInitializer);

};

