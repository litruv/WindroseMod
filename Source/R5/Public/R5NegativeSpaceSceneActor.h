#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "GameFramework/Actor.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5NegativeSpaceSceneActor.generated.h"

class UR5NegativeSpaceSceneActorParams;
class USceneComponent;
class UWorld;

UCLASS(Blueprintable, NoExport)
class R5_API AR5NegativeSpaceSceneActor : public AActor {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UR5NegativeSpaceSceneActorParams* Params;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* SpawnPointComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USceneComponent* RootSceneComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* SpawnedActor;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UWorld> MainWorld;
    
public:
    AR5NegativeSpaceSceneActor(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopCapture();
    
    UFUNCTION(BlueprintCallable)
    void StartCapture();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTag GetTag() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetSpawnedActor() const;
    
};

