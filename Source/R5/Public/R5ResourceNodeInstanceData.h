#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
#include "R5ResourceNodeInstanceData.generated.h"

class UR5DespawnParams;

UCLASS(Blueprintable)
class R5_API UR5ResourceNodeInstanceData : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TOptional<bool> bShouldBeStoredInMemory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5DespawnParams* DespawnParams;
    
    UR5ResourceNodeInstanceData();

};

