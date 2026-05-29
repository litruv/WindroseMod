#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimaryDataAsset -FallbackName=PrimaryDataAsset
#include "Engine/DataAsset.h"
#include "Templates/SubclassOf.h"
#include "R5FailedAttackAbilityParams.generated.h"

class APawn;

UCLASS(Blueprintable)
class R5_API UR5FailedAttackAbilityParams : public UPrimaryDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> TargetClassFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName FailedAttackSection;
    
    UR5FailedAttackAbilityParams();

};

