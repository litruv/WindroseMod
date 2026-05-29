#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5CustomPrimitiveDataEffect.h"
#include "R5CustomPrimitiveDataEffectsComponent.generated.h"

class UR5AbilitySystemComponent;
class UR5CompositeMeshComponent;
class UR5CustomPrimitiveDataEffectsParams;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5CustomPrimitiveDataEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5CustomPrimitiveDataEffectsParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5AbilitySystemComponent* ASC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UR5CompositeMeshComponent* CompositeMeshComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FR5CustomPrimitiveDataEffect> CustomPrimitiveDataEffects;
    
public:
    UR5CustomPrimitiveDataEffectsComponent(const FObjectInitializer& ObjectInitializer);

};

