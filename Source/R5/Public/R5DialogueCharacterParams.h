#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5DialogueCharacterData.h"
#include "R5DialogueCharacterParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5DialogueCharacterParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DialogueCharacterData Character;
    
    UR5DialogueCharacterParams();

};

