#pragma once
#include "CoreMinimal.h"
#include "R5MVVMContainer.generated.h"

class UR5MVVMContextContainer;
class UR5MVVMGlobalObservers;
class UR5MVVMModel;
class UR5MVVMViewModel;

USTRUCT(BlueprintType)
struct R5MODELVIEWVIEWMODEL_API FR5MVVMContainer {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMViewModel* RootViewModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMModel* RootModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMContextContainer* ContextContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMGlobalObservers* GlobalObservers;
    
public:
    FR5MVVMContainer();
};

