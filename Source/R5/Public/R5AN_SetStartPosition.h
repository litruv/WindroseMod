#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "R5AN_SetStartPosition.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class R5_API UR5AN_SetStartPosition : public UAnimNotify {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StartPosition;
    
public:
    UR5AN_SetStartPosition();

};

