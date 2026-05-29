#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=PhysicsCore -ObjectName=PhysicalMaterial -FallbackName=PhysicalMaterial
#include "R5PhysicalMaterial.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class R5_API UR5PhysicalMaterial : public UPhysicalMaterial {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UR5PhysicalMaterial();

};

