#pragma once
#include "CoreMinimal.h"
#include "ER5CommonCompositionRequirementCheckType.h"
#include "ER5CommonCompositionRequirementDescType.h"
#include "R5Requirement_CommonBase.h"
#include "R5Requirement_CommonComposition.generated.h"

class UR5Requirement;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5REQUIREMENT_API UR5Requirement_CommonComposition : public UR5Requirement_CommonBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5CommonCompositionRequirementCheckType CheckType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5CommonCompositionRequirementDescType DescriptionType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5Requirement*> Requirements;
    
    UR5Requirement_CommonComposition();

};

