#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
#include "R5AnimatedInteractionInterface.h"
#include "R5InteractionTargetBaseImpl.h"
#include "R5AnimatedInteractionObject.generated.h"

class AActor;
class UStaticMeshComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5AnimatedInteractionObject : public UActorComponent, public IR5AnimatedInteractionInterface, public IR5InteractionTargetBaseImpl {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* AttachStaticMesh;
    
public:
    UR5AnimatedInteractionObject(const FObjectInitializer& ObjectInitializer);


    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    AActor* GetOwnerActor() const override PURE_VIRTUAL(GetOwnerActor, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FString GetInteractionName() const override PURE_VIRTUAL(GetInteractionName, return TEXT(""););
    
    UFUNCTION(BlueprintCallable)
    void SetInteractionTargetTitle(const FText& NewTitle) override PURE_VIRTUAL(SetInteractionTargetTitle,);
    
};

