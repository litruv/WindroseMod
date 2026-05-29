#pragma once
#include "CoreMinimal.h"
#include "ER5SignificanceLevel.h"
#include "R5ShipCustomizationComponent.h"
#include "R5ShipHullCustomization.generated.h"

class UR5ShipHullItemParams;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5ShipHullCustomization : public UR5ShipCustomizationComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5ShipHullItemParams> DefaultHull;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel CollisionLevel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> MeshArray;
    
public:
    UR5ShipHullCustomization(const FObjectInitializer& ObjectInitializer);

};

