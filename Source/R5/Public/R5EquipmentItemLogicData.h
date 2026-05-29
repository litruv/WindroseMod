#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "R5EquipmentItemLogicData.generated.h"

class UGameplayEffect;
class UR5Ability;

USTRUCT(BlueprintType)
struct FR5EquipmentItemLogicData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UGameplayEffect>> DefaultAttributes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UR5Ability>> GrantedAbilities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<TSubclassOf<UGameplayEffect>> UnequipEffects;
    
    R5_API FR5EquipmentItemLogicData();
};

