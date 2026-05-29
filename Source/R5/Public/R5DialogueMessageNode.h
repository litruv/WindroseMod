#pragma once
#include "CoreMinimal.h"
#include "R5DialogueCharacterData.h"
#include "R5DialogueMessageNode.generated.h"

class USoundCue;

USTRUCT(BlueprintType)
struct FR5DialogueMessageNode {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DialogueCharacterData Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* VoiceSound;
    
    R5_API FR5DialogueMessageNode();
};

