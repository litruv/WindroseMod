#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
#include "Templates/SubclassOf.h"
#include "R5STT_SpawnAICharacter_InstanceData.generated.h"

class AR5AICharacter;

USTRUCT(BlueprintType)
struct R5_API FR5STT_SpawnAICharacter_InstanceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AR5AICharacter> AICharacterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
    FR5STT_SpawnAICharacter_InstanceData();
};

