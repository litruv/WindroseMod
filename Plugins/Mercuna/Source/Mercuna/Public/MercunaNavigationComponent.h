#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=AIModule -ObjectName=AIRequestID -FallbackName=AIRequestID
#include "AITypes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "EMercunaAvoidanceMode.h"
#include "EMercunaMoveResult.h"
#include "MercunaContextualSteeringActorParameters.h"
#include "MercunaUsageSpec.h"
#include "Templates/SubclassOf.h"
#include "MercunaNavigationComponent.generated.h"

class AActor;
class AController;

UCLASS(Abstract, Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MERCUNA_API UMercunaNavigationComponent : public UActorComponent {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FMercunaMoveComplete, FAIRequestID, RequestID, const TEnumAsByte<EMercunaMoveResult::Type>, Result);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaMoveComplete OnMoveCompleted;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMercunaAvoidanceMode AvoidanceMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaContextualSteeringActorParameters DefaultContextSteeringParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<TSubclassOf<AActor>, FMercunaContextualSteeringActorParameters> ContextSteeringParameters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DynamicAvoidance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AvoidanceWeightMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaUsageSpec UsageSpec;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AController* CurrentController;
    
public:
    UMercunaNavigationComponent(const FObjectInitializer& ObjectInitializer);

};

