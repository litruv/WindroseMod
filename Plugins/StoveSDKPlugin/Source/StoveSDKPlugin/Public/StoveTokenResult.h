#pragma once
#include "CoreMinimal.h"
#include "StoveTokenResult.generated.h"

USTRUCT(BlueprintType)
struct FStoveTokenResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AccessToken;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 ErrorCode;
    
    STOVESDKPLUGIN_API FStoveTokenResult();
};

