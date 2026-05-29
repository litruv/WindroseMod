#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_UObjectMemoryKey -FallbackName=R5AS_UObjectMemoryKey
#include "R5AS_UObjectMemoryKey.h"
#include "R5UseStaticActionOnTargetStaticActionData.h"
#include "Templates/SubclassOf.h"
#include "R5UseStaticActionOnTargetData.generated.h"

class UGameplayEffect;

USTRUCT(BlueprintType)
struct FR5UseStaticActionOnTargetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreparationTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DelayAfterUse;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MaxExecutions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag PreparationCueTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5UseStaticActionOnTargetStaticActionData DefaultActions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_UObjectMemoryKey TargetSelector;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FR5UseStaticActionOnTargetStaticActionData> OverrideStaticActionsPerExecutionNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UGameplayEffect>> TargetGEs;
    
    R5_API FR5UseStaticActionOnTargetData();
};

