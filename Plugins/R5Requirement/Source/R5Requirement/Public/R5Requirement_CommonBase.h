#pragma once
#include "CoreMinimal.h"
#include "R5Requirement.h"
#include "R5Requirement_CommonBase.generated.h"

UCLASS(Abstract, Blueprintable, CollapseCategories, EditInlineNew)
class R5REQUIREMENT_API UR5Requirement_CommonBase : public UR5Requirement {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RequirementDescription;
    
    UR5Requirement_CommonBase();

};

