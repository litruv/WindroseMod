#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
#include "R5AN_SetCustomPrimitiveData.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class R5_API UR5AN_SetCustomPrimitiveData : public UAnimNotify {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> CustomDataIndexToValue;
    
public:
    UR5AN_SetCustomPrimitiveData();

};

