#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Mercuna -ObjectName=MercunaSupportedAgentTypes -FallbackName=MercunaSupportedAgentTypes
#include "MercunaSupportedAgentTypes.h"
#include "R5MercunaPlayerGroundNavInvokerComponent.generated.h"

class AMercunaNavGroundGrid;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5MERCUNA_API UR5MercunaPlayerGroundNavInvokerComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMercunaSupportedAgentTypes AgentTypes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GenerationRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RemovalRadius;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AMercunaNavGroundGrid*> NavGrids;
    
public:
    UR5MercunaPlayerGroundNavInvokerComponent(const FObjectInitializer& ObjectInitializer);

};

