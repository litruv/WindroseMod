#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BackendProxyCommon -ObjectName=R5AddressPortEntry -FallbackName=R5AddressPortEntry
#include "R5AddressPortEntry.h"
#include "R5RegionsMapping.generated.h"

USTRUCT(BlueprintType)
struct FR5RegionsMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Region;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5AddressPortEntry> Entries;
    
    R5AUTHPROXY_API FR5RegionsMapping();
};

