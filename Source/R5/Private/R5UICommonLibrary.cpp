#include "R5UICommonLibrary.h"

int32 UR5UICommonLibrary::GetWorldRandomSeed(const UObject* WorldContextObject)
{
    return 0;
}

AActor* UR5UICommonLibrary::GetInteractionTargetAvatarActor(UAbilitySystemComponent* ASC)
{
    return nullptr;
}

float UR5UICommonLibrary::GetInventoryWeight(AActor* Owner)
{
    return 0.f;
}

UCurveTable* UR5UICommonLibrary::LoadCurves(TSoftObjectPtr<UCurveTable> CurveTable)
{
    return nullptr;
}

TSoftObjectPtr<UR5BuildingItem> UR5UICommonLibrary::MakeBuildingItemSoftPtrFromPath(const FSoftObjectPath& Path)
{
    return {};
}

FWaterZoneInfoBlueprint UR5UICommonLibrary::GetZoneFactionInfo(const UObject* WorldContextObject, const FVector& InLocation)
{
    return {};
}

AActor* UR5UICommonLibrary::GetInteractionTargetActorForLocalPlayer(const UWorld* World)
{
    return nullptr;
}

AActor* UR5UICommonLibrary::GetInteractionTargetActor(const APlayerState* PlayerState)
{
    return nullptr;
}

bool UR5UICommonLibrary::HasUI(const AActor* Actor)
{
    return false;
}

bool UR5UICommonLibrary::TrySetVirtualKeyboardEnabled(const UObject* WorldContextObject, bool bEnabled, UWidget* TextWidget)
{
    return false;
}

UR5UICommonLibrary::UR5UICommonLibrary()
{
}
