#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "R5AN_ExecuteStaticAction.generated.h"

class UR5StaticAction;

UCLASS(Blueprintable, CollapseCategories)
class R5_API UR5AN_ExecuteStaticAction : public UAnimNotify {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5StaticAction* StaticAction;
    
public:
    UR5AN_ExecuteStaticAction();

};

