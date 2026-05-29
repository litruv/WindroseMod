#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "R5AS_Categorizer_Base.h"
#include "R5AS_DoubleValueSelector.h"
#include "R5AS_Categorizer_AddCategory.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5AGENTSYSTEM_API UR5AS_Categorizer_AddCategory : public UR5AS_Categorizer_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_DoubleValueSelector MinHoldTime;
    
public:
    UR5AS_Categorizer_AddCategory();

};

