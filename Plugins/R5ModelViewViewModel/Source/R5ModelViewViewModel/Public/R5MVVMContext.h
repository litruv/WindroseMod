#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "StructUtils/InstancedStruct.h"
#include "R5MVVMContext.generated.h"

USTRUCT(BlueprintType)
struct R5MODELVIEWVIEWMODEL_API FR5MVVMContext {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> ParamsArray;
    
public:
    FR5MVVMContext();
};

