#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5SeaSpawnerInvoker.generated.h"

class UR5SeaSpawnerInvokerSettings;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5SeaSpawnerInvoker : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UR5SeaSpawnerInvokerSettings> InvokerSettings;
    
public:
    UR5SeaSpawnerInvoker(const FObjectInitializer& ObjectInitializer);

};

