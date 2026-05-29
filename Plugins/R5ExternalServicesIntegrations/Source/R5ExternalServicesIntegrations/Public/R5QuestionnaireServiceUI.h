#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "EQuestionnaireType.h"
#include "R5QuestionnaireServiceUI.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UR5QuestionnaireServiceUI : public UHFSMStateComponent {
    GENERATED_BODY()
public:
    UR5QuestionnaireServiceUI();

    UFUNCTION(BlueprintCallable)
    void OpenQuestionnaire(EQuestionnaireType Type);
    
    UFUNCTION(BlueprintCallable)
    bool IsQuestionnaireAlreadyShown();
    
    UFUNCTION(BlueprintCallable)
    bool HasAccId();
    
};

