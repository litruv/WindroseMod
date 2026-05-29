#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=CapsuleComponent -FallbackName=CapsuleComponent
#include "Components/CapsuleComponent.h"
#include "R5ComfortAggregatorInterface.h"
#include "R5HearthVolumeComponent.generated.h"

class UR5AggregatedComfortLimit;
class UR5BuildingItem;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5HearthVolumeComponent : public UCapsuleComponent, public IR5ComfortAggregatorInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5AggregatedComfortLimit* AggregatedComfortLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UR5BuildingItem*> BuildingGraphIds;
    
public:
    UR5HearthVolumeComponent(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
};

