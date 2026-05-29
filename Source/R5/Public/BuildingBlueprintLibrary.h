#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "Math/Transform.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintFunctionLibrary -FallbackName=BlueprintFunctionLibrary
#include "Kismet/BlueprintFunctionLibrary.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTag -FallbackName=GameplayTag
#include "GameplayTagContainer.h"
#include "R5BuildingBrushComponent.h"
#include "Templates/SubclassOf.h"
#include "BuildingBlueprintLibrary.generated.h"

class APlayerState;
class AR5BuildingBlock;
class AVolume;
class UObject;
class UR5BLInventoryItem;
class UR5BuildingBrush;

UCLASS(Blueprintable)
class R5_API UBuildingBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UBuildingBlueprintLibrary();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FTransform SnapToBuildingBlockGrid(const FTransform& Transform, bool bSnapToMinBuildingRotationStep);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FGameplayTag RequestTagFromString(const FString& StringTag);
    
    UFUNCTION(BlueprintCallable)
    static TMap<TSoftObjectPtr<UR5BLInventoryItem>, int32> MergeComponentsResources(const TArray<FR5BuildingBrushComponent>& Components);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString MakeStringFromTag(const FGameplayTag& Tag);
    
    UFUNCTION(BlueprintCallable)
    static bool HasResources(APlayerState* PlayerState, const TMap<TSoftObjectPtr<UR5BLInventoryItem>, int32>& Resources);
    
    UFUNCTION(BlueprintCallable)
    static void GetBuildingBrushComponentsFromBlocks(const TArray<AR5BuildingBlock*>& BuildingBlocks, TArray<FR5BuildingBrushComponent>& OutComponents, bool bUseTransformRelativeToOrigin);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetAccessibleBuildingAmount(const UObject* Wco, const UR5BuildingBrush* Brush, APlayerState* PlayerState);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool DoesTransformsMatchAnyDirection(const FTransform& SourceTransform, const FTransform& DestinationTransform, uint8 AllowedDirections);
    
    UFUNCTION(BlueprintCallable)
    static bool ConsumeComponentsResources(APlayerState* PlayerState, const TArray<FR5BuildingBrushComponent>& Components);
    
    UFUNCTION(BlueprintCallable)
    static void ChangeVolumeClass(AVolume* Volume, TSubclassOf<AVolume> NewClass);
    
};

