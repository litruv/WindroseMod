#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5WDSInstancedParameter.h"
#include "R5WDSInstancedTag.generated.h"

class UR5WDSTagParams;

UCLASS(Blueprintable, EditInlineNew)
class R5WDSCOMMON_API UR5WDSInstancedTag : public UR5WDSInstancedParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5WDSTagParams* Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag Value;
    
    UR5WDSInstancedTag();

};

