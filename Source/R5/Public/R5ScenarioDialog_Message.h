#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Scenario -ObjectName=R5ScenarioGraphNodeDialog -FallbackName=R5ScenarioGraphNodeDialog
#include "R5ScenarioGraphNodeDialog.h"
#include "R5ScenarioDialog_Message.generated.h"

class UR5DialogueCharacterParams;
class USoundCue;

UCLASS(Blueprintable)
class R5_API UR5ScenarioDialog_Message : public UR5ScenarioGraphNodeDialog {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* VoiceSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5DialogueCharacterParams> OverrideCharacter;
    
    UR5ScenarioDialog_Message();

};

