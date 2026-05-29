#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EEnvQueryRunMode -FallbackName=EEnvQueryRunMode
#include "R5EncounterTransformProvider.h"
#include "R5QueryParamTypeValue.h"
#include "R5ActorSpawnerTransformProvider_EQS.generated.h"

class UEnvQuery;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5ActorSpawnerTransformProvider_EQS : public UR5EncounterTransformProvider {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvQueryRunMode::Type> QueryRunMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5QueryParamTypeValue> QueryParams;
    
public:
    UR5ActorSpawnerTransformProvider_EQS();

};

