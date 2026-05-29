#pragma once
#include "CoreMinimal.h"
#include "R5MVVMViewModel.h"
#include "R5MVVMListEntityVM.generated.h"

UCLASS(Blueprintable)
class R5MODELVIEWVIEWMODEL_API UR5MVVMListEntityVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
    UR5MVVMListEntityVM();

    UFUNCTION(BlueprintCallable)
    void Unselect();
    
    UFUNCTION(BlueprintCallable)
    void Select();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsEntitySelected() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetEntityIndex() const;
    
};

