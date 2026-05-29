#pragma once
#include "CoreMinimal.h"
#include "R5PhysicsPerformanceCharacters.generated.h"

class ACharacter;

USTRUCT(BlueprintType)
struct R5PHYSICSPERFORMANCEOPTIMIZER_API FR5PhysicsPerformanceCharacters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ACharacter*> Characters;
    
    FR5PhysicsPerformanceCharacters();
};

