#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotifyState -FallbackName=AnimNotifyState
#include "Animation/AnimNotifies/AnimNotifyState.h"
#include "R5ANS_SetCustomPrimitiveDataData.h"
#include "R5ANS_SetCustomPrimitiveData.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5_API UR5ANS_SetCustomPrimitiveData : public UAnimNotifyState {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FR5ANS_SetCustomPrimitiveDataData> CustomDataIndexToValues;
    
public:
    UR5ANS_SetCustomPrimitiveData();

};

