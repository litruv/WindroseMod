#pragma once
#include "CoreMinimal.h"
#include "R5EquipmentItemVisual.h"
#include "R5MeleeWeaponVisual.generated.h"

class UNiagaraComponent;
class UR5MeleeWeaponVisualParams;
class USkeletalMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5MeleeWeaponVisual : public UR5EquipmentItemVisual {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5MeleeWeaponVisualParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* WeaponMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TMap<int32, UNiagaraComponent*> SpawnedVFXs;
    
public:
    UR5MeleeWeaponVisual(const FObjectInitializer& ObjectInitializer);

};

