#pragma once
#include "CoreMinimal.h"
#include "R5TerraformProcessor.h"
#include "R5TerraformProcessor_AlwaysAllowActors.generated.h"

class AActor;

UCLASS(Abstract, Blueprintable)
class R5_API UR5TerraformProcessor_AlwaysAllowActors : public UR5TerraformProcessor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> SkipActorClasses;
    
public:
    UR5TerraformProcessor_AlwaysAllowActors();

};

