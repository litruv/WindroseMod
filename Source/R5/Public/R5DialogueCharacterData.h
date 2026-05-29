#pragma once
#include "CoreMinimal.h"
#include "R5DialogueCharacterData.generated.h"

USTRUCT(BlueprintType)
struct FR5DialogueCharacterData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CharacterName;
    
    R5_API FR5DialogueCharacterData();
};

