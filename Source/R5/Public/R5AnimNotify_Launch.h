#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "R5AnimNotify_LaunchData.h"
#include "R5AnimNotify_Launch.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class R5_API UR5AnimNotify_Launch : public UAnimNotify {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AnimNotify_LaunchData LaunchData;
    
public:
    UR5AnimNotify_Launch();

};

