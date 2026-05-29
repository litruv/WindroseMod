#pragma once
#include "CoreMinimal.h"
#include "R5BuildingFXSpawnData.generated.h"

class UNiagaraSystem;
class USoundCue;
class UStaticMesh;

USTRUCT(BlueprintType)
struct FR5BuildingFXSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNiagaraSystem* NiagaraSystem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* OptionalSoundCue;
    
    R5_API FR5BuildingFXSpawnData();
};

