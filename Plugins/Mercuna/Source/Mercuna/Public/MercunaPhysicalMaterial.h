#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=PhysicalMaterial -FallbackName=PhysicalMaterial
#include "MercunaPhysicalMaterial.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class MERCUNA_API UMercunaPhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CostMultiplier;
    
    UMercunaPhysicalMaterial();

};

