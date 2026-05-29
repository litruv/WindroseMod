#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BattleManager_RingData.h"
#include "R5BattleManagerComponentParams.generated.h"

UCLASS(Blueprintable)
class R5_API UR5BattleManagerComponentParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5BattleManager_RingData DefaultRing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, FR5BattleManager_RingData> RingByTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxGridCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxMeleeAttackCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, int32> TagsTokenCapacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 MaxRangeAttackCapacity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double ExcludeRadiusForActors;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TimeForAddWeightWhenNotAggressive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeightWhenNotAggressive;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double TimeForAddWeightAfterStartAggressive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WeightWhenAggressiveSmallTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AggressiveCapacity;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double MinTimeToHoldPermission;
    
    UR5BattleManagerComponentParams();

};

