#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=EnvQueryGenerator -FallbackName=EnvQueryGenerator
#include "EnvironmentQuery/EnvQueryGenerator.h"
#include "Templates/SubclassOf.h"
#include "Mercuna2DQueryGenerator.generated.h"

class APawn;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class MERCUNA_API UMercuna2DQueryGenerator : public UEnvQueryGenerator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<APawn> AgentClass;
    
    UMercuna2DQueryGenerator();

};

