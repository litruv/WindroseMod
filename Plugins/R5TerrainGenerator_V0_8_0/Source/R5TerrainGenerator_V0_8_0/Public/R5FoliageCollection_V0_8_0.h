#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "UObject/Object.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5FoliageObjectType_V0_8_0.h"
#include "R5FoliageCollection_V0_8_0.generated.h"

class UR5FoliageType_V0_8_0;

UCLASS(Blueprintable)
class R5TERRAINGENERATOR_V0_8_0_API UR5FoliageCollection_V0_8_0 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5FoliageObjectType_V0_8_0 ObjectType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Probability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UR5FoliageType_V0_8_0*> FoliageCollection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FGameplayTag> Tags;
    
    UR5FoliageCollection_V0_8_0();

};

