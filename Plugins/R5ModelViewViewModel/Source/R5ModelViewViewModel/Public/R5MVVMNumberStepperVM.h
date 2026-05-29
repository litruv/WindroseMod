#pragma once
#include "CoreMinimal.h"
#include "R5MVVMViewModel.h"
#include "R5MVVMNumberStepperVM.generated.h"

UCLASS(Blueprintable)
class R5MODELVIEWVIEWMODEL_API UR5MVVMNumberStepperVM : public UR5MVVMViewModel {
    GENERATED_BODY()
public:
    UR5MVVMNumberStepperVM();

    UFUNCTION(BlueprintCallable)
    void SetDelta(int32 NewDelta);
    
    UFUNCTION(BlueprintCallable)
    void Reset();
    
    UFUNCTION(BlueprintCallable)
    void Increase();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetTotal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetMax() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetDelta() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrent() const;
    
    UFUNCTION(BlueprintCallable)
    void Decrease();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanIncrease() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanDecrease() const;
    
};

