#pragma once
#include "CoreMinimal.h"
#include "R5SpawnAICharacterAbilityTaskData.generated.h"

class AActor;
class UEnvQuery;
class UObject;

USTRUCT(BlueprintType)
struct FR5SpawnAICharacterAbilityTaskData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* EQSOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> SpawnClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Count;
    
    R5_API FR5SpawnAICharacterAbilityTaskData();
};

