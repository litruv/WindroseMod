#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5POISchemeNode.h"
#include "R5POISchemeNode_Bit.generated.h"

class UR5POIBit;

UCLASS(Blueprintable, NotPlaceable)
class R5POINTOFINTEREST_API UR5POISchemeNode_Bit : public UR5POISchemeNode {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Tags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5POIBit* Bit;
    
public:
    UR5POISchemeNode_Bit();

};

