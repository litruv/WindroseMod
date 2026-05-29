#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayEffectUIData -FallbackName=GameplayEffectUIData
#include "GameplayEffectUIData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLStatDescriptionCurveTable -FallbackName=R5BLStatDescriptionCurveTable
#include "R5BLStatDescriptionCurveTable.h"
#include "ER5GameplayEffectStatusType.h"
#include "R5GameplayEffectUIDescription.h"
#include "R5GameplayEffectStatusUIData.generated.h"

class UTexture2D;

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class R5GAS_API UR5GameplayEffectStatusUIData : public UGameplayEffectUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5GameplayEffectStatusType StatusType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> StatusIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLStatDescriptionCurveTable> DescriptionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowEffectLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5GameplayEffectUIDescription Details;
    
    UR5GameplayEffectStatusUIData();

};

