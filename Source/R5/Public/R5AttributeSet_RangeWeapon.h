#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=AttributeSet -FallbackName=AttributeSet
#include "AttributeSet.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayAbilities -ObjectName=GameplayAttributeData -FallbackName=GameplayAttributeData
#include "R5AttributeSet_RangeWeapon.generated.h"

UCLASS(Blueprintable)
class R5_API UR5AttributeSet_RangeWeapon : public UAttributeSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayAttributeData WeaponLoadRatio;
    
    UR5AttributeSet_RangeWeapon();

};

