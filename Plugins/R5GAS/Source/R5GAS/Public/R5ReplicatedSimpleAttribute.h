#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=NetCore -ObjectName=FastArraySerializerItem -FallbackName=FastArraySerializerItem
#include "Net/Serialization/FastArraySerializer.h"
#include "R5ReplicatedSimpleAttribute.generated.h"

USTRUCT(BlueprintType)
struct R5GAS_API FR5ReplicatedSimpleAttribute : public FFastArraySerializerItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    FR5ReplicatedSimpleAttribute();
};

