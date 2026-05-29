#pragma once
#include "CoreMinimal.h"
#include "R5BLKeyMapping_V0_8_0.h"
#include "R5BLKeyMappingRow_V0_8_0.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLKeyMappingRow_V0_8_0 {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MappingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLKeyMapping_V0_8_0> Mappings;
    
    FR5BLKeyMappingRow_V0_8_0();
};

