#pragma once
#include "CoreMinimal.h"
#include "R5BLItemsCreatorGPPData.generated.h"

class AActor;
class USoundBase;

USTRUCT(BlueprintType)
struct R5BUSINESSRULES_API FR5BLItemsCreatorGPPData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> LocalNPCClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USoundBase> NPCVoice;
    
    FR5BLItemsCreatorGPPData();
};

