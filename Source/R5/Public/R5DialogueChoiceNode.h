#pragma once
#include "CoreMinimal.h"
#include "R5DialogueCharacterData.h"
#include "R5DialogueChoice.h"
#include "R5DialogueChoiceNode.generated.h"

USTRUCT(BlueprintType)
struct FR5DialogueChoiceNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DialogueCharacterData Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5DialogueChoice> Choices;
    
    R5_API FR5DialogueChoiceNode();
};

