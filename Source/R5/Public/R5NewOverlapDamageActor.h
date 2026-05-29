#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
#include "ER5NewOverlapDamageState.h"
#include "R5NewOverlapDamageActor.generated.h"

class UR5NewOverlapDamageComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable, NoExport)
class R5_API AR5NewOverlapDamageActor : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5NewOverlapDamageComponent* OverlapDamageComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* StaticMeshComponent;
    
public:
    AR5NewOverlapDamageActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void OnOverlapDamageStateChanged(ER5NewOverlapDamageState State);
    
};

