#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMStateComponent -FallbackName=R5MVVMStateComponent
#include "R5MVVMStateComponent.h"
#include "R5HFSMTalentTreeComponent.generated.h"

class UR5TalentTreeProgressionParams;
class UR5UITalentTreeVM;

UCLASS(Blueprintable, EditInlineNew)
class R5ENTITYPROGRESSION_API UR5HFSMTalentTreeComponent : public UR5MVVMStateComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5TalentTreeProgressionParams* TalentTreeProgressionParams;
    
public:
    UR5HFSMTalentTreeComponent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5UITalentTreeVM* GetTalentTreeVM() const;
    
};

