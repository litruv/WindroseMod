#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5ModelViewViewModel -ObjectName=R5MVVMStateComponent -FallbackName=R5MVVMStateComponent
#include "R5MVVMStateComponent.h"
#include "R5HFSMStatTreeComponent.generated.h"

class UR5StatTreeVM;

UCLASS(Blueprintable, EditInlineNew)
class R5ENTITYPROGRESSION_API UR5HFSMStatTreeComponent : public UR5MVVMStateComponent {
    GENERATED_BODY()
public:
    UR5HFSMStatTreeComponent();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5StatTreeVM* GetStatTreeVM() const;
    
};

