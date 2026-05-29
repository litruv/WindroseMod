#pragma once
#include "CoreMinimal.h"
#include "ER5ContextualSpawnerParticipantConditionMultiConditionType.h"
#include "R5ContextualSpawnerParticipantCondition.h"
#include "R5ContextualSpawnerParticipantCondition_MultiCondition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5ContextualSpawnerParticipantCondition_MultiCondition : public UR5ContextualSpawnerParticipantCondition {
    GENERATED_BODY()
public:
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5ContextualSpawnerParticipantConditionMultiConditionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5ContextualSpawnerParticipantCondition*> Conditions;
    
public:
    UR5ContextualSpawnerParticipantCondition_MultiCondition();

};

