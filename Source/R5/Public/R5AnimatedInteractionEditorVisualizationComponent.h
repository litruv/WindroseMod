#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "Components/ActorComponent.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERootMotionMode -FallbackName=ERootMotionMode
#include "R5AnimatedInteractionEditorVisualizationComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5_API UR5AnimatedInteractionEditorVisualizationComponent : public UActorComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERootMotionMode::Type> RootMotionExtractionType;
    
public:
    UR5AnimatedInteractionEditorVisualizationComponent(const FObjectInitializer& ObjectInitializer);

};

