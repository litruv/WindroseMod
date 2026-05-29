#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5BuildingItem_AdditionalPolyhedron.h"
#include "R5BuildingItem_SnappingSettings.generated.h"

USTRUCT(BlueprintType)
struct FR5BuildingItem_SnappingSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BuildingItem_AdditionalPolyhedron> AdditionalPolyhedrons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CanOverlapWithThem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CanSnapByEdgeWithThem;
    
    R5_API FR5BuildingItem_SnappingSettings();
};

