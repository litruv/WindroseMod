#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentItemVisual.h"
#include "R5RangeWeaponItemVisual.generated.h"

class UR5RangeWeaponItemVisualParams;
class USceneComponent;
class USkeletalMeshComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5RangeWeaponItemVisual : public UR5EquipmentItemVisual {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5RangeWeaponItemVisualParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<USkeletalMeshComponent*> RangeWeapontemMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> HolsterMeshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* ActiveMesh;
    
public:
    UR5RangeWeaponItemVisual(const FObjectInitializer& ObjectInitializer);

};

