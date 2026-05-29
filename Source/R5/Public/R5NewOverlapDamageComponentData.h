#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5NewOverlapDamageState.h"
#include "R5NewOverlapDamageComponentDamageData.h"
#include "R5NewOverlapDamageComponentVFXData.h"
#include "R5NewOverlapDamageStateParams.h"
#include "R5NewOverlapDamageComponentData.generated.h"

USTRUCT(BlueprintType)
struct FR5NewOverlapDamageComponentData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5NewOverlapDamageComponentDamageData DamageData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ER5NewOverlapDamageState> StatesFlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5NewOverlapDamageState, FR5NewOverlapDamageStateParams> StateStrategiesMapping;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5NewOverlapDamageComponentVFXData> GlobalVFXs;
    
    R5_API FR5NewOverlapDamageComponentData();
};

