#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "R5AnimNotify_AIFocus.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class R5_API UR5AnimNotify_AIFocus : public UAnimNotify {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableFocus;
    
public:
    UR5AnimNotify_AIFocus();

};

