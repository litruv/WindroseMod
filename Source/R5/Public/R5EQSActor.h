#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EEnvQueryRunMode -FallbackName=EEnvQueryRunMode
#include "EnvironmentQuery/EnvQueryTypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EQSQueryResultSourceInterface -FallbackName=EQSQueryResultSourceInterface
#include "EnvironmentQuery/EQSQueryResultSourceInterface.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "R5EQSActor.generated.h"

UCLASS(Blueprintable, HideDropdown, NoExport)
class R5_API AR5EQSActor : public AActor, public IEQSQueryResultSourceInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvQueryRunMode::Type> QueryingMode;
    
public:
    AR5EQSActor(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

