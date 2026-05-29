#pragma once
#include "CoreMinimal.h"
#include "ER5SignificanceLevel.h"
#include "R5ShipCustomizationComponent.h"
#include "R5ShipSailComponent.generated.h"

class UR5SailItemParams;
class UR5ShipSailParams;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipSailComponent : public UR5ShipCustomizationComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5ShipSailParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5SailItemParams> DefaultSail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel SeparateSailsSignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* MergedSailsComponent;
    
public:
    UR5ShipSailComponent(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnGearChanged(int32 InGear);
    
};

