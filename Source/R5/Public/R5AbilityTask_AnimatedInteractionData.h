#pragma once
#include "CoreMinimal.h"
#include "R5AnimatedInteractionHandler.h"
#include "R5AbilityTask_AnimatedInteractionData.generated.h"

class UStaticMeshComponent;

USTRUCT(BlueprintType)
struct FR5AbilityTask_AnimatedInteractionData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AnimatedInteractionHandler AnimatedInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* AttachStaticMeshComponent;
    
    R5_API FR5AbilityTask_AnimatedInteractionData();
};

