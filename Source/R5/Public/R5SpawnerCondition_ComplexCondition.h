#pragma once
#include "CoreMinimal.h"
#include "ER5SpawnerComplexConditionType.h"
#include "R5SpawnerCondition.h"
#include "R5SpawnerCondition_ComplexCondition.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5SpawnerCondition_ComplexCondition : public UR5SpawnerCondition {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SpawnerComplexConditionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UR5SpawnerCondition*> Conditions;
    
public:
    UR5SpawnerCondition_ComplexCondition();

};

