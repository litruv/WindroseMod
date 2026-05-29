#pragma once
#include "CoreMinimal.h"
#include "ER5SignificanceLevel.h"
#include "R5PickupResource.h"
#include "R5SignificanceInterface.h"
#include "R5WaterPickupResourceStaticVFX.h"
#include "R5WaterPickupResource.generated.h"

class UNiagaraComponent;
class UR5NPhysComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5WaterPickupResource : public AR5PickupResource, public IR5SignificanceInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5NPhysComponent* NPhysComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5WaterPickupResourceStaticVFX> StaticVFXParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel FXSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UNiagaraComponent*> SpawnedStaticVFX;
    
public:
    AR5WaterPickupResource(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

