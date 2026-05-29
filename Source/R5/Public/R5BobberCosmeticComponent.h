#pragma once
#include "CoreMinimal.h"
#include "R5ProjectileCosmeticComponent.h"
#include "R5BobberCosmeticComponent.generated.h"

class UR5BobberCosmeticParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5BobberCosmeticComponent : public UR5ProjectileCosmeticComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5BobberCosmeticParams* Params;
    
public:
    UR5BobberCosmeticComponent(const FObjectInitializer& ObjectInitializer);

};

