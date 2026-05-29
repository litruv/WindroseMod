#pragma once
#include "CoreMinimal.h"
#include "EMercunaGridType.h"
#include "MercunaAgentType.generated.h"

USTRUCT(BlueprintType)
struct MERCUNA_API FMercunaAgentType {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName Name;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EMercunaGridType GridType;
    
    FMercunaAgentType();
};
FORCEINLINE uint32 GetTypeHash(const FMercunaAgentType) { return 0; }

