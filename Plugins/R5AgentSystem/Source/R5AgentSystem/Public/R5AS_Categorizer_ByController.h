#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AS_Categorizer_Base.h"
#include "R5AS_Categorizer_ByController.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5AGENTSYSTEM_API UR5AS_Categorizer_ByController : public UR5AS_Categorizer_Base {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ControlledByPlayerTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ControlledByBotTag;
    
public:
    UR5AS_Categorizer_ByController();

};

