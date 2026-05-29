#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMStateComponent -FallbackName=R5MVVMStateComponent
#include "R5MVVMStateComponent.h"
#include "R5HFSMEntityProgressionLevelComponent.generated.h"

class UR5EntityProgressionVM;

UCLASS(Blueprintable, EditInlineNew)
class R5ENTITYPROGRESSION_API UR5HFSMEntityProgressionLevelComponent : public UR5MVVMStateComponent {
    GENERATED_BODY()
public:
    UR5HFSMEntityProgressionLevelComponent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5EntityProgressionVM* GetEntityProgressionVM() const;
    
};

