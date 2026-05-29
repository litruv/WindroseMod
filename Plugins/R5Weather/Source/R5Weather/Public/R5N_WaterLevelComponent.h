#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "Math/Vector.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5N_WaterLevelComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5WEATHER_API UR5N_WaterLevelComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UR5N_WaterLevelComponent(const FObjectInitializer& ObjectInitializer);

private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerSetWaterLevelPointsDrawDebug(bool bDrawDebug);
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastSendServerWaterLevelPoint(const TArray<FVector>& WaterLevelPoints);
    
};

