#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BuildingItem_AdditionalPolyhedron.generated.h"

USTRUCT(BlueprintType)
struct FR5BuildingItem_AdditionalPolyhedron {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SocketNamePrefix;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameplayTag> PairedBuildingItems;
    
    R5_API FR5BuildingItem_AdditionalPolyhedron();
};

