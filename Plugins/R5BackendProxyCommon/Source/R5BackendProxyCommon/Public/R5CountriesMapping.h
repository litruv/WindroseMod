#pragma once
#include "CoreMinimal.h"
#include "R5CountriesMapping.generated.h"

USTRUCT(BlueprintType)
struct FR5CountriesMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Country;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    R5BACKENDPROXYCOMMON_API FR5CountriesMapping();
};

