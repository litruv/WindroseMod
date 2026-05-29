#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5MVVMListComparator_Base.generated.h"

class UR5MVVMListEntityVM;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class R5MODELVIEWVIEWMODEL_API UR5MVVMListComparator_Base : public UObject {
    GENERATED_BODY()
public:
    UR5MVVMListComparator_Base();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_CompareEntities(const UR5MVVMListEntityVM* LListEntityVM, const UR5MVVMListEntityVM* RListEntityVM) const;
    
};

