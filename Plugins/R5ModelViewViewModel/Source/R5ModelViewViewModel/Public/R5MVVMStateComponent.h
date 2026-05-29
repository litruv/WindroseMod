#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=ELayoutLayer -FallbackName=ELayoutLayer
#include "ELayoutLayer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GCFSM -ObjectName=HFSMStateComponent -FallbackName=HFSMStateComponent
#include "HFSMStateComponent.h"
#include "R5MVVMContainer.h"
#include "R5MVVMStateComponent.generated.h"

class UUILayoutTemplate;

UCLASS(Blueprintable, EditInlineNew)
class R5MODELVIEWVIEWMODEL_API UR5MVVMStateComponent : public UHFSMStateComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5MVVMContainer UIContainer;
    
public:
    UR5MVVMStateComponent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUILayoutTemplate* GetLayoutTemplateSorted(ELayoutLayer LayerToMount) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UUILayoutTemplate* GetLayoutTemplate() const;
    
};

