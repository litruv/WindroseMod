#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5MVVMBase.generated.h"

class UR5MVVMBase;
class UR5MVVMEventBatcher;
class UR5MVVMObserver;

UCLASS(Blueprintable)
class R5MODELVIEWVIEWMODEL_API UR5MVVMBase : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5MVVMBase*> Children;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5MVVMObserver*> Observers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MVVMEventBatcher* EventBatcher;
    
public:
    UR5MVVMBase();

};

