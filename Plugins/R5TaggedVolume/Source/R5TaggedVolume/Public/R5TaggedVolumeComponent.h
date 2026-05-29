#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=PrimitiveComponent -FallbackName=PrimitiveComponent
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
#include "GameplayTagContainer.h"
#include "ER5TaggedVolumeShapeType.h"
#include "R5TaggedVolumeComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class R5TAGGEDVOLUME_API UR5TaggedVolumeComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer VolumeTags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    ER5TaggedVolumeShapeType ShapeType;
    
public:
    UR5TaggedVolumeComponent(const FObjectInitializer& ObjectInitializer);

};

