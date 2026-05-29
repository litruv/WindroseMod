#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "Engine/DataAsset.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5BusinessRules -ObjectName=ER5BLCharacterBodyPartType -FallbackName=ER5BLCharacterBodyPartType
#include "ER5BLCharacterBodyPartType.h"
#include "R5CompositeMeshSkinDecorParams.generated.h"

class UR5CompositeMeshBodyPartDecorParams;

UCLASS(Blueprintable)
class R5_API UR5CompositeMeshSkinDecorParams : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ER5BLCharacterBodyPartType, UR5CompositeMeshBodyPartDecorParams*> BodyDecorations;
    
    UR5CompositeMeshSkinDecorParams();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetSkinDecorIndexByTag(ER5BLCharacterBodyPartType BodyPart, FGameplayTag Tag) const;
    
};

