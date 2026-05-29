#pragma once
#include "CoreMinimal.h"
#include "R5TargetingFilterBase.h"
#include "R5TargetingFilterRelationship.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class R5_API UR5TargetingFilterRelationship : public UR5TargetingFilterBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RelationshipsToTargets;
    
    UR5TargetingFilterRelationship();

};

