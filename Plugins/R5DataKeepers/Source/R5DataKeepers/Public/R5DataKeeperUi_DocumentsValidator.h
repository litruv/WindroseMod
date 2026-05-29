#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5CoopProxy -ObjectName=R5CoopDocumentCheckResult -FallbackName=R5CoopDocumentCheckResult
#include "R5CoopDocumentCheckResult.h"
#include "R5DataKeeperUi_DocumentsValidator.generated.h"

class UR5LoadingScreenOpener;

UCLASS(Blueprintable, EditInlineNew)
class R5DATAKEEPERS_API UR5DataKeeperUi_DocumentsValidator : public UHFSMStateComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5LoadingScreenOpener* LoadingScreenOpener;
    
public:
    UR5DataKeeperUi_DocumentsValidator();

    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnValidationError(const FString& Type, const TArray<FR5CoopDocumentCheckResult>& Results);
    
    UFUNCTION(BlueprintCallable)
    void HandleActions(bool bContinue);
    
};

