#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5DrawActorTrajectoryData.h"
#include "R5DrawActorTrajectoryComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5COMMONUTILS_API UR5DrawActorTrajectoryComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DrawActorTrajectoryData ServerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FR5DrawActorTrajectoryData ClientData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PointsCount;
    
public:
    UR5DrawActorTrajectoryComponent(const FObjectInitializer& ObjectInitializer);

};

