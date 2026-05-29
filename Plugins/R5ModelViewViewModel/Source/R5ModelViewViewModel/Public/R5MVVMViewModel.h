#pragma once
#include "CoreMinimal.h"
#include "R5MVVMBase.h"
#include "R5MVVMViewModel.generated.h"

class UR5MVVMModel;

UCLASS(Blueprintable)
class R5MODELVIEWVIEWMODEL_API UR5MVVMViewModel : public UR5MVVMBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FR5UIOnViewModelUpdated);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5UIOnViewModelUpdated OnViewModelUpdated;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMModel* RootModel;
    
public:
    UR5MVVMViewModel();

};

