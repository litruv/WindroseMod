#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Requirement -ObjectName=R5Requirement_CommonBase -FallbackName=R5Requirement_CommonBase
#include "R5Requirement_CommonBase.h"
#include "ER5RequirementTarget.h"
#include "R5IsTargetAliveRequirement.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5IsTargetAliveRequirement : public UR5Requirement_CommonBase {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5RequirementTarget RequirementTarget;
    
public:
    UR5IsTargetAliveRequirement();

};

