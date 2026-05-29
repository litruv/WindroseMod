#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "Misc/Guid.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5DialogueChoiceNode.h"
#include "R5DialogueMessageNode.h"
#include "Templates/SubclassOf.h"
#include "R5UIDialogueController.generated.h"

class AR5DialogueScene;
class UAudioComponent;
class USoundCue;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5UIDialogueController : public UHFSMStateComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AR5DialogueScene> DialogueSceneClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AR5DialogueScene* Scene;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* VoiceSoundComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* VoiceSound;
    
public:
    UR5UIDialogueController();

protected:
    UFUNCTION(BlueprintCallable)
    void Skip();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowReply(const FR5DialogueMessageNode& Node);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowPlayerReplies(const FR5DialogueChoiceNode& ChoiceNode, bool bSilent);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void ShowDialogue(const FText& DialogueName);
    
    UFUNCTION(BlueprintCallable)
    void OnSelectedNode(const FGuid& NodeID);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void HideDialogue();
    
    UFUNCTION(BlueprintCallable)
    void CheckInteractTarget();
    
};

