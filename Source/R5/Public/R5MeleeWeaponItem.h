#pragma once
#include "CoreMinimal.h"
#include "R5DrawWeaponSourceObjectInterface.h"
#include "R5EquipmentItem.h"
#include "R5MeleeWeaponItem.generated.h"

class UR5EquipmentItemVisual;
class UR5MeleeWeaponItemUI;
class UR5MeleeWeaponParams;
class UR5MeleeWeaponVisual;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5MeleeWeaponItem : public UR5EquipmentItem, public IR5DrawWeaponSourceObjectInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5MeleeWeaponVisual* Visual;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UR5MeleeWeaponItemUI* UI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MeleeWeaponParams* Params;
    
    UR5MeleeWeaponItem(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure)
    UR5EquipmentItemVisual* GetItemVisual() const;
    

    // Fix for true pure virtual functions not being implemented
};

