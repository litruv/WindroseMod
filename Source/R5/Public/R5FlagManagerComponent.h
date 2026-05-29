#pragma once
#include "CoreMinimal.h"
#include "ER5SignificanceLevel.h"
#include "R5ShipCustomizationComponent.h"
#include "R5FlagManagerComponent.generated.h"

class UR5FlagItemParams;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5FlagManagerComponent : public UR5ShipCustomizationComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5FlagItemParams> DefaultFlag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel TickSignificanceLevel;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UStaticMeshComponent*> FlagArray;
    
public:
    UR5FlagManagerComponent(const FObjectInitializer& ObjectInitializer);

};

