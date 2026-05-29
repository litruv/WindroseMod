#include "BuildingBlueprintLibrary.h"
#include "R5BLInventoryItem.h"

void UBuildingBlueprintLibrary::ChangeVolumeClass(AVolume* Volume, TSubclassOf<AVolume> NewClass)
{
}

FGameplayTag UBuildingBlueprintLibrary::RequestTagFromString(const FString& StringTag)
{
    return {};
}

bool UBuildingBlueprintLibrary::DoesTransformsMatchAnyDirection(const FTransform& SourceTransform, const FTransform& DestinationTransform, uint8 AllowedDirections)
{
    return false;
}

void UBuildingBlueprintLibrary::GetBuildingBrushComponentsFromBlocks(const TArray<AR5BuildingBlock*>& BuildingBlocks, TArray<FR5BuildingBrushComponent>& OutComponents, bool bUseTransformRelativeToOrigin)
{
}

int32 UBuildingBlueprintLibrary::GetAccessibleBuildingAmount(const UObject* Wco, const UR5BuildingBrush* Brush, APlayerState* PlayerState)
{
    return 0;
}

bool UBuildingBlueprintLibrary::ConsumeComponentsResources(APlayerState* PlayerState, const TArray<FR5BuildingBrushComponent>& Components)
{
    return false;
}

FTransform UBuildingBlueprintLibrary::SnapToBuildingBlockGrid(const FTransform& Transform, bool bSnapToMinBuildingRotationStep)
{
    return FTransform::Identity;
}

FString UBuildingBlueprintLibrary::MakeStringFromTag(const FGameplayTag& Tag)
{
    return {};
}

TMap<TSoftObjectPtr<UR5BLInventoryItem>, int32> UBuildingBlueprintLibrary::MergeComponentsResources(const TArray<FR5BuildingBrushComponent>& Components)
{
    return {};
}

bool UBuildingBlueprintLibrary::HasResources(APlayerState* PlayerState, const TMap<TSoftObjectPtr<UR5BLInventoryItem>, int32>& Resources)
{
    return false;
}

UBuildingBlueprintLibrary::UBuildingBlueprintLibrary()
{
}
