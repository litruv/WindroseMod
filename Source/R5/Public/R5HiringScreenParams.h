#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=R5BLItemsStackData -FallbackName=R5BLItemsStackData
#include "R5BLItemsStackData.h"
#include "R5HiringBonusData.h"
#include "R5HiringProfessionData.h"
#include "R5HiringScreenParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5HiringScreenParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5BLItemsStackData> Cost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5HiringProfessionData Profession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Phrase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5HiringBonusData> Bonuses;
    
    UR5HiringScreenParams();

};

