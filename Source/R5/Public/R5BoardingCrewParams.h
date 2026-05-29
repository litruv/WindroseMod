#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_IntegerMemoryKey -FallbackName=R5AS_IntegerMemoryKey
#include "R5AS_IntegerMemoryKey.h"
#include "R5BoardingCrewParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5BoardingCrewParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_IntegerMemoryKey BoardingAttackMemoryKey;
    
    UR5BoardingCrewParams();

};

