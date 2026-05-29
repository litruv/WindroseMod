#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5HFSM_ComicsVisualizer.generated.h"

class UR5ComicsData;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5HFSM_ComicsVisualizer : public UHFSMStateComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5ComicsData*> ComicsQueue;
    
public:
    UR5HFSM_ComicsVisualizer();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayComics(const UR5ComicsData* ComicsData);
    
    UFUNCTION(BlueprintCallable)
    void CloseComics(const UR5ComicsData* ComicsData);
    
};

