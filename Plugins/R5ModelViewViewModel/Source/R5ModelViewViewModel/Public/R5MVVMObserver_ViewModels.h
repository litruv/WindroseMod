#pragma once
#include "CoreMinimal.h"
#include "R5MVVMObserver.h"
#include "R5MVVMObserver_ViewModels.generated.h"

class UR5MVVMViewModel;

UCLASS(Blueprintable)
class R5MODELVIEWVIEWMODEL_API UR5MVVMObserver_ViewModels : public UR5MVVMObserver {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5MVVMViewModel*> ObservedViewModels;
    
public:
    UR5MVVMObserver_ViewModels();

protected:
    UFUNCTION(BlueprintCallable)
    void OnObservedViewModelUpdated();
    
};

