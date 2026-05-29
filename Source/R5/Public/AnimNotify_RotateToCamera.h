#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimNotify -FallbackName=AnimNotify
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=R5Movement -ObjectName=RootMotionRotateToCameraData -FallbackName=RootMotionRotateToCameraData
#include "RootMotionRotateToCameraData.h"
#include "AnimNotify_RotateToCamera.generated.h"

UCLASS(Blueprintable, CollapseCategories)
class R5_API UAnimNotify_RotateToCamera : public UAnimNotify {
    GENERATED_BODY()
public:
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag EventTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRootMotionRotateToCameraData RotationData;
    
public:
    UAnimNotify_RotateToCamera();

};

