#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BackendProxyCommon -ObjectName=R5AddressPortEntry -FallbackName=R5AddressPortEntry
#include "R5AddressPortEntry.h"
#include "R5CaProxySettings_RegionsMapping.generated.h"

USTRUCT(BlueprintType)
struct FR5CaProxySettings_RegionsMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RegionUIName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AddressPortEntry Entry;
    
    R5CAPROXY_API FR5CaProxySettings_RegionsMapping();
};

