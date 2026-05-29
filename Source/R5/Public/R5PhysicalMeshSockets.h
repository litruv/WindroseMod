#pragma once
#include "CoreMinimal.h"
#include "R5PhysicalMeshSockets.generated.h"

USTRUCT(BlueprintType)
struct FR5PhysicalMeshSockets {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> PortSideSocketName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> StarboardSideSocketName;
    
    R5_API FR5PhysicalMeshSockets();
};

