#pragma once
#include "CoreMinimal.h"
#include "R5OverlapDamageStrategy.h"
#include "Templates/SubclassOf.h"
#include "R5OverlapDamageTerraformStrategy.generated.h"

class AActor;
class UR5TerraformProcessor;
class UR5TerraformProcessor_OverlapDamageComponent;

UCLASS(Blueprintable, DefaultToInstanced, EditInlineNew)
class R5_API UR5OverlapDamageTerraformStrategy : public UR5OverlapDamageStrategy {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UR5TerraformProcessor_OverlapDamageComponent> OverlapDamageProcessorClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> SkipActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSubclassOf<UR5TerraformProcessor>> AdditionalTerraformProcessors;
    
    UR5OverlapDamageTerraformStrategy();

};

