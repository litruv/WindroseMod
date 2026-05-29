#pragma once
#include "CoreMinimal.h"
#include "R5TargetingModuleBase.h"
#include "R5TargetingModuleByClass.generated.h"

class AActor;
class UR5TargetingFilterBase;

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5TargetingModuleByClass : public UR5TargetingModuleBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> ActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5TargetingFilterBase*> Filters;
    
    UR5TargetingModuleByClass();

};

