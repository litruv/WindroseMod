#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=SceneComponent -FallbackName=SceneComponent
#include "Components/SceneComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "ER5SignificanceLevel.h"
#include "R5AnimatedInteractionData.h"
#include "R5SignificanceInterface.h"
#include "R5AnimationInteractionCollector.generated.h"

class AActor;
class IR5AnimatedInteractionInterface;
class UR5AnimatedInteractionInterface;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5AnimationInteractionCollector : public USceneComponent, public IR5SignificanceInterface {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5SignificanceLevel SignificanceLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftClassPtr<AActor>> Layouts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FR5AnimatedInteractionData> InteractionData;
    
public:
    UR5AnimationInteractionCollector(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<TScriptInterface<IR5AnimatedInteractionInterface>> GetInteractionsByType(FGameplayTag InteractionTypeTag, bool bShouldBeFree) const;
    

    // Fix for true pure virtual functions not being implemented
};

