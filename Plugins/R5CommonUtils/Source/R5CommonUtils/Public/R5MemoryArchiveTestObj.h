#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5MemoryArchiveTestStruct.h"
#include "R5MemoryArchiveTestObj.generated.h"

UCLASS(Blueprintable)
class UR5MemoryArchiveTestObj : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5MemoryArchiveTestStruct TestStruct;
    
    UR5MemoryArchiveTestObj();

};

