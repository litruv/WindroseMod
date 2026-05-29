#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5AS_Categorizer_Base.h"
#include "R5AS_DoubleValueSelector.h"
#include "R5AS_Categorizer_ByClass.generated.h"

class AActor;

UCLASS(Blueprintable, EditInlineNew)
class R5AGENTSYSTEM_API UR5AS_Categorizer_ByClass : public UR5AS_Categorizer_Base {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> ActorClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AS_DoubleValueSelector MinHoldTime;
    
    UR5AS_Categorizer_ByClass();

};

