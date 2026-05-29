#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_Categorizer_Base -FallbackName=R5AS_Categorizer_Base
#include "R5AS_Categorizer_Base.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5AgentSystem -ObjectName=R5AS_DoubleValueSelector -FallbackName=R5AS_DoubleValueSelector
#include "R5AS_DoubleValueSelector.h"
#include "R5AS_Categorizer_InBoardingBattle.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5AS_Categorizer_InBoardingBattle : public UR5AS_Categorizer_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_DoubleValueSelector MinHoldTime;
    
public:
    UR5AS_Categorizer_InBoardingBattle();

};

