#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
#include "R5AIAnimatedActivityData.h"
#include "R5AIMemoryData.h"
#include "R5AIPawnAttackDetectionData.h"
#include "R5AIPawnBlockData.h"
#include "R5AIPawnCommonData.h"
#include "R5AIPawnShootDetectionData.h"
#include "R5AIWDSCombatDifficultyData.h"
#include "R5AIPawnParams.generated.h"

class AActor;
class UR5AIMeleeComboParams;
class UR5AIPawnParams;

UCLASS(Blueprintable)
class R5_API UR5AIPawnParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIPawnCommonData Common;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIPawnAttackDetectionData AttackDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIPawnShootDetectionData ShootDetection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIPawnBlockData Block;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AIMeleeComboParams* ComboParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5AIWDSCombatDifficultyData> WDSCombatDifficultyDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIMemoryData MemoryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5AIAnimatedActivityData AnimatedActivity;
    
    UR5AIPawnParams();

    UFUNCTION(BlueprintCallable)
    static UR5AIPawnParams* GetAIPawnParamsFromActor(const AActor* Actor);
    
};

