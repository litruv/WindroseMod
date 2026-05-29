#pragma once
#include "CoreMinimal.h"
#include "StoveConfig.generated.h"

USTRUCT(BlueprintType)
struct FStoveConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Env;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AppKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString GameId;
    
    STOVESDKPLUGIN_API FStoveConfig();
};

