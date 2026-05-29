#pragma once
#include "CoreMinimal.h"
#include "R5BLKeyMapping.h"
#include "R5BLKeyMappingRow.generated.h"

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLKeyMappingRow {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString MappingName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLKeyMapping> Mappings;
    
    FR5BLKeyMappingRow();
};

