#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5MVVMGlobalObservers.generated.h"

class UR5MVVMObserver;

UCLASS(Blueprintable)
class R5MODELVIEWVIEWMODEL_API UR5MVVMGlobalObservers : public UObject {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UR5MVVMObserver*> GlobalObservers;
    
public:
    UR5MVVMGlobalObservers();

};

