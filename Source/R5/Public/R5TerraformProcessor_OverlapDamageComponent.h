#pragma once
#include "CoreMinimal.h"
#include "R5TerraformProcessor.h"
#include "R5TerraformProcessor_OverlapDamageComponent.generated.h"

class AActor;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class R5_API UR5TerraformProcessor_OverlapDamageComponent : public UR5TerraformProcessor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Radius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Strength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FlatBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> SkipActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<UPrimitiveComponent>> SkipComponents;
    
    UR5TerraformProcessor_OverlapDamageComponent();

};

