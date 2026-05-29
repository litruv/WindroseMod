#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=InstancedStruct -FallbackName=InstancedStruct
#include "StructUtils/InstancedStruct.h"
#include "R5SharedDataStore.generated.h"

USTRUCT(BlueprintType)
struct R5COMMONUTILS_API FR5SharedDataStore {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInstancedStruct> Entries;
    
public:
    FR5SharedDataStore();
};

