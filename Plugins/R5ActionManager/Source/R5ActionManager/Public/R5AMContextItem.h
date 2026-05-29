#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "StructUtils/InstancedStruct.h"
#include "R5AMContextItem.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct R5ACTIONMANAGER_API FR5AMContextItem {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInstancedStruct Struct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
public:
    FR5AMContextItem();
};

