#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5MVVMListFilter_Base.generated.h"

class UR5MVVMListEntityVM;

UCLASS(Abstract, Blueprintable, DefaultToInstanced, EditInlineNew)
class R5MODELVIEWVIEWMODEL_API UR5MVVMListFilter_Base : public UObject {
    GENERATED_BODY()
public:
    UR5MVVMListFilter_Base();

protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool K2_IsRequiredEntity(const UR5MVVMListEntityVM* ListEntityVM) const;
    
};

